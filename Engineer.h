#pragma once
#include "Officer.h"
class Engineer : public Officer
{
       
        string major;
        int experiencedYears;
    public:
        Engineer();
        Engineer(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string major, int experiencedYears);
        void setEngineerCode(int ordinalNumber);
        string getEngineerCode();
        void setMajor(string major);
        string getMajor();
        void setExperiencedYears(int experiencedYears);
        int getExperiencedYears();
        double getEngineerSalary();
};