#include <iostream>
#include "student.h"
using namespace std;


void CStudent::setStudentName( string name){
     student_name=name;
    }
string CStudent::getStudentName(){
return student_name;
}
void CStudent::SetEmailUsername( string email){
     student_email_username=email;
    }
string CStudent::getStudentEmailUsername(){
return student_email_username;
}
void CStudent::setStudentEmailPassword( string password){
     student_email_password=password;
    }
string CStudent::getStudentEmailPassword(){
return student_email_password;
}

void CStudent::setStudentMajor( string major){
     student_major=major;
    }
string CStudent::getStudentMajor(){
return student_major;
}

void CStudent::set_Student_ID( int id){
     student_ID=id;
    }

int CStudent::get_Student_ID(){
return student_ID;
}

void CStudent::set_Student_Grades(float *grades) {
    for (int i = 0; i < 5; i++)
        student_grades[i] = grades[i];
}

float* CStudent::get_Student_Grades() {
    return student_grades;
}
float CStudent::get_Student_Score() {
    return student_score;
}
void CStudent::set_Student_Score(float result) {
    student_score = result;
}

void CStudent::registerStudent(){
cout<< "enter student name: " ;
cin>>student_name;
cout<< "enter student id: ";
cin>>student_ID;
cout<< "enter student major: " ;
cin>>student_major;
cout<< "enter student email username: " ;
cin>>student_email_username;
cout<< "enter student password: " ;
cin>>student_email_password;
cout<< "enter student grades: " ;
for (int i = 0; i < 5; i++)
        cin >> student_grades[i];
}
float CStudent::claculateGPA(){
float sum=0;
for (int i=0;i<5;i++){

  sum+=student_grades[i];

}
student_score=sum/100.0;
}

void CStudent::getStudentInfo(){
cout <<"name is: "<<student_name<<endl;
cout<<"Id is: "<<student_ID<<endl;
cout<<"email is: "<<student_email_username<<endl;
cout<<"major is: "<<student_major<<endl;
cout<<"password is: "<<student_email_password<<endl;
cout<<"grades are: ";
for (int i=0;i<5;i++){
    cout<<student_grades[i]<<endl;

}
claculateGPA();
cout<<"score is: "<<student_score<<endl;
}
string CStudent::CPG_Student::get_PG_Student_Job_Title() {
    return pg_student_job_title;
}

void CStudent::CPG_Student::set_PG_Student_Job_Title(string jobTitle) {
    pg_student_job_title = jobTitle;
}

string CCourse::get_Course_Name() {
    return course_name;
}

string CCourse::get_Course_Code() {
    return course_code;
}

float CCourse::get_Course_Cost() {
    return course_cost;
}

void CCourse::set_Course_Name(string name) {
    course_name = name;
}

void CCourse::set_Course_Code( string code) {
    course_code = code;
}

void CCourse::set_Course_Cost(float cost) {
    course_cost = cost;
}

void CCourse::add_Course() {
    cout << "Enter course name: ";
    cin >> course_name;

    cout << "Enter course code: ";
    cin >> course_code;

    cout << "Enter course cost: ";
    cin >> course_cost;

}

void CCourse::get_Course_Info() {
    cout << "Course Name: " << course_name << endl;
    cout << "Course Code: " << course_code << endl;
    cout << "Course Cost: " << course_cost << endl;
}







