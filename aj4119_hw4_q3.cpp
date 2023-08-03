#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long number, count = 2;
    cout<<"Enter decimal number: \n";
    cin>>number;
       int counter = 0;
       cout<<"The binary representation of "<<number<<" is ";
 
        while(2 * count <= number)
        { count *= 2;
          counter++;
        }
        
       for(int i = counter + 1;i >= 0;i-- )
        { int num=1,counter2=0;

          while(1)
        {
          
          if(counter2 == i)
          {
            break;
          }
          num *= 2;
          counter2++;

        }

          if(num<=number)
          {
            cout<<1;
            number -= num;
          }
          else
            {
              cout<<0;
            }

       }
}