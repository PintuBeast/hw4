#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{   int x,guess,numGuesses;
    srand(time(0));
    x = rand() % 100 + 1;
    

    cout<<"I thought of a number between 1 and 100! Try to guess it.\n";
        guess = 1;
        int min = 1, max = 100;

        for(int i = 5;i > 0;i--)
        {  if(i == 0)
            {

            }
        
            cout<<"Range: ["<<min<<","<<max<<"], Number of guesses left: " <<i<<"\n";
            cout<<"Your guess: ";
            cin>>guess;
            if(guess == x)
            {
                cout<<"Congrats! You guessed my number in "<<6-i<<" guesses\n";
                break;
            }
            if(guess > x)
            {   if(i == 1)
                {
                cout<<"Out of guesses! My number is "<<x;
                break;
                }
                cout<<"Wrong! My number is smaller\n";
                max = guess - 1;
            }
            else
            {
                if(i == 1)
                {
                cout<<"Out of guesses! My number is "<<x;
                break;
                }

                cout<<"Wrong! My number is bigger\n";
                min = guess + 1;
            }
            
        }
        
        
}