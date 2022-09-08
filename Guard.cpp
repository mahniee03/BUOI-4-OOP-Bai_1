
#include "Guard.h"

Guard::Guard()
{
    protectedArea = "";
}
Guard :: Guard(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string protectedArea)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->location = location;
    this->phoneNum = phoneNum;
    this->hometown = hometown;
    this->salaryCoefficient = salaryCoefficient;
    this->workingDays = workingDays;
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
    officerCode = "BV" + code;
}
void Guard::getInfor()
{
    cout << "Name: " << this -> name << endl;
	cout << "Age: " << this -> age << endl;
	cout << "Gender: " << this -> gender << endl;
	cout << "Location: " << this -> location << endl;
	cout << "Phone Number: " << this -> phoneNum << endl;
    cout << "Hometown: " << this -> hometown << endl;
	cout << "Officer Code: " << this -> officerCode << endl;
	cout << "Salary Coefficient: " << this-> salaryCoefficient << endl;
	cout << "The number of working days: " << this-> workingDays << endl;
	cout << "Area the guard protects: " << this -> protectedArea << endl;
}
void Guard :: getGuardSalary()
{
    cout << workingDays * salaryCoefficient << endl;
}