//Nori Chen
//Homework Programming Lab #1:  Input/Output and Variables
//October 11, 2026

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Part 2: Streaming Music Data Usage

    double gigabytes;
    double megabytes;
    double lowQualityHours, normalQualityHours, highQualityHours;

    //Step 1: Ask the user for the # of GB in their monthly hotspot plan
    cout << "Please enter the number of gigabytes in your monthly hotspot plan: ";
    cin >> gigabytes;

    //Note: Assume that 1 GB = 1000 MB
    megabytes = gigabytes * 1000;

    lowQualityHours = megabytes / 43.2;
    normalQualityHours = lowQualityHours * 72.0;
    highQualityHours = normalQualityHours * 115.2;

    cout << fixed << setprecision(1);

    //Step 2: Print the # of hours they can stream for low, normal, & high-quality music
    cout << "\nWith " << gigabytes << " GB of data, you can stream:\n";
    cout << "Low Quality: " << lowQualityHours << " hours\n";
    cout << "Normal Quality: " << normalQualityHours << " hours\n";
    cout << "High Quality: " << highQualityHours << " hours\n";

    return 0;

}

/*
Please enter the number of gigabytes in your monthly hotspot plan:15


With 15.0 GB of data, you can stream:
Low Quality: 347.2 hours
Normal Quality: 25000.0 hours
High Quality: 2880000.0 hours
*/
