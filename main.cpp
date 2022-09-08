#include "ManageOfficer.h"

void Menu()
{
    cout << "=================MENU================" << endl;
    cout << "1. Thêm mới cán bộ" << endl;
    cout << "2. Tìm (theo tên) và in ra thông tin" << endl;
    cout << "3. Tính lương (theo tên)" << endl;
    cout << "4. Thoát" << endl;
}
int main(){
    Manage manage;
    int choice;
    string name;
    while(1)
    {
        Menu();
        cin >> choice;
        switch(choice)
        {
            case 1:
                manage.addOfficer();
            case 2:
                cout << "Enter the officer's name you want to find: ";
                cin.ignore(); getline(cin, name);
                manage.getInforByName(name);
            case 3:
                cout << "Calculate the officer's salary whose name is: ";
                cin.ignore(); getline(cin, name);
                manage.getSalaryByName(name);
            case 4:
                cout << "Exit";
                return 0;
        }
    }
}
