#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "productionworker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    double requiredTrainingHours;
    double attendedTrainingHours;
public:
    TeamLeader(int empNum, std::string empName, std::string hDate, int sNum, double hr,
               double bonus, double reqHours, double attHours)
        : ProductionWorker(empNum, empName, hDate, sNum, hr), monthlyBonus(bonus),
          requiredTrainingHours(reqHours), attendedTrainingHours(attHours) {}

    void setMonthlyBonus(double bonus) { monthlyBonus = bonus; }
    void setRequiredTrainingHours(double reqHours) { requiredTrainingHours = reqHours; }
    void setAttendedTrainingHours(double attHours) { attendedTrainingHours = attHours; }

    double getMonthlyBonus() const { return monthlyBonus; }
    double getRequiredTrainingHours() const { return requiredTrainingHours; }
    double getAttendedTrainingHours() const { return attendedTrainingHours; }
};

#endif // TEAMLEADER_H