#include <iostream>
using namespace std;

// Class definition
class BTechSection {
public:
    string sectionName;
    int totalStudents;

    void setValues(string name, int students) {
        sectionName = name;
        totalStudents = students;
    }

    void display() {
        cout << "Section: " << sectionName << ", Students: " << totalStudents << endl;
    }
};

int main() {
    // Creating an object
    BTechSection sectionA;
    
    // Setting values using dot operator
    sectionA.setValues("CSE-A", 50);
    
    // Displaying values
    sectionA.display();

    return 0;
}
