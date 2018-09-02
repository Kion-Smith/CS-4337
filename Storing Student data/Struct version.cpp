#include <iostream>
#include <string>

using namespace std;

//creating the struct
struct student
{
    string name;
    string gradeLevel;
    int age;
    float gpa;

};

//seting the number of elements in the array
const int maxStudents =2;
//creating array of structs
student record[maxStudents];

int main()
{
    //Loop through array of structs and input user data
    for(int i=0;i<maxStudents;i++)
    {
        //store student name in struct array at position i
        cout<< "Enter the name of the student" <<endl;
        cin>> record[i].name;

        //store student age in struct array at position i
        cout<< "Enter the students age" <<endl;
        cin>> record[i].age;

        //store student gpa in struct array at position i
        cout<< "Enter the students GPA" <<endl;
        cin>> record[i].gpa;

        //store student grade level in struct array at position i
        cout<< "Enter the students grade level" <<endl;
        cin>> record[i].gradeLevel;

        cout<< "----------------------" <<endl;
    }

    cout<<"======================"  <<endl;
    cout<<"======================"  <<endl;

    //outprint the results of the struct array
    for(int i=0;i<maxStudents;i++)
    {

        cout<<"The student "<< (i+1) <<"'s name is "<< record[i].name<< endl;
        cout<<"The student "<< (i+1) <<"'s  age is "<< record[i].age<< endl;
        cout<<"The student "<< (i+1) <<"'s  GPA is "<< record[i].gpa<< endl;
        cout<<"The student "<< (i+1) <<"'s grade level is "<< record[i].gradeLevel<< endl;

        cout<< "----------------------" <<endl;

    }

    return 0;
}




