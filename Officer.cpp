
#include "Officer.h"

Officer::Officer() {}
Officer::Officer(string name, int age, string gender, string location, string phoneNum, string hometown, string officerCode, float salaryCoefficient, int workingDays)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->location = location;
    this->phoneNum = phoneNum;
    this->hometown = hometown;
    this->salaryCoefficient = salaryCoefficient;
    this->workingDays = workingDays;
}
void Officer::setName(string name)
{
    this->name = name;
}
string Officer::getName()
{
    return name;
}
void Officer::setAge(int age)
{
    this->age = age;
}
int Officer::getAge()
{
    return age;
}
void Officer::setGender(string gender)
{
    this->gender = gender;
}
string Officer::getGender()
{
    return gender;
}
void Officer::setLocation(string location)
{
    this->location = location;
}
string Officer::getLocation()
{
    return location;
}
void Officer::setPhoneNum(string phoneNum)
{
    this->phoneNum = phoneNum;
}
string Officer::getPhoneNum()
{
    return phoneNum;
}
void Officer::setHometown(string hometown)
{
    this->hometown = hometown;
}
string Officer::getHometown()
{
    return hometown;
}
void Officer::setSalaryCoefficient(int salaryCoefficient)
{
    this->salaryCoefficient = salaryCoefficient;
}
int Officer::getSalaryCoefficient()
{
    return salaryCoefficient;
}
void Officer::setWorkingDays(int workingDays)
{
    this->workingDays = workingDays;
}
int Officer::getWorkingDays()
{
    return workingDays;
}
