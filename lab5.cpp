#include <iostream>

class Date {
    private:
        int year;
        int month;
        int day;
    public:
        void checkLeapYear();
        void dateIncrease();

        Date(int y, int m, int d) {
            year = y;
            month = m;
            day = d;
            std:: cout << "Param Constructor Called: " << day 
             <<   "." << month << "." << year << " created." << std::endl;
        }
        Date() {
            year = 2000;
            month = 1;
            day = 1;
            std::cout << "Default Constructor called: " << day 
               << "." << month << "." << year << " created." << std::endl;
        }
        ~Date() {
            std::cout << "Destructor Called..." << std::endl;
        }
        Date(const Date &original) {
            year = original.year;
            day = original.day;
            month = original.month;
            std::cout << "Copy Constructor: Object cloned." << std::endl;
        }
};
void Date::checkLeapYear() {
    if(year % 4 == 0) {
        std::cout << "The Year Is Leap." << std::endl;
    } else {
        std::cout << "The Year Is Not Leap." << std::endl;
    }
}
void Date::dateIncrease() {
    if(day != 0) {
        day += 5;
        std::cout << "Increased Day: " << day << std::endl;
    }
}

int main() {
    Date Now(2026, 2, 7);
    Now.checkLeapYear();
    Now.dateIncrease();
    Date EmptyDate;
    EmptyDate.dateIncrease();
    Date NotToday = Now;
    NotToday.dateIncrease();
    return 0;   
}
