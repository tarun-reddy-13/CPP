/************************************************
This program prints the pattern of Numeric Hallow
Half Pyramid.

for example:
------------
input = 5
output:
1
1 2
1   3
1     4
1 2 3 4 5
************************************************/
#include<IOStream>
using namespace std;
int main(){

    int n=0, i=0, j=0;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==n||j==1||j==n||i==j)
                cout<<j<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }   
    return 0;
}