/*

Print n
8

1      1
 2    2
  3  3
   44
   55
  6  6
 7    7
8      8

Print n
5

1   1
 2 2 
  3  
 4 4 
5   5

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
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
                cout<<i;
            else
                cout<<" ";
        }
        cout<<endl;

    }
}