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
    int north;
    int south;
    int west;
    int east;
    int direct;
    int moves;
    srand(time(0));

    while (north <= 3 || east <=2) 
    {
        direct = rand() % 4 + 1;
        if (direct == 1)
        {north = north + 1;
        moves = moves + 1;}
        else if (direct == 2)
        {south = south + 1;
        moves = moves + 1;}
        else if (direct == 3)
        {east = east + 1;
        moves = moves + 1;}
        else if (direct == 4)
        {west = west + 1;
        moves = moves + 1;}
    }

    cout << moves << " " << north << " " << east;
    return 0;
    
}
