#pragma once
#include "Officer.h"


class Guard : public Officer
{
    private:   
        string protectedArea;
    public:
        Guard();
        Guard(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string protectedArea);
        void setProtectedArea(string protectedArea);
        string getProtectedArea;
        void setGuardCode(int ordinalNumber);
        string getGuardCode();
        double getGuardSalary();
};