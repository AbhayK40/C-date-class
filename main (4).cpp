#include <stdio.h>
#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date d1, d2(10, 9, 2024);
    
    d1.printDate();
    d2.printDate();
    
    d1.setDate(1, 1, 2025);
    /*cout << "Happy New Year! " << d1.getDate() << endl;
    
    cout << "Is " << d2.getDate() << " a leap year? " << (d2.isLeapYear() ? "Yes" : "No") << endl;
    
    d1.setDate(10,9,2024);
    cout << "Is " << d1.getDate() << " equal to" << d2.getDate() << (d1 == d2 ? "Yes" : "No") << endl;
    
    cout << d2.getDate() << " Is " << d2.convert() << endl;
    
    
    d2.setDate(10,10,1997);
    cout << "Is " << d2.getDate() << " earlier than " << d1.getDate() << "? " << (d2 < d1 ? "Yes" : "No") << endl;
    
    cout << d2.getDate() << " is " << d2.dayOfWeek() << endl; */
    
    cout << "Is " << d2.getDate() << " later than " << d1.getDate() << "? " << (d2 > d1 ? "Yes" : "No") << endl;
    
    
    d1.setDate(3,12,2011);
    cout << d1.getDate() << " is " << (d1.isWeekDay() ? "Yes" : "No") << endl;
    
    d2.setDate(3,15,2011);
    cout << d2.getDate() << " is " << (d2.isWeekDay() ? "Yes" : "No") << endl;

    cout << d1.getDate() << " is " << d1.nameOfDay() << endl;
    cout << d2.getDate() << " is " << d2.nameOfDay() << endl;
    

    cout << d2.getDate() << " + 45 days is ";
    d2 = d2 + 45; 
    cout << d2.getDate() << endl;
    
    cout << "The day after " << d2.getDate();
    d2.nextDay();
    cout << " is " << d2.getDate() << " and the day before is ";
    d2.priorDay();
    cout << d2.getDate() << endl;
    
    d1.setDate(12,30,2011);
    cout << "The day after " << d1.getDate();
    d1.nextDay();
    cout << " is " << d1.getDate() << " and the day before is ";
    d1.priorDay();
    cout << d1.getDate() << endl;
    
    return 0;
}