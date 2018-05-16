#include <iostream>
#include <vector>
#include <istream>
#include <set>
#include <cstdlib>
#include "Student.h"

using namespace std;

//class Student{
//private:
//    string name;
//    int age;
//    float grade;
//  static vector<Student> vector_students;
//  static int counter;
//  static vector<float> grades;
//  static int highstgradeidx;
//public :
//    Student(){
//    name="";
//    age=0;
//    grade=0;
//    }
//    Student(string n,int a,float g){
//    name=n;
//    age=a;
//    grade=g;
//    vector_students.push_back(*this);
//    counter++;
//    }
//
//    string getname() const{
//    return name;
//    }
//
//    int getage() const{
//    return age;
//    }
//
//    float getgrade() const{
//    return grade;
//    }
//
//    friend istream &operator>>(istream &is,Student &s){
//    is>>s.name>>s.age>>s.grade;
//    return is;
//    }
//
//    friend ostream &operator<<(ostream &os,const Student &s){
//    os<<"name : "<<s.name<<", age :  "<<s.age<<", grade : "<<s.grade;
//    return os;
//    }
//
//    static bool stringlessthananother(string s1,string s2){
//    int s1size = s1.size();
//    int s2size = s2.size();
//    int counter = 0;
//    while (counter!=s1size && counter!= s2size){
//        if(s1[counter]==s2[counter]){
//            counter++;
//            continue;
//        }
//        else if(s1[counter]<s2[counter]){
//            return true;
//        }
//        else if(s1[counter]>s2[counter]){
//            return false;
//        }
//
//        counter++;
//    }
//    return false;
//
//    }
//
//    static void Swap(Student &x,Student &y){
//         Student temp = x;
//         x = y;
//         y=temp;
//        }
//
//static void selectionsort(vector<Student> students,int n){ //i think it has to be passed by reference
//    int minindex = 0;
//    for(int i=0;i<n-1;i++){
//            minindex = i;
//        for(int j=i+1;j<n;j++){
//            if(stringlessthananother(students[j].name,students[minindex].name)){ //j < miniindex
//                minindex = j;
//            }
//
//
//        }
//      Swap(students[i],students[minindex]);
//      cout <<students[i]<<endl;
//    }
//    cout <<students[n-1]<<endl;
//}
//
//    static void addstudent(){
//    counter++;
//    Student temp;
//    cout <<"enter the name then age then grade of this student please"<<endl;
//    cin >> temp;
//    vector_students.push_back(temp);
//
//    if(vector_students[counter-1].grade>vector_students[highstgradeidx].grade){
//        highstgradeidx=counter-1;
//    }
////    3awz a3ml function b t sort dlw2ty
//}
//    static void searchstudent(string inputname){
//        bool founded=0;
//        int i=0;
//        for(;i<counter;i++){
//            if(vector_students[i].getname() == inputname){
//                founded = 1;
//                cout <<"the student "<<inputname<<" is found! here's the information of this student";
//                cout <<vector_students[i]<<endl;
//
//            }
//        }
//        if(!founded){
//            cout <<"cannot find this student "<<endl;
//        }
//    }
//
//
//    static int searchstudentforupdating(string inputname){
//        bool founded=0;
//        int i=0;
//        for(;i<counter;i++){
//            if(vector_students[i].getname() == inputname){
//                founded = 1;
//                return i;
//
//            }
//        }
//        if(!founded){
//            return -1;
//        }
//    }
//
//    static void updatestudentbyname(string name){
//        int idx = searchstudentforupdating(name);
//        if(idx!=-1){
//            cout <<"enter the new grade"<<endl;
//            cin >> vector_students[idx].grade;
//        }
//        else{
//            cout <<"the name you have entered cannot defined"<<endl;
//        }
//        highstgradeidx=0;
//        for(int i=0;i<counter;i++){
//            if(vector_students[i].grade>vector_students[highstgradeidx].grade){
//                highstgradeidx = i;
//            }
//        }
//    }
//
//    static void liststudentsalphabetically(){
//        selectionsort(vector_students,counter);
////        for(int i=0;i<counter;i++){
////            cout <<vector_students[i]<<endl;
////        }
//    }
//   static void findthehighstgrade(){
//        cout <<"the highest grade is :  "<<vector_students[highstgradeidx].grade;
//        cout <<"and here are their information : \n"<<vector_students[highstgradeidx]<<endl;
//    }
//
//};
//vector<Student> Student::vector_students;
//int Student::counter =0;
//vector<float> Student::grades;
//int Student::highstgradeidx = 0;



int main()
{
    int choice;
    cout <<"Hello, please choose what you want"<<endl;
    cout <<"1)Add student"<<endl;
    cout <<"2)Search student by name"<<endl;
    cout <<"3)List students in alphabetical order"<<endl;
    cout<<"4)Update student grade"<<endl;
    cout <<"5)Find the highest grade student and prints student information"<<endl;
    cout <<"please enter 0 if you want to close "<<endl;
    cin >>choice;
    if(choice==1){
      Student::addstudent();
    }
    else if(choice==2){
            string tempname;
        cout <<"enter the name : "<<endl;
        cin >>tempname;
        Student::searchstudent(tempname);
    }
    else if(choice==3){
        Student::liststudentsalphabetically();
    }
    else if(choice==4){
         string tempname;
         cout<<"enter the name : "<<endl;
         cin >>tempname;
        Student::updatestudentbyname(tempname);
    }
    else if(choice==5){
        Student::findthehighstgrade();
    }
    else if(choice==0){
            exit(0);

    }
    else {
        cout <<"you have entered wrong choice please try again"<<endl;
    }

    while(choice!=0){
                int choice;
    cout <<"1)Add student"<<endl;
    cout <<"2)Search student by name"<<endl;
    cout <<"3)List students in alphabetical order"<<endl;
    cout<<"4)Update student grade"<<endl;
    cout <<"5)Find the highest grade student and prints student information"<<endl;
    cout <<"enter 0 if you want to close "<<endl;
    cin >>choice;
    if(choice==1){
      Student::addstudent();
    }
    else if(choice==2){
            string tempname;
        cout <<"enter the name : "<<endl;
        cin >>tempname;
        Student::searchstudent(tempname);
    }
    else if(choice==3){
        Student::liststudentsalphabetically();
    }
    else if(choice==4){
         string tempname;
         cout<<"enter the name : "<<endl;
         cin >>tempname;
        Student::updatestudentbyname(tempname);
    }
    else if(choice==5){
        Student::findthehighstgrade();
    }
    else if(choice==0){
        break;
    }
    else {
        cout <<"you have entered wrong choice please try again"<<endl;
    }


    }




    return 0;
}
