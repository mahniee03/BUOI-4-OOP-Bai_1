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
          Officer(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays);
          void setName(string name);
          string getName();
	     void setAge(int age);
          int getAge();
	     void setGender(string gender);
          string getGender();
          void setLocation(string location);
          string getLocation();
          void setPhoneNum(string phoneNum);
          string getPhoneNum();
          void setHometown(string hometown);
          string getHometown();
          void setSalaryCoefficient(int salaryCoefficient);
          int getSalaryCoefficient();
          void setWorkingDays(int workingDays);         
          int getWorkingDays();
};