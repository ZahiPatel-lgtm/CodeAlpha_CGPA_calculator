#include <iostream>
using namespace std;

int main()
{
    int courses;
    float grade, creditHours;
    float totalCredits = 0, totalGradePoints = 0;
    float cgpa;

    cout << "Enter number of courses: ";
    cin >> courses;

    float grades[100], credits[100];

    for (int i = 0; i < courses; i++)
    {
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grades[i];

        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credits[i];

        totalCredits = totalCredits + credits[i];
        totalGradePoints = totalGradePoints + (grades[i] * credits[i]);
    }

    cgpa = totalGradePoints / totalCredits;

    cout << "\n----- Course Details -----" << endl;

    for (int i = 0; i < courses; i++)
    {
        cout << "Course " << i + 1<<endl;
        cout<< " Grade: " << grades[i]<<endl;
        cout<< " Credit Hours: " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}