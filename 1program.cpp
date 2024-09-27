#include <iostream>
#include <cstring> 
using namespace std;

class Person {
protected:
    int id;
    char name[50], address[100];

public:
    Person() {
        id = 0;
        name[0] = '\0';
        address[0] = '\0';
    }

    void GetInfo() 
    {
        cout << "Enter your id: ";
        cin >> id;
        cin.ignore(); 

        cout << "Enter your name: ";
        cin.getline(name, 50); 

        cout << "Enter your address: ";
        cin.getline(address, 100); 
    }

    void ShowInfo() 
    {
        cout << "\nYour personal information is as follows:\n";
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Address = " << address << endl;
    }
};

class Student : public Person
 {
private:
    int rno, marks;

public:
    Student() : Person()
     { 
        rno = 0;
        marks = 0;
    }

    void GetEdu() {
        cout << "Enter your roll no: ";
        cin >> rno;

        cout << "Enter your marks: ";
        cin >> marks;
    }

    void ShowEdu() {
        cout << "\nYour educational information is as follows:\n";
        cout << "Roll no = " << rno << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    Student s;
    s.GetInfo(); 
    s.GetEdu();
    s.ShowInfo();
    s.ShowEdu();
    return 0;
}
