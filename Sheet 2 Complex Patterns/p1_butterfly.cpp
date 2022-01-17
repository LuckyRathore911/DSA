/*
Print n
7

1     7
12   67
123 567
1234567
123 567
12   67
1     7

Print n
6

1    6
12  56
123456
123456
12  56
1    6

*/

#include <iostream>
using namespace std;
int main()
{
    int n,i,j,s=0;
    cout<<"Print n"<<endl;
    cin>>n;
    cout<<endl;
    if(n%2==0)
        s=-2;
    else
        s=-1;
    for(i=1;i<=n/2;i++)
        s+=2;
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++)
            cout<<j;
        for(j=1;j<=s;j++)
            cout<<" ";
        s-=2;
        for(j=n+1-i;j<=n;j++)
            cout<<j;
        cout<<endl;
    }
    s+=2;
    if(n%2!=0)
    {
        for(j=1;j<=n;j++)
            cout<<j;
        cout<<endl;
    }
    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<j;
        for(j=1;j<=s;j++)
            cout<<" ";
        s+=2;
        for(j=n+1-i;j<=n;j++)
            cout<<j;
        cout<<endl;
    }
    return 0;
}