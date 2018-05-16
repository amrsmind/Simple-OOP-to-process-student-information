#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <vector>
#include <istream>
#include <set>
#include <cstdlib>

using namespace std;

class Student{
private:
    string name;
    int age;
    float grade;
  static vector<Student> vector_students;
  static int counter;
  static vector<float> grades;
  static int highstgradeidx;
public :
    Student();
    Student(string n,int a,float g);

    string getname() const;

    int getage() const;

    float getgrade() const;

    friend istream &operator>>(istream &is,Student &s){
    is>>s.name>>s.age>>s.grade;
    return is;
    }

    friend ostream &operator<<(ostream &os,const Student &s){
    os<<"name : "<<s.name<<", age :  "<<s.age<<", grade : "<<s.grade;
    return os;
    }

    static bool stringlessthananother(string s1,string s2);

    static void Swap(Student &x,Student &y);

static void selectionsort(vector<Student> students,int n);

    static void addstudent();
    static void searchstudent(string inputname);

    static int searchstudentforupdating(string inputname);

    static void updatestudentbyname(string name);

    static void liststudentsalphabetically();
   static void findthehighstgrade();

};
//vector<Student> Student::vector_students;
//int Student::counter =0;
//vector<float> Student::grades;
//int Student::highstgradeidx = 0;



#endif // STUDENT_H_INCLUDED
