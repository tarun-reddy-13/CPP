#include<iostream>
using namespace std;
int main(){
    float p,t,r;
    cout<<"Principle amount: ";
    cin>>p;
    cout<<"Time :";
    cin>>t;
    cout<<"Rate of Intrest: ";
    cin>>r;
    cout<<"Simple Intrest: "<<(p*t*r)/100;
    return 0;
}