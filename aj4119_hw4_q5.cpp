#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Please enter a positive integer: ";
   cin>>n;
   int j;
   for(int i=-2*n+1;i<=2*n-1;i += 2)
   {
    if(i<0)
    {
        j = -1*i;
    }
    else
    {
        j = i;
    }
    for(int k=0;k<=2*n-1-j; k+=2)
    {
        cout<<" ";
    }

    for(int l=1;l<=j;l++)
    {
        cout<<"*";
    }
    cout<<"\n";
   }
}