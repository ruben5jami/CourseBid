
#include <iostream>
using namespace std;

Student* student;
Courses* Course;
Expression formula;

void setForrmula(Expression e);
void addStudent(Student& stud);
void removeStudent(Student& stud);
void updateStudent(Student& stud);
void addCourse(Course& course);
void removeCourse(Course& course);
void updateCourse(Course& course);
Student getStudent(int);
Course getCourse(int);
