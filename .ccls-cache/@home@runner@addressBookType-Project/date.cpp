// dateType.cpp
#include "dateType.h"
#include <iostream>

bool dateType::isValidDate(int month, int day, int year) const {
    // Add logic to check the validity of the date
    // ... (logic will be shown in the full code below)
}

// Sets the date after validating it
void dateType::setDate(int month, int day, int year) {
    if (isValidDate(month, day, year)) {
        dMonth = month;
        dDay = day;
        dYear = year;
    } else {
        std::cerr << "Invalid date!" << std::endl;
    }
}

// Constructor that sets the date using the setDate method
dateType::dateType(int month, int day, int year) {
    setDate(month, day, year); // Reuse the setDate method for setting the initial value
}

// Checks if the year is a leap year
bool dateType::isLeapYear() const {
    }

    // Prints the date and whether it is a leap year
    void dateType::printDate() const {
        // Print the date in the requested format and check for leap year
        // ... (logic will be shown in the full code below)
    }

    // main.cpp
    int main() {
        dateType date(3, 15, 2008);
        date.printDate(); // Should print the date and indicate it is a leap year

        return 0;
    }