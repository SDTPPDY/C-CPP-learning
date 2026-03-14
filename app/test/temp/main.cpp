#include <iostream>
using namespace std;

class Date {
  private:
    int year;
    int month;
    int day;

  public:
    Date(int m, int d, int y) {
        if (m < 1 || m > 12) {
            m = 1;
        }
        else {
            month = m;
            year = y;
            day = d;
        }
    }
    void setYear(int y) {
        year = y;
    }
    void setMonth(int m) {
        if (m < 1 || m > 12) {
            month = 1;
        }
        else {
            month = m;
        }
    }
    void setDay(int d) {
        day = d;
    }
    int getYear() {
        return year;
    }
    int getMonth() {
        return month;
    }
    int getDay() {
        return day;
    }
    void displayDate() {
        cout << month << "/" << day << "/" << year << endl;
    }
};
