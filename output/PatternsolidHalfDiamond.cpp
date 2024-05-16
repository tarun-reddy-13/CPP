/************************************************
This program prints the pattern Solid Half 
Diamond.

for example:
------------
input = 5
output:
*
**
***
****
*****
****
***
**
*
************************************************/
#include<IOStream>
using namespace std;
int main(){

    int n,i=0,j=0;
    cout<<"Enter the peak row: ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<i;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}