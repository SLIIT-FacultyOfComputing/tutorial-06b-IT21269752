#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int no,char ename[]) {
  studentid=no;
  strcpy(name,ename);
  
}

// Display StudentId and Name
void Student::display() {
  cout<<"student id:"<<studentid<<endl;
  cout<<"name:"<<name<<endl;
  
}
