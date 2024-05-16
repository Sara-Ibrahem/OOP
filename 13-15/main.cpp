#include <iostream>
#include "teamleader.h"

int main() {
    // Creating a TeamLeader object with the provided details
    TeamLeader leader(213, "Adan Smith", "11/21/2013", 1, 18.00, 500.00, 20.0, 12.5);

    // Displaying employee information
    std::cout << "Name: " << leader.getEmployeeName() << std::endl;
    std::cout << "Employee number: " << leader.getEmployeeNumber() << std::endl;
    std::cout << "Hire date: " << leader.getHireDate() << std::endl;
    std::cout << "Shift number: " << leader.getShiftNumber() << std::endl;
    std::cout << "Pay rate: $" << leader.getHourlyRate() << std::endl;
    std::cout << "Monthly bonus: $" << leader.getMonthlyBonus() << std::endl;
    std::cout << "Required training hours: " << leader.getRequiredTrainingHours() << std::endl;
    std::cout << "Completed training hours: " << leader.getAttendedTrainingHours() << std::endl;

    return 0;
}