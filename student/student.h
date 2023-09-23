#define STUDENT_H
#include <string>
using namespace std;

class CStudent {
public:

    void setStudentName(string name);
    string getStudentName();
    void SetEmailUsername(string email);
    string getStudentEmailUsername();
    void setStudentEmailPassword(string password);
    string getStudentEmailPassword();

    void setStudentMajor(string major);
    string getStudentMajor();
    void set_Student_ID(int id);
    int get_Student_ID();
    void set_Student_Grades(float grades[5]);
    float* get_Student_Grades();
    void set_Student_Score(float result);
    float get_Student_Score();
    float claculateGPA();
    void registerStudent();
    void getStudentInfo();
CStudent(){

student_name="";
student_email_username="";
student_major="";
student_email_password="";
for (int i = 0; i < 5; i++)
        student_grades[i] = 0.0;
student_score=0;
student_ID=0;


}

private:
    string student_name;
    string student_email_username;
    string student_major;
    string student_email_password;
    float student_grades[5];
    float student_score;
    int student_ID;
public:
    class CPG_Student;
};
class CStudent::CPG_Student : public CStudent {
private:
    string pg_student_job_title;

public:
    string get_PG_Student_Job_Title();
void set_PG_Student_Job_Title(string jobTitle);
};
class CCourse {
private:
    string course_name;
    string course_code;
    float course_cost;

public:
    string get_Course_Name();
    string get_Course_Code();
    float get_Course_Cost();

    void set_Course_Name(string name);
    void set_Course_Code(string code);
    void set_Course_Cost(float cost);

    void add_Course();
    void get_Course_Info();
};




