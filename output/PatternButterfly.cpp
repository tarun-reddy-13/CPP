/************************************************
This program prints the Butterfly Pattern

for example:
------------
input = 11
output:
*                   *
* *               * *
* * *           * * *
* * * *       * * * *
* * * * *   * * * * *
* * * * * * * * * * *
* * * * *   * * * * *
* * * *       * * * *
* * *           * * *
* *               * *
*                   *
************************************************/
#include<IOStream>
using namespace std;
int main(){

    int n,i=0,j=0;
    cout<<"Enter the peak row: ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<n;j++){
            if((j>i&&j<n-i-1)||(i+j>=n&&j<=i-1))
                cout<<"  ";
            else
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}