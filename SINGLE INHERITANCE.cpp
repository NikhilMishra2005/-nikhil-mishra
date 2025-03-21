#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;

public:
    Student(string n, int r) : name(n), roll_no(r) {}

    void displayStudent() {
        cout << "Name: " << name << ", Roll No: " << roll_no << endl;
    }
};

class Result : public Student {
    int marks;

public:
    Result(string n, int r, int m) : Student(n, r), marks(m) {}

    void displayResult() {
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Result student1("Nikhil Mishra", 101, 90);
    student1.displayResult();

    return 0;
}
