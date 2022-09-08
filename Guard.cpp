
#include "Guard.h"

Guard::Guard(){}
Guard :: Guard(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string protectedArea) : Officer(name, age, gender, location, phoneNum, hometown, salaryCoefficient, workingDays)
{
    this->protectedArea = protectedArea;
}
void Guard::setGuardCode(int ordinalNumber)
{
    string code;
    code = to_string(ordinalNumber);
    while (code.length() < 3)
    {
        code = '0' + code;
    }
    this->officerCode = "BV" + code;
}
string Guard::getGuardCode(){
    return officerCode;
}
double Guard :: getGuardSalary()
{
    return workingDays * salaryCoefficient;
}
void Guard::setProtectedArea(string protectedArea)
{
    this->protectedArea = protectedArea;
}
string Guard::getProtectedArea()
{
    return protectedArea;
}