#include <iostream>

using namespace std;

// Class for Calendar
class Calendar {
private:
    int day, month, year;

public:
    // Constructor
    Calendar() {
        day = 1;
        month = 1;
        year = 2000;
        cout << "Default Constructor called: " << day << "/" << month << "/" << year << endl;
    }

    // Parameterized Constructor
    Calendar(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        cout << "Parameterized Constructor called: " << day << "/" << month << "/" << year << endl;
    }

    // Destructor
    ~Calendar() {
        cout << "Destructor called: Deleting Calendar object" << endl;
    }

    // Display the date
    void displayDate() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    // Method Overloading: Set Date (two versions)
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void setDate(int d, int m) { // Overloaded function (no year)
        day = d;
        month = m;
    }

    // Friend function to add years to the calendar
    friend void addYears(Calendar &cal, int years);

};

// Friend function to add years to the date
void addYears(Calendar &cal, int years) {
    cal.year += years;
    cout << "Years added: New year is " << cal.year << endl;
}

int main() {
    // Create a Calendar object using default constructor
    Calendar cal1;
    cal1.displayDate();

    // Create a Calendar object using parameterized constructor
    Calendar cal2(24, 10, 2024);
    cal2.displayDate();

    // Set a new date using method overloading
    cal1.setDate(15, 8, 2023);
    cal1.displayDate();

    // Using overloaded method to set date without year
    cal1.setDate(1, 1);
    cal1.displayDate();

    // Using friend function to add years
    addYears(cal2, 5);
    cal2.displayDate();

    return 0;
}