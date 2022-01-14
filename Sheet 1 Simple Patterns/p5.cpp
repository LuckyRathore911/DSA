/*

Print n
6
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * *
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
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<"* ";
        cout<<endl;
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
            cout<<" ";
        for(k=1;k<=n-i;k++)
            cout<<"* ";
        cout<<endl;
    }
}