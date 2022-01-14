/*

Print n
7

7
76
765
7654
76543
765432
7654321
76543210
7654321
765432
76543
7654
765
76
7

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Print n"<<endl;
    cin>>n;
    cout<<endl;
    for(i=0;i<=n;i++)
    {
        k=n;
        for(j=0;j<=i;j++)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        k=n;
        for(j=1;j<=n-i;j++)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
    }
}