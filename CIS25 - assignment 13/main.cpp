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
    double temperatures[max];
    double sum=0.0;
    int count=0;
    double temp;
    
    // inputting the amount of temperatures
    cout << "enter the amount of temperatures you have: " << endl;
    cin >> max;
    
    for (int i=0; i<max; i++)
    {
        cout << "enter temperature " << i <<":" << endl;
        cin >> temp;
    }
    
    temperatures[count] = temp;
    sum += temp;
    count++;

        
        
  if (count>0)
{
    double average=sum/count;
    cout << "the average temperature is: " << average << "degrees" << endl;
}
else
{
    cout << "no temperatures were entered" << endl;
}
return 0;
}
