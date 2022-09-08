#include "Engineer.h"
Engineer::Engineer() {}
Engineer::Engineer(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string major, int experiencedYears) : Officer(name, age, gender, location, phoneNum, hometown, salaryCoefficient, workingDays)
{
    this->major = major;
    this->experiencedYears = experiencedYears;
}
void Engineer::setEngineerCode(int ordinalNumber)
{
    string code;
    code = to_string(ordinalNumber);
    while (code.length() < 3)
    {
        code = '0' + code;
    }
    this->officerCode = "KS" + code;
}
double Engineer::getEngineerSalary()
{
    return experiencedYears * workingDays * salaryCoefficient;
}
string Engineer::getEngineerCode()
{
    return officerCode;
}
void Engineer::setMajor(string major)
{
    this->major = major;
}
string Engineer::getMajor()
{
    return major;
}
void Engineer::setExperiencedYears(int experiencedYears)
{
    this->experiencedYears = experiencedYears;
}
int Engineer::getExperiencedYears()
{
    return experiencedYears;
}