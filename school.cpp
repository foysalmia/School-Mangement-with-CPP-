#include<bits/stdc++.h>

using namespace std;

class Student
{
protected:
    int marks[5];
    int postion;
public:
    string name;
    int roll;
    int year;

    Student(string name,int roll,int year,int marks[5])
    {
        this->name = name;
        this->roll = roll;
        this->year = year;
        for(int i=0; i<5)
        {
            this->marks[i] = marks[i];
        }
        position = 0;
    }
};
void create_school(int n,Student school)
{
    for(int i=0; i<n; i++)
    {
        string name;
        int roll;
        int year;
        int marks[5];
        cout<<"Enter student Name Roll Year"<<endl;
        cin>>name>>roll>>year;
        cout<<"Enter Marks"<<endl;
        for(int i=0; i<5; i++)
        {
            int a;
            cin>>a;
            marks[i] = a;
        }

    }

}
int main()
{
    int n;
    cout<<"How many students ?"<<endl;
    cin>>n;
    create_school(n);
    return 0;
}
