#include<iostream>
using namespace std;
int main()
{
    long number, count=2;
    cout<<"Enter decimal number: \n";
    cin>>number;
       int counter=0;
       while(number>0)
       {
        while(2*count <= number)
        { count *= 2;
          counter++;
        }
        cout<<"counter:"<<counter+1<<" number is "<<count<<"\n";
        number -= count;
        count = 2;
       }
}