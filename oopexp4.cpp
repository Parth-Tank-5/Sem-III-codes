#include<iostream>
#include<fstream>
using namespace std;
class Employee 
{
    string Name;
    int ID;
    double salary;
    public:
        void accept(){
            cout<<"\n Name: ";
            cin.ignore();
            getline(cin,Name);
            cout<<"\nID:";
            cin>>ID;
            cout<<"\n Salary: ";
            cin>>salary;
            cout<<endl;
        }
        void display(){
            cout<<"\n Name: "<<Name;
            cout<<"\n Id: "<<ID;
            cout<<"\n Salary: "<<salary<<endl;
        }
};
int main(){
    Employee o[5];
    fstream f;
    int i,n;
    f.open("Demo.txt",ios::out);
    cout<<"\n Enter the numbear of employee you want to store:";
    cin >>n;
    for (i=0;i<n;i++)
    {
        cout<<"\n\n Enter the Information of Employee "<<i+1<<endl;
        o[i].accept();
        f.write((char * )& o[i],sizeof o[i]);
    }
    f.close();
    f.open("Demo.txt",ios::in);
    cout<<endl;
    cout<<"\n Information of Employees is as follows: ";
    for (i=0;i<n;i++)
    {
        cout<<"\n\nEmployee "<<i+1;
        f.write((char *) & o[i],sizeof o[i]);
        o[i].display();
    }
    f.close();
    return 0;
}