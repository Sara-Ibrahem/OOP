#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include <string>

class ProductionWorker {
private:
    int employeeNumber;
    std::string employeeName;
    std::string hireDate;
    int shiftNumber;
    double hourlyRate;
public:
    ProductionWorker(int empNum, std::string empName, std::string hDate, int sNum, double hr)
        : employeeNumber(empNum), employeeName(empName), hireDate(hDate), shiftNumber(sNum), hourlyRate(hr) {}

    void setEmployeeNumber(int empNum) { employeeNumber = empNum; }
    void setEmployeeName(std::string empName) { employeeName = empName; }
    void setHireDate(std::string hDate) { hireDate = hDate; }
    void setShiftNumber(int sNum) { shiftNumber = sNum; }
    void setHourlyRate(double hr) { hourlyRate = hr; }

    int getEmployeeNumber() const { return employeeNumber; }
    std::string getEmployeeName() const { return employeeName; }
    std::string getHireDate() const { return hireDate; }
    int getShiftNumber() const { return shiftNumber; }
    double getHourlyRate() const { return hourlyRate; }
};

#endif // PRODUCTIONWORKER_H