#pragma once
#include "Worker.h"
#include "Engineer.h"
#include "Guard.h"
#include "Officer.h"

class Manage
{
    private:
        vector <Worker> workers;
        vector <Guard> guards;
        vector <Engineer> engineers;
    public:
        void addOfficer();
        void getInforByName(string name);
        void getSalaryByName(string name);
};