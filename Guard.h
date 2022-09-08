#pragma once
#include "Officer.h"


class Guard : public Officer
{
    private:   
        string protectedArea;
    public:
        Guard();
        Guard(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string protectedArea);
        void getInfor();
        void setGuardCode(int ordinalNumber);
        void getGuardSalary();
};