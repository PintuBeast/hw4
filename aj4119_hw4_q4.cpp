#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    {
        int n,tempVariable;
        long netProduct = 1;
        cout<<"Please enter the length of the sequence: ";
        cin>>n;
        cout<<"Please enter the sequence:\n";
        for(int i = 1;i <= n;i++)
        {
            cin>>tempVariable;
            netProduct *= tempVariable;
        }
        cout<<"The geometric mean is: "<<pow(netProduct,1.0/n);
    }

    {
        int tempVariable = 1,count = 0;
        long netProduct = 1;

        cout<<"\nPlease enter a non-empty sequence of positive integers, each one in a separate line."
            << "End your sequence by typing -1:\n";
        while(1)
        {
            cin>>tempVariable;
            if(tempVariable == -1)
            {
                break;
            }
            netProduct *= tempVariable;
            count++;
        }
        cout<<"The geometric mean is: "<<pow(netProduct,1.0/count);
    }

}