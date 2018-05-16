#include "Student.h"
#include <iostream>
#include <vector>
#include <istream>
#include <set>
#include <cstdlib>

using namespace std;

    Student::Student(){
    name="";
    age=0;
    grade=0;
    }
    Student::Student(string n,int a,float g){
    name=n;
    age=a;
    grade=g;
    vector_students.push_back(*this);
    counter++;
    }

    string Student::getname() const{
    return name;
    }

    int Student::getage() const{
    return age;
    }

    float Student::getgrade() const{
    return grade;
    }



     bool Student::stringlessthananother(string s1,string s2){
    int s1size = s1.size();
    int s2size = s2.size();
    int counter = 0;
    while (counter!=s1size && counter!= s2size){
        if(s1[counter]==s2[counter]){
            counter++;
            continue;
        }
        else if(s1[counter]<s2[counter]){
            return true;
        }
        else if(s1[counter]>s2[counter]){
            return false;
        }

        counter++;
    }
    return false;

    }

     void Student::Swap(Student &x,Student &y){
         Student temp = x;
         x = y;
         y=temp;
        }

 void Student::selectionsort(vector<Student> students,int n){ //i think it has to be passed by reference
    int minindex = 0;
    for(int i=0;i<n-1;i++){
            minindex = i;
        for(int j=i+1;j<n;j++){
            if(stringlessthananother(students[j].name,students[minindex].name)){ //j < miniindex
                minindex = j;
            }


        }
      Swap(students[i],students[minindex]);
      cout <<students[i]<<endl;
    }
    cout <<students[n-1]<<endl;
}

     void Student::addstudent(){
    counter++;
    Student temp;
    cout <<"enter the name then age then grade of this student please"<<endl;
    cin >> temp;
    vector_students.push_back(temp);

    if(vector_students[counter-1].grade>vector_students[highstgradeidx].grade){
        highstgradeidx=counter-1;
    }
//    3awz a3ml function b t sort dlw2ty
}
     void Student::searchstudent(string inputname){
        bool founded=0;
        int i=0;
        for(;i<counter;i++){
            if(vector_students[i].getname() == inputname){
                founded = 1;
                cout <<"the student "<<inputname<<" is found! here's the information of this student";
                cout <<vector_students[i]<<endl;

            }
        }
        if(!founded){
            cout <<"cannot find this student "<<endl;
        }
    }


     int Student::searchstudentforupdating(string inputname){
        bool founded=0;
        int i=0;
        for(;i<counter;i++){
            if(vector_students[i].getname() == inputname){
                founded = 1;
                return i;

            }
        }
        if(!founded){
            return -1;
        }
    }

     void Student::updatestudentbyname(string name){
        int idx = searchstudentforupdating(name);
        if(idx!=-1){
            cout <<"enter the new grade"<<endl;
            cin >> vector_students[idx].grade;
        }
        else{
            cout <<"the name you have entered cannot defined"<<endl;
        }
        highstgradeidx=0;
        for(int i=0;i<counter;i++){
            if(vector_students[i].grade>vector_students[highstgradeidx].grade){
                highstgradeidx = i;
            }
        }
    }

     void Student::liststudentsalphabetically(){
        selectionsort(vector_students,counter);
//        for(int i=0;i<counter;i++){
//            cout <<vector_students[i]<<endl;
//        }
    }
    void Student::findthehighstgrade(){
        cout <<"the highest grade is :  "<<vector_students[highstgradeidx].grade;
        cout <<"and here are their information : \n"<<vector_students[highstgradeidx]<<endl;
    }


vector<Student> Student::vector_students;
int Student::counter =0;
vector<float> Student::grades;
int Student::highstgradeidx = 0;
