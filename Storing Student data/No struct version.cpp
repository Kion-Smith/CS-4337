#include <iostream>
#include <string>

using namespace std;

const int maxStudents =2;
string name[maxStudents];
string gradeLevel[maxStudents];
int age[maxStudents];
float gpa[maxStudents];


class studentObj
{
    public:
        string name;
        string gradeLevel;
        int age;
        float gpa;


};
studentObj objectRecord[maxStudents];



int main()
{
    cout<< "Non-struct version" <<endl;

    for(int i=0;i<maxStudents;i++)
    {
        //store student name in struct array at position i
        cout<< "Enter the name of the student" <<endl;
        cin>> name[i];
        objectRecord[i].name = name[i];

        //store student age in struct array at position i
        cout<< "Enter the students age" <<endl;
        cin>> age[i];
        objectRecord[i].age = age[i];

        //store student gpa in struct array at position i
        cout<< "Enter the students GPA" <<endl;
        cin>> gpa[i];
        objectRecord[i].gpa = gpa[i];

        //store student grade level in struct array at position i
        cout<< "Enter the students grade level" <<endl;
        cin>> gradeLevel[i];
        objectRecord[i].gradeLevel = gradeLevel[i];

        cout<< "----------------------" <<endl;
    }

    cout<<"======================"  <<endl;
    cout<<"======================"  <<endl;

    for(int i=0;i<maxStudents;i++)
    {

        cout<<"The student "<< (i+1) <<"'s name is "<< name[i]<< endl;
        cout<<"The student "<< (i+1) <<"'s  age is "<< age[i]<< endl;
        cout<<"The student "<< (i+1) <<"'s  GPA is "<< gpa[i]<< endl;
        cout<<"The student "<< (i+1) <<"'s grade level is "<< gradeLevel[i]<< endl;

        cout<< "----------------------" <<endl;

    }

    cout<< "Object version" << endl;
    for(int i=0;i<maxStudents;i++)
    {
        //Object version
        cout<<"The student "<< (i+1) <<"'s name is "<< objectRecord[i].name<< endl;
        cout<<"The student "<< (i+1) <<"'s  age is "<< objectRecord[i].age<< endl;
        cout<<"The student "<< (i+1) <<"'s  GPA is "<< objectRecord[i].gpa<< endl;
        cout<<"The student "<< (i+1) <<"'s grade level is "<< objectRecord[i].gradeLevel<< endl;

        cout<< "----------------------" <<endl;

    }

    return 0;
}
