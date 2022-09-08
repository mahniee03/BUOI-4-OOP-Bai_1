#include "Worker.h"

Worker::Worker()
{}
Worker::Worker(string name, int age, string gender, string location, string phoneNum, string hometown, float salaryCoefficient, int workingDays, int level) : Officer(name, age, gender, location, phoneNum, hometown, salaryCoefficient, workingDays)
{
	this->level = level;
}

void Worker::setWorkerCode(int ordinalNumber)
{
	string code;
    code = to_string(ordinalNumber);
    while (code.length() < 3)
    {
        code = '0' + code;
    }
    this->officerCode = "CN" + code;
}
string Worker::getWorkerCode()
{
    return officerCode;
}
void Worker::setLevel(int level)
{
    this->level = level;
}
int Worker::getLevel()
{
    return level;
}
double Worker::getWorkerSalary()
{
	return salaryCoefficient*workingDays*level;
}




