//Sarah Shao
//09/23/2024
//Homework #1 Lab #1

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
    double Weight;
    //variable for how much the person weighs
    int exercise;
    //creates variable for which exercise they chose
    int WalkSlow = 2; 
    // values for the MET
    int WalkQuick = 3;
    // values for the MET
    double Jogging = 8.8;
    // values for the MET
    int Duration;
    //Variable for how long they exercised
    double Calories;
    //Variable for how many calories they want to burn

    cout << "Which exercise did you do? 1 = Walking Slow 2 = Walking Quick 3 = Jogging\n> ";
    cin >> exercise; //stores which type of exercise they did
    cout << "What is the number of minutes you exercised for?\n> ";
    cin >> Duration; //store how many minutes they exercised for
    cout << "What is your weight in kilograms?\n> ";
    cin >> Weight; //store their weight in kilograms
    switch (exercise)
    {
        case 1:
        cout << "If you walked slowly you lost: "<< fixed << setprecision(0) << Duration * ((WalkSlow * 3.5 * Weight) / 200 ) << " calories.\n\n";
        break;
        case 2: 
        cout << "If you walked quickly you lost: "<< fixed << setprecision(0) << Duration * ((WalkQuick * 3.5 * Weight) / 200 ) << " calories.\n\n";
        break;
        case 3:
        cout << "If you jogged you lost: "<< fixed << setprecision(0) << Duration * ((Jogging * 3.5 * Weight) / 200 ) << " calories.\n\n";
        break;
        default:
        cout << "That is not a correct number that correlates to an exercise.";
        break;

    }
    
    cout << "How many calories do you want to burn?\n> ";
    cin >> Calories; //store how much calories they want to burn
    cout << "What is your weight in kilograms?\n> ";
    cin >> Weight; //store how much they weigh
    switch (exercise)
    {
        case 1:
        cout << "How many minutes of walking slowly you need to burn off " << Calories << " Calories:\n";
        cout << "Walking Slowly: " << fixed << setprecision(1) << Calories / ((WalkSlow * 3.5 * Weight)/200) << " minutes\n";     // duration = cal / ((MET * 3.5 * Weight)/200)
        break;
        case 2:
        cout << "How many minutes of walking quickly you need to burn off " << Calories << " Calories:\n";
        cout << "Walking Quickly: " << fixed << setprecision(1) << Calories / ((WalkQuick * 3.5 * Weight)/200) << " minutes\n";  //set precision is 1 just in case to account for seconds
        break;
        case 3:
        cout << "How many minutes of jogging you need to burn off " << Calories << " Calories:\n";
        cout << "Jogging: " << fixed << setprecision(1) << Calories / ((Jogging * 3.5 * Weight)/200) << " minutes\n";
        break;
    return 0; //ends program
    }

/* Which exercise did you do? 1 = Walking Slow 2 = Walking Quick 3 = Jogging
> 3
What is the number of minutes you exercised for?
> 30
What is your weight in kilograms?
> 50
If you jogged you lost: 231 calories.

How many calories do you want to burn?
> 231
What is your weight in kilograms?
> 50
How many minutes of jogging you need to burn off 231 Calories:
Jogging: 30.0 minutes */

}