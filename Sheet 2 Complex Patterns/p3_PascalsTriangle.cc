/*

Print n
6

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Print n"<<endl;
    cin>>n;
    cout<<endl;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 ||i==j)
            {
                a[i][j]=1;
                cout<<a[i][j]<<" ";
            }
            else
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                    cout<<a[i][j]<<" ";
                }

        }
        cout<<endl;
    }
}