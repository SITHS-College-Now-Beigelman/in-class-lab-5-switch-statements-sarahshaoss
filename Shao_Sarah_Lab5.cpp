//Sarah Shao
//10/08/2024
//Lab 5

#include <iostream>  //adds libraries needed for functions
#include <ctime>
#include <cstdlib>

using namespace std; //shortcut

int main()
{

    int direct;
    //creates a variable to store direction
    int i;
    //creates a variable to store the number of steps
    int north = 0;
    //creates a variable to store the number of steps taken in the north direction
    int south = 0;
    //creates a variable to store the number of steps taken in the south direction
    int west = 0;
    //creates a variable to store the number of steps taken in the west direction
    int east = 0;
    //creates a variable to store the number of steps taken in the east direction
    srand(time(0));
    //seeds the random number generator

    for (i = 0; i <25; i++) //walks 25 times
    {
        direct = rand() % 4 + 1;
        //generates a random number between 1 and 4

        if (direct == 1)
        //1 is north
        north = north + 1;
        //adds step to north
        else if (direct == 2)
        //2 is south
        south = south + 1;
        //adds step to south
        else if (direct == 3)
        //3 is west
        east = east + 1;
        //adds step to west
        else if (direct == 4)
        //4 is east
        west = west + 1;
        //adds step to east
    }
    cout << "The robot is " <<north << " steps north, " << south << " steps south, " << east << " steps east, and " << west << " steps west.";
    //prints the number of steps taken in each direction

    return 0; //ends program

/*The robot is 6 steps north, 9 steps south, 5 steps east, and 5 steps west. */
}
