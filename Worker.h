#pragma once
#include "Officer.h"


class Worker : public Officer
{
       
        int level;
    public:
        Worker();
        Worker(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, int level);
        void getInfor();
        void setWorkerCode(int ordinalNumber);
        void getWorkerSalary();
};