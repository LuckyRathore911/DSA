/*

Print n
6
     1
    2 2
   3   3
  4     4
 5       5
6         6
 5       5
  4     4
   3   3
    2 2
     1

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,t,s=1;
    cout<<"Print n"<<endl;
    cin>>n;


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";                      //first space
        t=i;
        cout<<t;                            //first number on ith row
        if(i!=1)                            //Middle spaces: 0,1,3,5,7,....
        {
            for(k=1;k<=s;k++)
                cout<<" ";
            s+=2;                           //for i=5, space=7 then S+=2 gives 9
        }
    
        if(i!=1)                            //to not repeat 1 in first line
            cout<<t;                        //second number on ith row
        cout<<endl;
    }


    s-=4;                                   //hence s-=4
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";
        t=i;
        cout<<t;
        for(k=1;k<=s;k++)
            cout<<" ";
        s-=2;
        if(i!=1)                             // to not repeat 1 in last line
            cout<<t<<endl;
    }
}