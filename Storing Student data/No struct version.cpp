#include <iostream>
#include <string>

using namespace std;

//setting constant array value
const int maxStudents =2;

//setting the student values
string name[maxStudents];
string gradeLevel[maxStudents];
int age[maxStudents];
float gpa[maxStudents];



int main()
{
    cout<< "Non-struct version" <<endl;

    //loop through all the different arrays and store the data
    for(int i=0;i<maxStudents;i++)
    {
        //store student name in  array at position i
        cout<< "Enter the name of the student" <<endl;
        cin>> name[i];

        //store student age in  array at position i
        cout<< "Enter the students age" <<endl;
        cin>> age[i];

        //store student gpa in  array at position i
        cout<< "Enter the students GPA" <<endl;
        cin>> gpa[i];

        //store student grade level in  array at position i
        cout<< "Enter the students grade level" <<endl;
        cin>> gradeLevel[i];

        cout<< "----------------------" <<endl;
    }

    cout<<"======================"  <<endl;
    cout<<"======================"  <<endl;

    //outprint the student data
    for(int i=0;i<maxStudents;i++)
    {

        cout<<"The student "<< (i+1) <<"'s name is "<< name[i]<< endl;
        cout<<"The student "<< (i+1) <<"'s  age is "<< age[i]<< endl;
        cout<<"The student "<< (i+1) <<"'s  GPA is "<< gpa[i]<< endl;
        cout<<"The student "<< (i+1) <<"'s grade level is "<< gradeLevel[i]<< endl;

        cout<< "----------------------" <<endl;

    }
    return 0;
}
