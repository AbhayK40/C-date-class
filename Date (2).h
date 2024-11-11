#include <string>

class Date{
private:
    int day = 1;
    int month = 1;
    int year = 1970;
    
public:
    Date(int month = 1, int day = 1, int year = 1970);
    
    void setDate(int month, int day, int year);
    
    std::string getDate();
    
    void printDate();
    
    bool isLeapYear();
    
    long convert() const;
    
    int dayOfWeek();
    
    void nextDay();
    
    void priorDay();
    
    bool isWeekDay();
    
    std::string nameOfDay();
    
    bool operator==(const Date& date2);
    
    bool operator<(const Date& date2);
    
    bool operator>(const Date& date2);
    
    Date operator+(int);
    
    
};