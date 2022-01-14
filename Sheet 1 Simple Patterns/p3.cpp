/*

Print n
6
******
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
    int n,i,j,k;
    cout<<"Print n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            cout<<" ";
        for(k=0;k<=n-i;k++)
            cout<<"*";
        cout<<endl;
    }
}