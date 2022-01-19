/*
1 - x^2/2! + x^4/4! – x^6/6! + ….........
*/
#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
    int f;
    if(n==0)
        return 1;
    else
        f= n*fact(n-1);
    return (f);
}
int main()
{
    int n,i,x,p=0;
    float s=1;
    cout<<"Print n and x ";
    cin>>n>>x;
    for(i=2;i<=n;i++)
    {
        p+=2;
        if(i%2==0)
            s-=pow(x,p)/fact(p);
        else
            s+=pow(x,p)/fact(p);
    }
    cout<<"Sum= "<<s;
}
/*
Print n and x 3 2
Sum= -0.333333
*/