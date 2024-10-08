//Sarah Shao
//10/08/2024
//Lab 5

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    
    int direct;
    int i;
    int north = 0;
    int south = 0;
    int west = 0;
    int east = 0;
    srand(time(0));

    for (i = 0; i <25; i++)
    {
        direct = rand() % 4 + 1;

        if (direct == 1)
        north = north + 1;
        else if (direct == 2)
        south = south + 1;
        else if (direct == 3)
        east = east + 1;
        else if (direct == 4)
        west = west + 1;
    }
    cout << "The robot is " <<north << " steps north, " << south << " steps south, " << east << " steps east, and " << west << " steps west.";
    return 0;
}