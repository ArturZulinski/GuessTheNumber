#include "computer.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

computer::computer()
{
    srand (time(NULL));

    int number,guess,step=0,finnish=1;
    number = rand() % 1000 + 1;

    cout << "I've picked number between 1-1000" << endl;
    cout << "Can You guess which number is it?" << endl;
    //cout << number << endl;
    cin >> guess;
    while(finnish==1){
    if(number == guess)
    {
        step++;
        cout << '\a';
        cout << "Congratulation!! You win in " << step << " steps" << endl;
        finnish=0;
    }
    if((number > guess) && (guess>0) && (guess<1001))
    {
        step++;
        cout << "You aimed to low. Try higher...";
        cin >> guess;
    }
    if((number < guess) && (guess>0) &&(guess<1001))
    {
        step++;
        cout << "You aimed to high. Try lower...";
        cin >> guess;
    }
    if((guess<=0) || (guess>=1001))
    {
        cout << "You pick number from wrong interval! Try again: ";
        cin >> guess;
    }
          }
}

computer::~computer()
{
    //dtor
}
