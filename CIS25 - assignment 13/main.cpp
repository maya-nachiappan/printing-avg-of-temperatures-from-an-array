//
//  CIS25 - assignment 13
//
//  Created by maya nachiappan on 9/16/24.
//
// program that asks a user to give a list of temperatures then reports the average temperature

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // initializing variables
    int max; // number of temperatures that can be taken
    double sum=0.0;
    double farenheit;
    double celsius;
    char unit;
    
    
    // inputting the amount of temperatures the user has
    cout << "Enter the amount of temperatures you have: " << endl;
    cin >> max;
    
    // input the unit of the temperatures used
    cout << "Enter the unit used, 'F' or 'C'" << endl;
    cin >> unit;
    
    // creating array to store number temperatures provided by user
    double temperatures[max];
    
    for (int i=0; i<max; ++i) // for loop to enter temperatures in array
    {
        cout << "enter temperature " << i+1 <<":" << endl; // the user is prompted till each array index is filled
        cin >> temperatures[i]; // temperatures stored in array index
    }
    
    for (int i=0;i<max; ++i)
    {
        sum += temperatures[i]; // temperatures keep adding to sum
        
    }
    
    
    
    double average=sum/max; // average temp is sum divided by max amount of temperatures
    
    // formulas
    farenheit = (average*9.0/5.0)+32.0; // conversion to farenheit
    celsius = (average-32.0)*(5.0/9.0); // conversion to celsius
    
    if ( unit=='F') // if unit is farenheit
    {
        cout << "The average temperature is: " << average << " degrees farenheit and " << celsius << " degrees celsius"<< endl;
    }
    else if (unit=='C') // if unit is celsius
    {
        cout << "the average temperature is " << average << " degrees celsius and " << farenheit <<
        " degrees farenheit" << endl;
    }
    else
    {
        cout << "incorrect unit used" << endl;
        return 1;
    }
    
return 0;
}
