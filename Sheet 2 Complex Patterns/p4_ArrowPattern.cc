/*

Print n
5

*
 **
  ***
   ****
    *****
   ****
  ***
 **
*

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Print n"<<endl;
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<i;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}