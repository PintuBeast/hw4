#include<iostream>
using namespace std;
int main()
{
    int n,numEven,numOdd;
    cout<<"Please enter a positive integer n:";
    cin>>n;
    for (int i = 1;i <= n;i++)
    {  int temp = i;
       numEven = 0;
       numOdd = 0; 
        while (temp > 0)
        {
            if(temp % 2 == 0)
            {
                numEven++;
            }
            else{
                numOdd++;
            }
            temp=temp / 10;

        }
        if(numEven>numOdd)
        {
            cout<<i<<"\n";
        }
    }

}