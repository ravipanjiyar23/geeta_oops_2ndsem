#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



// Simple class declaration
class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {

    // Object of class Student
    Student s;
    s.name = "John";
    s.age = 20;
    s.display();

    return 0;
}
