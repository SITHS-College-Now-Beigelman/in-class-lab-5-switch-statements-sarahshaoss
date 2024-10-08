//Sarah Shao
//10/08/2024
//Lab 5

#include <iostream>
#include <ctime>
#include <cstdlib> 

using namespace std;

int main()
{

    int i;
    int north = 0;
    int east = 0;
    int direct = 0;
    int moves = 0;
    srand(time(0));

    while (north != 3 || east != 2) 
    {
        direct = rand() % 4 + 1;
        if (direct == 1)
        { 
            north = north + 1;
            moves = moves + 1;
        }
        else if (direct == 2)
        {
            north = north - 1;
            moves = moves + 1;
        }
        else if (direct == 3)
        {
            east = east + 1;
            moves = moves + 1;
        }
        else if (direct == 4)
        {
            east = east - 1;
            moves = moves + 1;
        }
    }

    cout << "It took " <<  moves << " steps to get " << north << " steps north, and " << east << " steps east.";
    return 0;
    
}
