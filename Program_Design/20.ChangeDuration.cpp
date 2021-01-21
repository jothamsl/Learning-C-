#include <iostream>
using namespace std;

int main() 
{
    // Variable declarations 
    unsigned long duration, hours, minutes, seconds;
    
    // Assignment 
    cout << "Enter positive integer for the number of seconds: ";
    cin >> duration;

    // Processing 
    // Extract the number of hours that can fit in seconds
    hours = duration / 3600L;
    minutes = (duration-(hours * 3600L)) / 60L;
    seconds = duration - (hours * 3600L) - (minutes * 60);

    // Output 
    cout << "Given Duration in seconds: " << duration << endl;
    cout << "Result: ";
    cout << hours << " Hours, ";
    cout << minutes << " minutes, and ";
    cout << seconds << " seconds\n";
    return 0;
}


