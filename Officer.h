#pragma once
#include <bits/stdc++.h>
using namespace std;
class Officer
{
     protected:
          string name, gender, location, phoneNum, hometown, officerCode;
          float salaryCoefficient;
          int age, workingDays;
     public:
          Officer();
          // Officer(string name, int age, string gender, string location, string phoneNum, string hometown, string officerCode, float salaryCoefficient, int workingDays);
          string getName();
};