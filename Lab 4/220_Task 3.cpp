#include<iostream>
#include<string.h>
using namespace std;
class FeedInfo
{
private:
    int emp_id;
    char emp_name[100];
    int age;
    int salary;
public:
    FeedInfo(int no, char *name,int ag,int sal)
    {
        emp_id=no;
        strcpy(emp_name, name);
        salary=sal;
        age=ag;
    }
    void getStatus(int ag,int sal)
    {
        age=ag;
        salary=sal;

    }
    void showInfo()
    {
        if(age<=25 && salary<=20000)
        {
            cout<<emp_name<<" is Low Salaried Person"<<endl;
        }
        if(age<=25 && salary>20000)
        {
            cout<<emp_name<<" is Moderate Salaried Person"<<endl;
        }
        if(age>25 && salary<=21000)
        {
            cout<<emp_name<<" is Low  Salaried person"<<endl;
        }
        if(age>25 && salary>21000 && salary<=60000)
        {
            cout<<emp_name<<" is Moderate  Salaried person"<<endl;
        }
        if(age>25 && salary>60000)
        {
            cout<<emp_name<<" is a High Salaried person"<<endl;
        }

    }

};
int main()
{
    int no;
    cout<<"Number:"<<endl;
    cin>>no;
    char name[100];
    cout<<"\nName:"<<endl;
    cin>>name;
    int ag;
    cout<<"\nAge:"<<endl;
    cin>>ag;
    int sal;
    cout<<"\nSalary:"<<endl;
    cin>>sal;
    FeedInfo info(no,name,ag,sal);
    info.showInfo();
}
