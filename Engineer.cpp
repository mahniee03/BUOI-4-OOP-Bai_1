#include "Engineer.h"
Engineer::Engineer(){}
Engineer::Engineer(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, string major, int experiencedYears)
{
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->location = location;
    this->phoneNum = phoneNum;
    this->hometown = hometown;
    this->salaryCoefficient = salaryCoefficient;
    this->workingDays = workingDays;
    this -> major = major;
    this -> experiencedYears = experiencedYears;
}
void Engineer::getInfor()
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
	cout << "Major: "; cout << this -> major << endl;
    cout << "The number of experience years: "; cout << this->experiencedYears;
}
void Engineer::setEngineerCode(int ordinalNumber)
{
    string code;
    code = to_string(ordinalNumber);
    while (code.length() < 3)
    {
        code = '0' + code;
    }
    officerCode = "KS" + code;
}
void Engineer::getEngineerSalary()
{
    cout << experiencedYears*workingDays*salaryCoefficient << endl;
}