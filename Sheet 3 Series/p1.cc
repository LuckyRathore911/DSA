/*
Print n 8
1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + 1/(5*5) + 1/(6*6) + 1/(7*7) + 1/(8*8)
Sum= 1.52742

*/
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    float s=1;
    cout<<"Print n ";
    cin>>n;
    cout<<1<<" ";
    for(i=2;i<=n;i++)
    {
        s+=(float)1/(i*i);
        cout<<"+ 1/("<<i<<"*"<<i<<") ";
    }
    cout<<endl;
    // std::cout. precision(2);
    cout<<"Sum= "<<s;
}