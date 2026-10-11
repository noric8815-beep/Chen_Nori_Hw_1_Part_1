//Nori Chen
//Homework Programming Lab #1:  Input/Output and Variables
//October 11, 2026

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Part 1: Calories Burned During Exercise
    
    double duration, weight, calorieGoal;

    //Set MET (Metabolic Equivalent of Task)
    double walkingSlowlyMET = 2.0;
    double walkingQuicklyMET = 3.0;
    double joggingMET = 8.8;

    //Step 1: Ask the user for the exercise duration (min) & their weight (kg)
    cout << "Please enter exercise duration in minutes: ";
    cin >> duration;

    cout << "Please enter your weight in kilograms: ";
    cin >> weight;

    //Step 2: Print the total calories burned for 3 activities
    //Total Calories Burned = (Duration in mins) * (MET * 3.5 * Weight in kg) / 200
    double walkingSlowlyCalories =
        (duration) * (walkingSlowlyMET * 3.5 * weight) / 200;
    double walkingQuicklyCalories =
        (duration) * (walkingQuicklyMET * 3.5 * weight) / 200;
    double joggingCalories =
        (duration) * (joggingMET * 3.5 * weight) / 200;

    cout << fixed << setprecision(1);
    cout << "\nCalories Burned During Exercise\n";
    cout << "--------------------------------------\n";
    cout << "walking slowly: " << walkingSlowlyCalories << " calories\n";
    cout << "walking quickly: " << walkingQuicklyCalories << " calories\n";
    cout << "jogging: " << joggingCalories << " calories\n";

    //Extra Credit: Ask the user how many calories they want to burn & their weight in kg
    cout << "\nHow many calories do you want to burn? ";
    cin >> calorieGoal;

    //Calculate the required duration for each activity in order to reach calorie goal
    // Duration in minutes = (Total Calories Burned * 200) / (MET * 3x5 * Weight in kg)
    double walkingSlowlyTime =
        (calorieGoal * 200) / (walkingSlowlyMET * 3.5 * weight);
    double walkingQuicklyTime =
        (calorieGoal * 200) / (walkingQuicklyMET * 3.5 * weight);
    double joggingTime =
        (calorieGoal * 200) / (joggingMET * 3.5 * weight);

    //Create a table showing the duration (mins) needed to burn that many calories for the 3 exercises
    cout << "\nTime needed to burn " << calorieGoal << "calories\n";
    cout << "---------------------------------------------------\n";
    cout << left << setw(22) << "exercise"
         << right << setw(18) << "minutes required\n";
    cout << "___________________________________________________\n";

    cout << left << setw(22) << "walking slowly"
         << right << setw(18) << walkingSlowlyTime << "\n";
    cout << left << setw(22) << "walking quickly"
         << right << setw(18) << walkingQuicklyTime << "\n";
    cout << left << setw(22) << "jogging"
         << right << setw(18) << joggingTime << "\n";

    return 0;

}

/*
Please enter exercise duration in minutes:25

Please enter your weight in kilograms:55


Calories Burned During Exercise
--------------------------------------
walking slowly: 48.1 calories
walking quickly: 72.2 calories
jogging: 211.8 calories

How many calories do you want to burn?300


Time needed to burn 300.0calories
---------------------------------------------------
exercise               minutes required
___________________________________________________
walking slowly                     155.8
walking quickly                    103.9
jogging                             35.4
*/
