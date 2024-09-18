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
    double avgTemp;
    double sumTemp=0;
    int num;
    
    cout << "How many temperatures do you have: " << endl;
    cin >> num;
    
    double temp[num];
    cout << "Enter the temperatures: " << endl;
    for (int i=0; i<num; i++)
    {
        getline(cin, temp[i]);
        sumTemp=sumTemp+ temp[i];
    }
avgTemp= sumTemp
}
