/*

Print n
9

I               I
 H             H
  G           G
   F         F
    E       E
     D     D
      C   C
       B B
        A

*/

#include<iostream>
using namespace std;
int main()
{
    char a='A';
    int n,b,s=-1,i,j;
    cout<<"Print n"<<endl;
    cin>>n;
    cout<<endl;
    b=(int)a;
    b+=n-1;
    for(i=1;i<n;i++)
        s+=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            cout<<" ";
        cout<<(char)b;
        for(j=1;j<=s;j++)
            cout<<" ";
        if(i!=n)
            cout<<(char) b;
        s-=2;
        b--;
        cout<<endl;
    }
}