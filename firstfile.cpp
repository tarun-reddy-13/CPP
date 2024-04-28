#include<iostream>

using namespace std;

int main(){

    char first;
    cout<<"Namasthe Dunia"<<endl;
    first = cin.get();
    cin.ignore(2,' '); //ignores 2 charecters if space is encountered.
    cout<<first;
    cin>>first;
    cout<<first;
    return 0;

}