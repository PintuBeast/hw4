#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long number, count=2;
    cout<<"Enter decimal number: \n";
    cin>>number;
       int counter=0;
       cout<<"The binary representation of "<<number<<" is ";
 
        while(2*count <= number)
        { count *= 2;
          counter++;
        }
        
       for(int i=counter+1;i>=0;i-- )
        { if(pow(2,i)<=number)
          {
            cout<<1;
            number -= pow(2,i);
          }
          else
            {
              cout<<0;
            }

       }
}