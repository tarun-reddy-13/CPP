/************************************************
This program prints the pattern of Inverted
Numeric Hallow Half Pyramid.

for example:
------------
input = 5
output:
1 1 1 1 1
2     2
3   3
4 4
5
************************************************/
#include<IOStream>
using namespace std;
int main(){

    int n=0, i=0, j=0;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||j==1||i+j==n+1)
                cout<<i<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }   
    return 0;
}