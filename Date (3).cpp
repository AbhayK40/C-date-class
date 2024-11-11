#include "Date.h"
#include <sstream>
#include <iomanip>
#include <iostream>
   
    Date::Date(int month, int day, int year){
        setDate(month, day, year);
    }
    
    void Date::setDate(int month, int day, int year){
        this->month = month;
        (*this).day = day;
        this->year = year;
    }
    
    std::string Date::getDate(){
        std::stringstream strs;
        
        strs << std::setw(2) << std::setfill('0') << month << "/" << std::setw(2) << day << "/" << std::setw(4) << year;
        
        
        
        std::string s;
        std::getline(strs, s);
        return s;
        
    }
    void Date::printDate(){
        std::cout<< getDate() << std::endl;
    }
    
    bool Date::isLeapYear(){
        return((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0));
    }
    
    long Date::convert() const {
        return year * 10000 + month * 100 + day;
    }
    
    int Date::dayOfWeek(){
        
        int m = month;
        int y = year;
        if (month < 3){
            m += 12;
            y = year - 1;
        }
        
        int c = int(year / 100);
        
        y = y % 100;
        
        int T = day + int(26 * (m + 1) / 10) + y + int(y / 4) + int(c / 4) - 2 * c;
        
        int dd = T % 7;
        if(dd < 0){
            dd += 7;
        }
        
        return dd;
    }
    
    void Date::nextDay(){
        int m = month;
        int y = year;
        int d = day; 
        
        if(d = 30 && m != 12){
            d = 1;
            m = m + 1;
        }else if((m = 12) && (d = 30)){
            d = 1;
            m = 1;
            y = y + 1;
        }
        month = m; 
        day = d;
        year = y;
    }
    void Date::priorDay(){
        int m = month;
        int y = year;
        int d = day; 
        
        if(d = 1 && m != 1){
            d = 30;
            m = m - 1;
        }else if((m = 1) && (d = 1)){
            d = 30;
            m = 12;
            y = y - 1;
        }
        month = m; 
        day = d;
        year = y;
    }
    
    std::string Date::nameOfDay(){
        int temp = dayOfWeek();
        switch (temp){
        case 0:
            return "Saturday";
            break;
        case 1:
            return "Sunday";
            break;
        case 2:
            return "Monday";
            break;
        case 3:
            return "Tuesday";
            break;
        case 4:
            return "Wednesday";
            break;    
        case 5:
            return "Thursday";
            break; 
        case 6:
            return "Friday";
            break;    
        }
        return 0;
    }
    
    bool Date::isWeekDay(){
        int temp = dayOfWeek();
       return temp != 0 && temp != 1;
    }
    
    bool Date::operator==(const Date& date2){
        return this->month == date2.month && this->day == date2.day && this->year == date2.year;
    }
    
    bool Date::operator<(const Date& date2){
        return this->convert() < date2.convert();
    }
    
    bool Date::operator>(const Date& date2){
        return this->convert() > date2.convert();
    }
    
    Date Date::operator+(int daysToAdd) {
        Date newDate = *this;
        newDate.day += daysToAdd;

        while (newDate.day > 30) {
            newDate.day -= 30;
            newDate.month += 1;
        }

        while (newDate.month > 12) {
            newDate.month -= 12;
            newDate.year += 1;
        }

        return newDate;
    }
    
