#include <iostream>
using namespace std;
class Computer
{
protected:
    int wordSize;       
    int memorySize;      
    int storageSize;     
    int speed;          

public:
    
    Computer() : wordSize(0), memorySize(0), storageSize(0), speed(0) {}

    
    Computer(int ws, int ms, int ss, int sp) : wordSize(ws), memorySize(ms), storageSize(ss), speed(sp) {}


    void display() const {
        cout << "Word Size: " << wordSize << " bits" << endl;
        cout << "Memory Size: " << memorySize << " MB" << endl;
        cout << "Storage Size: " << storageSize << " MB" << endl;
        cout << "Speed: " << speed << " MHz" << endl;
    }
};


class Laptop : public Computer
 {
protected:
    float length;       
    float width;         
    float height;        
    float weight;        

public:
    
    Laptop() : Computer(), length(0.0), width(0.0), height(0.0), weight(0.0) {}
    Laptop(int ws, int ms, int ss, int sp, float l, float w, float h, float wt)
        : Computer(ws, ms, ss, sp), length(l), width(w), height(h), weight(wt) {}
    void display() const
     {
        
        Computer::display();
        cout << "Length: " << length << " inches" << endl;
        cout << "Width: " << width << " inches" << endl;
        cout << "Height: " << height << " inches" << endl;
        cout << "Weight: " << weight << " pounds" << endl;
    }
};

int main()
 {

    Laptop defaultLaptop;
    cout << "Default Laptop specifications:" << endl;
    defaultLaptop.display();


    Laptop myLaptop(64, 8192, 256000, 2500, 13.3, 9.0, 0.8, 3.5);
    cout << "\nMy Laptop specifications:" << endl;
    myLaptop.display();

    return 0;
}
