#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

    /*Team members:

    Hossam Nasr Mohamed:       221000770
    Fares Ahmed Moustafa:      221000570
    Mohamed Nashaat Ibrahim:   221001565
    Amr Hossam Gamal:          221000832
    Mohamed Hossam Abdelhamid: 221001701

    */

    int n_students, n_courses;

    cout << "Enter the number of students to register: ";
    cin >> n_students;

    cout << "Enter the number of courses to add: ";
    cin >> n_courses;

    CStudent students[n_students];
    CCourse courses[n_courses];

    for (int i = 0; i < n_students; i++) {
        cout<<"--------------------------------------"<<endl;
        cout << "Registering Student " << i + 1 << endl;
        students[i].registerStudent();
    }

    for (int i = 0; i < n_courses; i++) {
        cout<<"--------------------------------------"<<endl;
        cout << "Adding Course " << i + 1 << endl;
        courses[i].add_Course();
    }

    for (int i = 0; i < n_students; i++) {
        cout<<"--------------------------------------"<<endl;
        cout << "Student " << i + 1 << " Information" << endl;
        students[i].getStudentInfo();
    }



    for (int i = 0; i < n_courses; i++) {
         cout<<"--------------------------------------"<<endl;
        cout << "Course " << i + 1 << " Information" << endl;
        courses[i].get_Course_Info();
    }

    cout<<"--------------------------------"<<endl;
    int n_pg_students;
    cout << "Enter number of postgraduate students to register: ";
    cin >> n_pg_students;

    CStudent::CPG_Student pg_students[n_pg_students];

    for (int i = 0; i < n_pg_students; i++) {
        cout<<"--------------------------------------"<<endl;
        cout << "Registering Postgraduate Student " << i + 1 << endl;
        pg_students[i].registerStudent();
        cout << "Enter the job title of Postgraduate Student " << i + 1 << ": ";
        string jobTitle;

        cin>>jobTitle;
        pg_students[i].set_PG_Student_Job_Title(jobTitle);
    }

    for (int i = 0; i < n_pg_students; i++) {
        cout<<"-------------------------------"<<endl;
        cout << "Postgraduate Student " << i + 1 << " Information" << endl;
        pg_students[i].getStudentInfo();
        cout << "Postgraduate Student Job Title: " << pg_students[i].get_PG_Student_Job_Title() << endl;
    }
    cout<<"-------------------------------------"<<endl;
    return 0;
}
