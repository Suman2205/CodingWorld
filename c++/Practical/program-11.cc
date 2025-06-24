#include<iostream>
using namespace std;
class tollBooth{
    unsigned int totalCars;
    double amount;
public:
    tollBooth(){
        totalCars=0;
        amount=0;
    }
    void payingCar(){
        totalCars++;
        amount+=0.50;
    }
    void nopayCar(){
        totalCars++;
    }
    void display(){
        cout<<"Total no. of cars: "<<totalCars<<endl;
        cout<<"Total money collected: Rs. "<<amount<<endl;
    }
};
int main(){
    tollBooth t;
    cout<<"Enter p to count paying car"<<endl;
    cout<<"Enter n to count non paying car"<<endl;
    cout<<"Enter e to print out total cars and total cash and to exit"<<endl;
    char ch;
    while (true)
    {
        cout<<"Enter your choice: ";
        cin>>ch;
        if(ch=='e'){        
            break;
        }
        switch (ch)
        {
            case 'p':
                t.payingCar();
                cout<<"Paying car recorded"<<endl;
                break;
            case 'n':
                t.nopayCar();
                cout<<"Non-Paying car recorded"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    }
    t.display();
    return 0;
}