// 0, 1, 1, 2, 3, 5, 8, 13, 21 ………… n
/*
Print n 500
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,x=1,y=1,z=1;
    cout<<"Print n ";
    cin>>n;
    cout<<0<<", "<<1;
    for(i=0;i<=n;i++)
    {
        cout<<", "<<z;
        z=x+y;
        x=y;
        y=z;
        if(z>n)
            break;
    }
}