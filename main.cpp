#include <iostream>
#include <string>
using namespace std;

// Base Class
class Student
{
protected:
    int roll;
    string name;

public:
    void getdata()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Student Name: ";
        cin >> ws;
        getline(cin, name);
    }

    void putdata()
    {
        cout << "\n----- Student Marklist -----";
        cout << "\nRoll No: " << roll;
        cout << "\nStudent Name: " << name << endl;
    }
};

// Derived Class 1
class StudentExam : public Student
{
protected:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    float per;

public:
    void accept_data()
    {
        getdata();

        cout << "Enter Marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter Marks for Subject 2: ";
        cin >> sub2;
        cout << "Enter Marks for Subject 3: ";
        cin >> sub3;
        cout << "Enter Marks for Subject 4: ";
        cin >> sub4;
        cout << "Enter Marks for Subject 5: ";
        cin >> sub5;
        cout << "Enter Marks for Subject 6: ";
        cin >> sub6;
    }

    void display_data()
    {
        putdata();

        cout << "\nMarks of Subject 1: " << sub1;
        cout << "\nMarks of Subject 2: " << sub2;
        cout << "\nMarks of Subject 3: " << sub3;
        cout << "\nMarks of Subject 4: " << sub4;
        cout << "\nMarks of Subject 5: " << sub5;
        cout << "\nMarks of Subject 6: " << sub6;
    }
};

// Derived Class 2
class StudentResult : public StudentExam
{
public:
    void calculate()
    {
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;

        cout << "\n\nTotal Percentage: " << per << "%";
        cout << "\n----------------------------------\n";
    }
};

int main()
{
    StudentResult s;

    s.accept_data();
    s.display_data();
    s.calculate();

    return 0;
}