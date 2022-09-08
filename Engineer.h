#pragma once
#include "Officer.h"
class Engineer : public Officer
{
       
        string major;
        int experiencedYears;
    public:
        Engineer();
        Engineer(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string major, int experiencedYears);
        void getInfor();
        void setEngineerCode(int ordinalNumber);
        void getEngineerSalary();
};