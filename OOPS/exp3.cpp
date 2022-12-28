#include<iostream>
#include<stdio.h>
using namespace std;
class  publication 
{
private:
    string title;
    float price;
public:
    void add()
    {
        cout<<"enter the publication information"<<endl;
        cout<<"enter title of the publication : ";
        cin.ignore();
        getline(cin, title);
        cout<<"enter the price of the publication ";
        cin>>price;
    }
    void display(){
        cout<<"\n\n\ntitle of publication :"<<title;
        cout<<"\n\nPublication Price :"<<price;
    }
};
class book: public publication 
{
    private:int page_count;
    public: void add_book(){
        try{
        add();
        cout<<"enter the page count of book";
        cin>>page_count;
        if(page_count<=0){
            throw page_count;
        }
    }
    catch(...){
        cout<<"\n Invalid Page count!!!";
        page_count=0;
    }
}
void display_book(){
    display();
    cout<<"\npage count :"<<page_count;
    cout<<"\n----------------------------------------------\n";
}
};
class tape: public publication
{
    private: float play_time;
    public: void add_tape(){
        try{
            add();
            cout<<"enter play duration of the tape";
            cin>>play_time;
            if (play_time<=0)
                throw play_time;
            } catch (...) {
                cout<<"\n\n invalid playtime";
                play_time=0;
            }
        }
    void display_tape(){
        display();
        cout<<"\n {Play time: "<<play_time<<" min";
        cout<<"-----------------------------------------";
    }
};
int main()
{
    book b1[10];
    tape t1[10];
    int ch, b_count=0, t_count=0;
    do{
        cout<<"\n Publication database system";
        cout<<"\n Menu";
        cout<<"\n 1. Add info of books";
        cout<<"\n 2. Add info of tapes";
        cout<<"\n 3. Display books info";
        cout<<"\n 4. Display tapes info ";
        cout<<"\n 5. Exit";
        cout<<"\n\n Enter your choice: ";
        cin>>ch;
        switch (ch){
            case 1:
                b1[b_count].add_book();
                b_count++;
                break;
            case 2:
                t1[t_count].add_tape();
                t_count++;
                break;
            case 3:
                cout<<"\n\n BOOK PUBLICATION DATABASE SYSTEM";
                for(int j=0; j<b_count; j++){
                    b1[j].display_book();
                }
                break;
            case 4:
            cout<<"\n\n Tape Publication database system ";
            for (int j=0; j<t_count; j++)
            {
                t1[j].display_tape();
            }
            break;
            case 5:
                exit(0);
            }
    }while (ch !=5);
    return 0;
}
    