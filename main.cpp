#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int semesters, courses;
    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "====================================\n";
    cout << "         CGPA CALCULATOR\n";
    cout << "====================================\n";

    cout << "Enter number of semesters: ";
    cin >> semesters;

    if (semesters <= 0 || semesters > 10)
    {
        cout << "Invalid number of semesters!";
        return 0;
    }

    for (int s = 1; s <= semesters; s++)
    {
        float semesterCredits = 0;
        float semesterGradePoints = 0;

        cout << "\n========== Semester " << s << " ==========\n";

        cout << "Enter number of courses: ";
        cin >> courses;

        if (courses <= 0 || courses > 100)
        {
            cout << "Invalid number of courses!";
            return 0;
        }

        for (int i = 1; i <= courses; i++)
        {
            float grade, credit;

            cout << "\nCourse " << i << endl;

            cout << "Enter grade point (0-10): ";
            cin >> grade;

            cout << "Enter credit hours: ";
            cin >> credit;

            if (grade < 0 || grade > 10 || credit <= 0)
            {
                cout << "Invalid grade or credit!";
                return 0;
            }

            semesterGradePoints += grade * credit;
            semesterCredits += credit;

            cout << "Grade Point: " << grade;
            cout << " | Credit Hours: " << credit << endl;
        }

        float gpa = semesterGradePoints / semesterCredits;

        cout << "\nSemester " << s << " GPA: "
             << fixed << setprecision(2) << gpa << endl;

        totalGradePoints += semesterGradePoints;
        totalCredits += semesterCredits;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n====================================\n";
    cout << "           FINAL RESULT\n";
    cout << "====================================\n";

    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Overall CGPA: " << fixed
         << setprecision(2) << cgpa << endl;

    cout << "====================================\n";

    return 0;
}
