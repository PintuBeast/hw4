#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Please enter a positive integer: ";
    cin>>n;
     //method 1
    {
        cout<<"Method 1: using While loop \n";
        int numIntegers=0, i=2;
        while(numIntegers<n)
        {
            cout<<i<<"\n";
            numIntegers++;
            i=i+2;
        }
    }
    //method 2
    {
        cout<<"Method 2: using For loop \n";
        int numIntegers=0, i=2;
        for(numIntegers=0;numIntegers<n;numIntegers++)
        {
            cout<<i<<"\n";
            i=i+2;
        }
    }

}