#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int number,chance=0,guess;
    srand(time(0));
    number=rand()%100+1;
   cout<<"\t\t\tWelcome to the NUMBER GUESSING GAME\n\n";

   do
   {
    cout<<"Guess a number between 1 & 100:";
    cin>>guess;
    chance++;


    if(guess<number){
        cout<<"Your guess "<<guess<<" is too low \n\n\n";

    }
    else if(guess>number){
        cout<<"Your guess "<<guess<<" is too high \n\n\n";
    }
    else{
        cout<<"\n\nWow! you got the correct guess ";
    }
   } while (guess!=number);
   return 0;
}
