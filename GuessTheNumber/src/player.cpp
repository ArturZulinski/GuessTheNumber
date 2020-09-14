#include "player.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

player::player()
{
    cout << "Please pick number between 1-1000." << endl;
    srand (time(NULL));

    int number,guess,step=0,pic=0,finnish=1,numberHigh=1000,numberLow=1;
    number = rand() % 1000 + 1;

    while(finnish==1){
    cout << "Is it: " << number << " ? YES (1),LOWER (2), HIGHER (3):  ";
    cin >> pic ;

    if(pic == 1)
    {
        step++;
        cout << '\a';
        cout << "Congratulation to ME !! I win in " << step << " steps!" << endl;
        finnish=0;
    }
    if(pic == 2) //lower then previous guess
    {
        step++;
        numberHigh=number;
        number = rand() % (numberHigh - numberLow) + numberLow+1;
    }
    if(pic ==3) //higher then previous guess
    {
        step++;
        numberLow=number;
        number = rand() % (numberHigh - numberLow) + numberLow+1;
    }
    if((pic<1) || (pic>3))
    {
        cout << "Try again" <<endl;
    }
    }
}

player::~player()
{
    //dtor
}
