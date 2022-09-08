#include "Worker.h"

Worker::Worker()
{
	level = 0;
}
Worker::Worker(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, int level)
{
	this->name = name;
    this->age = age;
    this->gender = gender;
    this->location = location;
    this->phoneNum = phoneNum;
    this->hometown = hometown;
    this->salaryCoefficient = salaryCoefficient;
    this->workingDays = workingDays;
	this->level = level;
}
void Worker::getInfor()
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
	cout << "Level: " << this -> level << endl;
}
void Worker::setWorkerCode(int ordinalNumber)
{
	string code;
    code = to_string(ordinalNumber);
    while (code.length() < 3)
    {
        code = '0' + code;
    }
    officerCode = "CN" + code;
}
void Worker::getWorkerSalary()
{
	cout << level*salaryCoefficient*workingDays << endl;
}
