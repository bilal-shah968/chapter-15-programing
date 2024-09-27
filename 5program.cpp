#include <iostream>
#include <string>
using namespace std;
class Person 
{
protected:
    int id;
    string name;
    string address;

public:
    
    Person() : id(0), name(""), address("") {}

    void inputPersonData()
     {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
    }
    void displayPersonData() const 
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};
class Student : public Person 
{
protected:
    int rollNumber;
    float marks;
public:
    Student() : rollNumber(0), marks(0.0) {}
    void inputStudentData() 
    {
    
        inputPersonData();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayStudentData() const
     {
    
        displayPersonData();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
class Scholarship : public Student 
{
private:
    string scholarshipName;
    float amount;

public:
    
    Scholarship() : scholarshipName(""), amount(0.0) {}
    void inputScholarshipData()
     {
        inputStudentData();
        cin.ignore(); 
        cout << "Enter Scholarship Name: ";
        getline(cin, scholarshipName);
        cout << "Enter Scholarship Amount: ";
        cin >> amount;
    }
    void displayScholarshipData() const
     {
        
        displayStudentData();
        cout << "Scholarship Name: " << scholarshipName << endl;
        cout << "Scholarship Amount: " << amount << endl;
    }
};
int main()
 {
    Scholarship scholar;
    cout << "Input Scholarship Details: " << endl;
    scholar.inputScholarshipData();
    cout << "\nDisplaying Scholarship Details: " << endl;
    scholar.displayScholarshipData();
    return 0;
}
