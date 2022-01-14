/*

Print n
5
    1
   321
  54321
 7654321
987654321

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
        for(k=2*i-1;k>=1;k--)
            cout<<k;
        cout<<endl;
    }
}