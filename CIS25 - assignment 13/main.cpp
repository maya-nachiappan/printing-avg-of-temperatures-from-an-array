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
    int max; // maximum amount of temperatures that can be taken
    double sum=0.0;
    int count=0;
    double temp;
    double farenheit;
    double celsius;
    char unit;
    
    
    // inputting the amount of temperatures
    cout << "enter the amount of temperatures you have: " << endl;
    cin >> max;
    cout << "enter the unit, 'F' or 'C'" << endl;
    cin >> unit;
    
    double temperatures[max];
    
    for (int i=0; i<max; i++)
    {
        cout << "enter temperature " << i+1 <<":" << endl;
        cin >> temp;
        
        
        temperatures[count] = temp;
        sum += temp;
        count++;
        
    }
    
        
  if (count>0)
{
    double average=sum/max;
    
    // formulas
    farenheit = (average*9/5)+32;
    celsius = (average-32)*(5/9);
    
    if ( unit=='F')
    {
        cout << "the average temperature is: " << average << " farenheit and" << celsius << "celsius"<< endl;
    }
    else if (unit=='C')
    {
        cout << "the average temperature is " << average << " celsius and" << farenheit <<
        "farenheit" << endl;
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
