#include "ManageOfficer.h"

void Manage::addOfficer()
{
    cout << "=================NewOfficer================" << endl;
    cout << "1. Thêm mới một Công Nhân" << endl;
    cout << "2. Thêm mới một Kỹ Sư" << endl;
    cout << "3. Thêm mới một Bảo Vệ" << endl;
    int pick;
    cin >> pick;
    string name, gender, location, phoneNum, hometown;
    float salaryCoefficient;
    int age, workingDays, ordinalNum;
    double salary;
    cout << "Name: "; cin.ignore(); getline(cin, name);
	  cout << "Age: "; cin >> age;
	  cout << "Gender: "; cin >> gender;
    cout << "Location: "; cin.ignore(); getline(cin, location);
    cout << "Phone Number: "; cin >> phoneNum;
 	  cout << "Hometown: "; cin.ignore(); getline(cin, hometown);
	  cout << "Salary Coefficient: "; cin >> salaryCoefficient;
    cout << "The number of working days: "; cin >> workingDays;
    switch(pick)
    {
        case 1:
        {
            int level;
            cout << "Level: "; cin >> level;
            ordinalNum = Manage::workers.size() + 1;
            Worker worker = Worker(name, age, gender, location, phoneNum, hometown, salaryCoefficient, workingDays, level);
            worker.setWorkerCode(ordinalNum);
            workers.push_back(worker);
            break;
        }
        case 2:
        {
            string major;
            int experiencedYears;
            cout << "Major: "; cin.ignore(); getline(cin, major);
            cout << "The number of experience years: "; cin >> experiencedYears;
            ordinalNum = Manage::engineers.size() + 1;
            Engineer engineer = Engineer(name, age, gender, location, phoneNum, hometown, salaryCoefficient, workingDays, major, experiencedYears);
            engineer.setEngineerCode(ordinalNum);
            engineers.push_back(engineer);
            break;
        }

        case 3:
        {
            string protectedArea;
            cout << "Area the guard protects: "; cin.ignore(); getline(cin, protectedArea);
            ordinalNum = Manage::guards.size() + 1;
            Guard guard = Guard(name, age, gender, location, phoneNum, hometown, salaryCoefficient, workingDays, protectedArea);
            guard.setGuardCode(ordinalNum);
            guards.push_back(guard);
            break;
        }
    }
}
void Manage::getInforByName(string name)
{
    for (int i = 0; i < workers.size(); i++) {
        if (workers[i].getName() == name)
        {
            workers[i].getInfor();
        }
    }
    for (int i = 0; i < engineers.size(); i++) {
        if (engineers[i].getName() == name)
        {
            engineers[i].getInfor();
        }
    }
    for (int i = 0; i < guards.size(); i++) {
        if (guards[i].getName() == name)
        {
            guards[i].getInfor();
        }
    }
}

void Manage::getSalaryByName(string name)
{
    for (int i = 0; i < workers.size(); i++)
    {
        if (workers[i].Worker::getName() == name)
        {
            workers[i].getWorkerSalary();
        }
    }
    for (int i = 0; i < engineers.size(); i++)
    {
        if (engineers[i].Engineer::getName() == name)
        {
            engineers[i].getEngineerSalary();
        }
    }
    for (int i = 0; i < guards.size(); i++)
    {
        if (guards[i].Guard::getName() == name)
        {
            guards[i].getGuardSalary();
        }
    }
}
