#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class BTree {
private:
    struct Node {
        vector<int> keys;
        vector<Node*> children;
        bool isLeaf;
        Node(bool leaf = true) : isLeaf(leaf) {}
    };

    Node* root;
    int t;

public:
    BTree(int degree) {
        root = new Node();
        t = degree;
    }
    void traverse(Node* node) {
        if (node != nullptr) {
            for (int i = 0; i < node->keys.size(); i++) {
                if (!node->isLeaf) {
                    traverse(node->children[i]);
                }
                cout << node->keys[i] << " ";
            }
            if (!node->isLeaf) {
                traverse(node->children[node->keys.size()]);
            }
        }
    }

    void traverse() {
        traverse(root);
    }

    void insert(int key) {
        if (root->keys.size() == 2 * t - 1) {
            Node* newNode = new Node(false);
            newNode->children.push_back(root);
            splitChild(newNode, 0, root);
            root = newNode;
        }
        insertNonFull(root, key);
    }

    void insertNonFull(Node* node, int key) {
        int i = node->keys.size() - 1;
        if (node->isLeaf) {
            node->keys.push_back(0);
            while (i >= 0 && key < node->keys[i]) {
                node->keys[i + 1] = node->keys[i];
                i--;
            }
            node->keys[i + 1] = key;
        } else {
            while (i >= 0 && key < node->keys[i]) {
                i--;
            }
            i++;
            if (node->children[i]->keys.size() == 2 * t - 1) {
                splitChild(node, i, node->children[i]);
                if (key > node->keys[i]) {
                    i++;
                }
            }
            insertNonFull(node->children[i], key);
        }
    }
    void splitChild(Node* parent, int index, Node* fullChild) {
        Node* newNode = new Node(fullChild->isLeaf);
        parent->keys.insert(parent->keys.begin() + index, fullChild->keys[t - 1]);
        parent->children.insert(parent->children.begin() + index + 1, newNode);
        
        newNode->keys.assign(fullChild->keys.begin() + t, fullChild->keys.end());
        fullChild->keys.resize(t - 1);

        if (!fullChild->isLeaf) {
            newNode->children.assign(fullChild->children.begin() + t, fullChild->children.end());
            fullChild->children.resize(t);
        }
    }
    void deleteKey(int key) {
        deleteKey(root, key);
        if (root->keys.empty()) {
            Node* oldRoot = root;
            root = root->children.empty() ? nullptr : root->children[0];
            delete oldRoot;
        }
    }

    void deleteKey(Node* node, int key) {
        int idx = findKey(node, key);

        if (idx < node->keys.size() && node->keys[idx] == key) {
            if (node->isLeaf) {
                node->keys.erase(node->keys.begin() + idx);
            } else {
                deleteFromNonLeaf(node, idx);
            }
        } else {
            if (node->isLeaf) {
                cout << "The key " << key << " does not exist in the tree.\n";
                return;
            }

            bool flag = (idx == node->keys.size());
            if (node->children[idx]->keys.size() < t) {
                fill(node, idx);
            }

            if (flag && idx > node->keys.size()) {
                deleteKey(node->children[idx - 1], key);
            } else {
                deleteKey(node->children[idx], key);
            }
        }
    }

    int findKey(Node* node, int key) {
        int idx = 0;
        while (idx < node->keys.size() && node->keys[idx] < key) {
            ++idx;
        }
        return idx;
    }

    void deleteFromNonLeaf(Node* node, int idx) {
        int k = node->keys[idx];

        if (node->children[idx]->keys.size() >= t) {
            Node* pred = node->children[idx];
            while (!pred->isLeaf) {
                pred = pred->children[pred->keys.size()];
            }
            int predKey = pred->keys.back();
            node->keys[idx] = predKey;
            deleteKey(node->children[idx], predKey);
        } else if (node->children[idx + 1]->keys.size() >= t) {
            Node* succ = node->children[idx + 1];
            while (!succ->isLeaf) {
                succ = succ->children[0];
            }
            int succKey = succ->keys.front();
            node->keys[idx] = succKey;
            deleteKey(node->children[idx + 1], succKey);
        } else {
            merge(node, idx);
            deleteKey(node->children[idx], k);
        }
    }

    void fill(Node* node, int idx) {
        if (idx != 0 && node->children[idx - 1]->keys.size() >= t) {
            borrowFromPrev(node, idx);
        } else if (idx != node->keys.size() && node->children[idx + 1]->keys.size() >= t) {
            borrowFromNext(node, idx);
        } else {
            if (idx == node->keys.size()) {
                merge(node, idx - 1);
            } else {
                merge(node, idx);
            }
        }
    }

    void borrowFromPrev(Node* node, int idx) {
        Node* child = node->children[idx];
        Node* sibling = node->children[idx - 1];

        child->keys.insert(child->keys.begin(), node->keys[idx - 1]);
        if (!child->isLeaf) {
            child->children.insert(child->children.begin(), sibling->children.back());
            sibling->children.pop_back();
        }
        node->keys[idx - 1] = sibling->keys.back();
        sibling->keys.pop_back();
    }

    void borrowFromNext(Node* node, int idx) {
        Node* child = node->children[idx];
        Node* sibling = node->children[idx + 1];

        child->keys.push_back(node->keys[idx]);
        if (!child->isLeaf) {
            child->children.push_back(sibling->children.front());
            sibling->children.erase(sibling->children.begin());
        }
        node->keys[idx] = sibling->keys.front();
        sibling->keys.erase(sibling->keys.begin());
    }

    void merge(Node* node, int idx) {
        Node* child = node->children[idx];
        Node* sibling = node->children[idx + 1];

        child->keys.push_back(node->keys[idx]);
        child->keys.insert(child->keys.end(), sibling->keys.begin(), sibling->keys.end());
        child->children.insert(child->children.end(), sibling->children.begin(), sibling->children.end());

        node->keys.erase(node->keys.begin() + idx);
        node->children.erase(node->children.begin() + idx + 1);
        delete sibling;
    }
};

int main() {
    int t, choice, key;
    cout << "Enter the minimum degree (t) of the B-tree: ";
    cin >> t;
    BTree tree(t);
    cout << "\nB-Tree Operations:\n";
    cout << "1. Insert\n2. Delete\n3. Traverse\n4. Exit\n";
    while (choice != 4){
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter key to insert: ";
            cin >> key;
            tree.insert(key);
            break;
        case 2:
            cout << "Enter key to delete: ";
            cin >> key;
            tree.deleteKey(key);
            break;
        case 3:
            cout << "B-tree traversal: ";
            tree.traverse();
            cout << endl;
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } 

    return 0;
}
