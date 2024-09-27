#include <iostream>
#include <string>

using namespace std;

class Result 
{
protected:
    int scores[3];

public:
    
    void input() 
    {
        cout << "Enter 3 scores: ";
        for (int i = 0; i < 3; ++i) {
            cin >> scores[i];
        }
    }


    void displayAverage() const
     {
        int sum = 0;
        for (int i = 0; i < 3; ++i) {
            sum += scores[i];
        }
        double average = static_cast<double>(sum) / 3;
        cout << "Average score: " << average << endl;
    }
};

class Student : public Result 
{
private:
    int rollNumber;
    string name;

public:
    
    void input() {
        Result::input(); 
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore(); 
        cout << "Enter name: ";
        getline(cin, name);
    }

    
    void display() const
     {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        Result::displayAverage(); 
    }
};

int main()
 {
    Student student;
    
    student.input(); 
    student.display(); 

    return 0;
}
