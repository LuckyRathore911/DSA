/*

Print n 19
1 2 3 6 9 18 27 54 81 162 243 486 729 1458 2187 4374 6561 13122 19683 

*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j=1;
    cout<<"Print n ";
    cin>>n;
    int arr[n];
    arr[0]=1;
    cout<<arr[0]<<" ";
    for(i=0;i<n-1;i+=2)
    {
        arr[i+1]=arr[i]+j;
        arr[i+2]=arr[i+1]+j;
        cout<<arr[i+1]<<" "<<arr[i+2]<<" ";
        j*=3;
    }
}