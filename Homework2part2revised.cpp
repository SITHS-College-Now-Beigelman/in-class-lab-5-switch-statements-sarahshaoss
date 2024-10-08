//Sarah Shao
//09/23/2024
//Homework #1 Lab #2

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
    double gigabytes;
    int typeOfQuality;

    cout << "What is the number of gigabytes in your monthly hotspot plan? \n> ";
    cin >> gigabytes;
    cout << "Which type of quality streaming services do you want to stream? 1 = Low Quality 2 = Medium Quality 3 = High Quality\n> ";
    cin >> typeOfQuality;
    switch (typeOfQuality)
    {
        case 1:
        cout << "Low Quality: " << fixed << setprecision(1) << (gigabytes*1000)/43.2 << " hours\n";    
        break; 
        //mb = gigabytes*1000 then divided by 43.2 to find the amount of hours of low streaming services
        case 2:
        cout << "Medium Quality: " << fixed << setprecision(1) << (gigabytes*1000)/72 << " hours\n";
        // same but divided by 72 for the medium
        break;
        case 3:
        cout << "High Quality: " << fixed << setprecision(1) << (gigabytes*1000)/115.2 << " hours\n";
        // set precision is 1 because minutes is useful in this context
        break;
    }
    return 0; //ends program
}