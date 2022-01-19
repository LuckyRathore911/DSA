/*    1 + (1+2) + (1+2+3) + ..... + (1+2+3+4+.....+n)
Print n 4
Sum= 20
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    float s=1;
    cout<<"Print n ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            s+=(float)j;
        }
    }
    cout<<"Sum= "<<s;
}