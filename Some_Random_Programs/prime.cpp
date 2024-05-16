#include<iostream>
using namespace std;
bool is_prime(int);
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
        is_prime(i)?cout<<i<<"   ":cout<<" ";
    return 0;
}
bool is_prime(int n){
    if(n==1)
        return false;
    for(int i=3;i<=(n/2);i++)
        if(n%i==0)
            return false;
    return true;
}