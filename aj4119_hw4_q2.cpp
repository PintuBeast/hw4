#include<iostream>
using namespace std;
int main()
{
    long number;
    long num1000s=0, num500s=0, num100s=0, num50s=0, num10s=0, num5s=0, num1s=0;
    
    cout<<"Enter decimal number: \n";
    cin>>number;
    cout<<number<<" is ";

    num1000s = number/1000;
    number %= 1000;
    num500s = number /500;
    number %= 500;
    num100s = number /100;
    number %= 100;    
    num50s = number /50;
    number %= 50;
    num10s = number /10;
    number %= 10;
    num5s = number /5;
    number %= 5;
    num1s = number ;
    
    for (int i=0;i<num1000s;i++)
    {
        cout<<"M";
    }
    for (int i=0;i<num500s;i++)
    {
        cout<<"D";
    }
    for (int i=0;i<num100s;i++)
    {
        cout<<"C";
    }
    for (int i=0;i<num50s;i++)
    {
        cout<<"L";
    }
    for (int i=0;i<num10s;i++)
    {
        cout<<"X";
    }
    for (int i=0;i<num5s;i++)
    {
        cout<<"V";
    }
    for (int i=0;i<num1s;i++)
    {
        cout<<"I";
    }                
    
}