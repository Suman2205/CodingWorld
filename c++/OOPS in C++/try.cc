#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and write initial data to the file
    ofstream out("example.txt");
    cout<<out.tellp()<<endl;

    // out << "Line 1: Hello, World!\n";
    // out << "Line 2: C++ Programming\n";
    // out << "Line 3: File Handling\n";
    out<<"Python Language\n";
    out.close();

    // Open the file in read and write mode
    fstream in;
    in.open("example.txt", ios::in | ios::out);
    if (!in) {
        cerr << "File could not be opened." << endl;
        return 1;
    }
    cout<<in.tellg()<<endl;
    cout<<in.tellp()<<endl;
    // Move the pointer to the beginning of line 2
    in.seekp(7, ios::beg);  // Assuming fixed length for simplicity

    // Update the content of line 2
    in << "Programming Language\n";
    cout<<in.tellg()<<endl;
    cout<<in.tellp()<<endl;
    // Close the file
    in.seekg(0);

    // Read and display the updated content
    // in.open("example.txt", ios::in);
    if (!in) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    // in>>line;
    // cout<<line;
    // char ch;
    // while(in){
    //     in.get(ch);
    //     cout<<ch;
    // }
    in.close();

    return 0;
}
