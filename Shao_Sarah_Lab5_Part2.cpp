//Sarah Shao
//10/08/2024
//Lab 5

#include <iostream> //adds libraries
#include <ctime>
#include <cstdlib> 

using namespace std; //shortcut

int main()
{
    int north = 0;
    //sets north steps to 0
    int east = 0;
    //sets east steps to 0
    int direct = 0;
    //sets direction to 0
    int moves = 0;
    //sets total moves to 0
    srand(time(0));
    //sets random seed

    while (north != 3 || east != 2) 
    //while north and east are not equal to 3 and 2 to stop when it does equal 3 and 2
    {
        direct = rand() % 4 + 1;
        //sets direct to a random number between 1 and 4
        if (direct == 1)
        //if direct is equal to 1 (North)
        { 
            north = north + 1;
            //add 1 step to north
            moves = moves + 1;
            //add 1 move to total moves
        }
        else if (direct == 2)
        //if direct is equal to 2 (South
        {
            north = north - 1;
            //subtract 1 step to north
            moves = moves + 1;
            //add 1 move to total moves
        }
        else if (direct == 3)
        //if direct is equal to 3 (East)
        {
            east = east + 1;
            //add 1 step to east
            moves = moves + 1;
            //add 1 move to total moves
        }
        else if (direct == 4)
        //if direct is equal to 4 (West)
        {
            east = east - 1;
            //subtract 1 step to east
            moves = moves + 1;
            //add 1 move to total moves
        }
    }

    cout << "It took " <<  moves << " steps to get " << north << " steps north, and " << east << " steps east.";
    return 0; //ends program

/*It took 3051 steps to get 3 steps north, and 2 steps east. */

}
