/*

Print n
5
*
**
***
****
*****

*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Print n"<<endl;
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {   
        for(j=0;j<i;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}