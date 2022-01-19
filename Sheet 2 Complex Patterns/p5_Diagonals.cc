/*

Print odd n
7

*******
**   **
* * * *
*  *  *
* * * *
**   **
*******

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Print odd n"<<endl;
    cin>>n;
    cout<<endl;
    if(n%2!=0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j || i+j==n+1 || i==1 || i==n || j==1 || j==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"Even numbers not allowed";
}