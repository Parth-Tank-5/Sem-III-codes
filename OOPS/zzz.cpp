#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class data
{
    int rollno;
    char name[50],division[10],blood_group[10],addr[100],license[20],tele[20],classs[30],dob[40];
    public:
    static int obj_num;
    static void obj_count()
    {
        cout<<"\n No. of objects created: "<<obj_num;
    }
    void innn()
    {
        cout<<"inline function\n";
     }
    data()
    {
        rollno=1;
        strcpy(name, "Parth Tank");
        strcpy(classs,"II");
        strcpy(division,"A" );
        strcpy(dob,"01.01.2003");
        strcpy(tele,"1234567890");
        strcpy(blood_group,"O+ve");
        strcpy(addr,"Pune");
        strcpy(license,"HEHE123LOL");
        obj_num++;
    }
    data(data * ob)
    {
        strcpy(name, ob ->name);
        strcpy(classs,ob ->classs);
        strcpy(division,ob ->division);
        strcpy(dob,ob ->dob);
        strcpy(tele,ob ->tele);
        strcpy(blood_group,ob ->blood_group);
        strcpy(addr,ob ->addr);
        strcpy(license,ob ->license);
        obj_num++;
    }
    void gett()
    {
        cout<<"\n\n Enter the Data:\n Name,Rollno,Division,Dob,Telephone,blood group,address,license no. \n";
        cin>>name>>classs>>division>>dob>>tele>>blood_group >>addr>>license;
    }
    friend void display(data a);
    ~data()
    {
        cout<<"\n\n"<<this -> obj_num<<"-"<<this->name<<"Object destroyed"<<endl;
    }
};
void display(data a)
{
    cout<<"\n\n Name:"<<a.name<<"\n Rollno: "<<a.rollno<<"\n class:"<<a.classs<<"\n Division: "<<a.division<<"\nDate of birth "<<a.dob<<"\nblood Group"<<a.blood_group<<"\nTELEphone N umber "<<a.tele<<"address "
}
int main()
{

    return 0;
}