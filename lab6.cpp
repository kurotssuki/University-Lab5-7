#include <iostream>

class Date {
    private:
        int year;
        int month;
        int day;
    public:
        void checkLeapYear();
        void dateIncrease();
        int getDay() { return day; }
        int getMonth() { return month; }
        int getYear() { return year; }

        Date(int y, int m, int d) {
            year = y;
            month = m;
            day = d;
        }
        Date() {
            year = 2000;
            month = 1;
            day = 1;
        }
        ~Date() {
        
        }
        Date(const Date &original) {
            year = original.year;
            day = original.day;
            month = original.month;
        }
        int getDayOfTheYear() {
            int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            int total = 0;
            for (int i = 1; i < month; i++) {
                total += daysInMonth[i];
            }
            total += day;
            return total;
        }      
};

class Friend : public Date {
    private:
        std::string name;
    public:
        Friend(std::string n, int y, int m, int d) : Date(y ,m , d) {
            name = n;
            std::cout << "Friend: " << name << " Was created." << std::endl;
        }

        void printInfo() {
            std::cout << "Friend With The Closest Birthday: " << name << " | Birthday: ";
            std::cout << getDay() << "." << getMonth() << "." << getYear() << std::endl; 
        }
        int closestBirthday(Date today) {
            int bdayScore = this->getDayOfTheYear();
            int todayScore = today.getDayOfTheYear();

            int difference = bdayScore - todayScore;
            if (difference < 0) {
                //if birthday has already been this year;
                return difference + 365;
            } else { 
                return difference; 
            }

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
    Date today(2026, 2, 7);
    today.checkLeapYear();
    today.dateIncrease();
    Date EmptyDate;
    EmptyDate.dateIncrease();
    Date NotToday = today;
    NotToday.dateIncrease();

    Friend group[] {
        Friend("Alice", 2004, 5, 20),
        Friend("Bob", 2003, 2, 9),
        Friend("Charlie", 2005, 12, 23),
        Friend("Dave", 2004, 1, 1),
    };
    int size = 4;
    int winnerIndex = -1;
    int minDays = 733;

    for (int i = 0; i < size; i++) {
        int daysLeft = group[i].closestBirthday(today);
        if(minDays > daysLeft) {
            minDays = daysLeft;
            winnerIndex = i;
        } 
    }
    if (winnerIndex != -1) {
        group[winnerIndex].printInfo();
    }
    return 0;   
}
