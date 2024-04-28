#include<iostream>
using namespace std;
int main(){
    int choice;
    float a, b;
    cout<<"1. Add\n2. Subract\n3. Multiply\n4. Divide\n0. Terminate\nEnter your choice: ";
    cin>>choice;
    while(choice>=1&&choice<=4){
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
        switch(choice){
            case 1: cout<<a+b<<endl;break;
            case 2: cout<<a-b<<endl;break;
            case 3: cout<<a*b<<endl;break;
            case 4: cout<<a/b<<endl;break;
        }
        cout<<"Enter your choice: ";
        cin>>choice;
    }
    cout<<"Program Terminated...!";
    return 0;
}