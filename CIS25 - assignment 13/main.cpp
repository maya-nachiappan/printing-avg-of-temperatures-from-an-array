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
    int max; // maximum amount of temperatures that can be taken
    double sum=0.0;
    int count=0;
    double temp;
    double farenheit;
    double celsius;
    char unit;
    
    
    // inputting the amount of temperatures the user has
    cout << "enter the amount of temperatures you have: " << endl;
    cin >> max;
    
    // input the unit of the temperatures used
    cout << "enter the unit, 'F' or 'C'" << endl;
    cin >> unit;
    
    // creating array to store number temperatures provided by user
    double temperatures[max];
    
    for (int i=0; i<max; i++) // for loop to enter temperatures in array
    {
        cout << "enter temperature " << i+1 <<":" << endl; // the user is prompted till each array index is filled
        cin >> temp;
        
        
        temperatures[count] = temp; // temperatures stored in array index
        sum += temp; // temperatures keep adding to sum
        count++; // count is incremented
        
    }
    
        
  if (count>0)
{
    double average=sum/max; // average temp is sum divided by max amount of temperatures
    
    // formulas
    farenheit = (average*9.0/5.0)+32.0; // conversion to farenheit
    celsius = (average-32.0)*(5.0/9.0); // conversion to celsius
    
    if ( unit=='F') // if unit is farenheit
    {
        cout << "the average temperature is: " << average << " degrees farenheit and " << celsius << " degrees celsius"<< endl;
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
}
else
{
    cout << "no temperatures were entered" << endl;
}
return 0;
}
