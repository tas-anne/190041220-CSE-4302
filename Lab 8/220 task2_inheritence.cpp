#include<iostream>
using namespace std;
class Staff                                 //base class
{
private:
    int code;
    string name;
public:
    void set_func(string n,int c)///input taking
    {
        name=n;
        code=c;
    }
    string staffname_show()///display name
    {
        return name;
    }
    int staff_code_show()///display code
    {
        return code;
    }
    void whoAmI()
    {
        cout<<" Staff."<<endl;
    }
};

class Teacher : public Staff //base class= staff,derived class=Teacher
{
private:
    string subject;
    string publication;
public:
    void set_teacher(string s,string p)
    {
        subject=s;
        publication=p;
    }
    void display()
    {
        cout<<"name      code       subject                   publication"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<staffname_show( )<<"     "<<staff_code_show()<<"     "<<subject<<"     "<<publication<<endl;
                    //staff class function                 //staff class function
    }
    void whoAmI()//Teacher-staff
    {
        cout<<" Teacher -";
        Staff::whoAmI();//will print staff
    }
};

class Officer:public Staff//base class->staff,derived class->officer
{
private:
    string grade;
public:
    void set_grade(string g)
    {
        grade=g;
    }
    void display()
    {
        cout<<" name            code       Category "<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout <<staffname_show( )<<"       "<<staff_code_show()<<"     "<<grade<<endl;
    }
    void whoAmI()
    {
        cout<<" Officer -";
        Staff::whoAmI();
    }
};
class Typist: public Staff  //base class staff,derived typist
{
private:
    float speed;
public:
    void set_speed(float s)
    {
        speed=s;
    }
    float speed_display()
    {
        return speed;
    }
    void whoAmI()
    {
        cout<<" Typist -";
        Staff::whoAmI();
    }
};
class Casual:public Typist //base class typist which is the derived of staff class,derived class Causual
{
private:
    float wage;
public:
    void set_wage(float w)
    {
        wage=w;
    }
    float get_wage()
    {
        return wage;
    }
    void show()
    {
        cout<<"name              code          speed         wage"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<staffname_show( )<<"        "<<staff_code_show( )<<"          "<<speed_display()<<"         "<<wage<<endl;
                   //staff class                                    //staff class                                   //Typist class
    }
    void whoAmI()
    {
        cout<<" Casual - ";
        Typist::whoAmI();
    }

};

class Regular:public Typist
{
private:
    float wage;
public:
    void set_wage(float w)
    {
        wage=w;
    }
    void show()
    {
        cout<<"name              code          speed         wage"<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<staffname_show( )<<"        "<<staff_code_show( )<<"          "<<speed_display()<<"         "<<wage<<endl;
                //staff class                                    //staff class                                   //Typist class
    }
    void whoAmI()
    {
        cout<<" Regular - ";
        Typist::whoAmI();
    }
};

int main()
{
    Teacher t;
    t.set_func("Ataur",420);
    t.set_teacher("programming with c++"," Tata McGraw Hill");


    Officer o;
    o.set_func("Md. Rashed",222);
    o.set_grade("First class");

    Casual c;
    c.set_func("Kawser Ahmed",333);
    c.set_speed(78.9);
    c.set_wage(10000);

    Regular r;
    r.set_func("Robiul Awal",333);
    r.set_speed(85.5);
    r.set_wage(15000);

    cout<<endl;
    cout<<"About teacher: "<<endl;
    t.display();
    cout<<"I am a";
    t.whoAmI();
    cout<<endl;

    cout<<endl;
    cout<<"About officer:"<<endl;
    o.display();
    cout<<"I am a";
    o.whoAmI();
    cout<<endl;

    cout<<endl;
    cout<<"About regular typist :"<<endl;
    r.show();
    cout<<"I am a";
    r.whoAmI();
    cout<<endl;

    cout<<endl;
    cout<<"About causal typist :"<<endl;
    c.show();
    cout<<"I am a";
    c.whoAmI();
    cout<<endl;

    return 0;
}
