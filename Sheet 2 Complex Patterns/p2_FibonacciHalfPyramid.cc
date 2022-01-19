/*
Print n
6

1
1 2 
3 5 8 
13 21 34 55 
89 144 233 377 610 
987 1597 2584 4181 6765 10946 
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x=1,y=1,z=1;
    cout<<"Print n"<<endl;
    cin>>n;
    cout<<endl;
    cout<<1<<endl;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<z<<" ";
            z=x+y;
            x=y;
            y=z;
        }
        cout<<endl;
    }
}