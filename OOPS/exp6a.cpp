#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class item{
    public:
    char name[20];
    int quantity,cost,code;
    bool operator == (const item & i1)
    {
        if(code==i1.code){
            return 1;
        }
        return 0;
    }
    bool operator < (const item & i1){
        if (code < i1.code)
        return 1;
        return 0;
    }
};
vector< item >o1;
void print(item & i1);
void display();
void insert();
void search();
void dlt();
bool compare(const item & i1, const item & i2){
    return i1.cost< i2.cost;
}
int main()
{
    int ch;
    do{
        cout<<"\n----------MENU----------";
        cout<<"\n1. Insert";
        cout<<"\n2. Display";
        cout<<"\n3. Search";
        cout<<"\n4. SOrt";
        cout<<"\n5. Delete";
        cout<<"\n6. Exit";
        cout<<"\nEnter your Choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:
            search();
            break;
            case 4:
            sort(o1.begin(), o1.end(),compare);
            cout<<"\n\nSorted on cost : ";
            display();
            break;
            case 5:
            dlt();
            break;
            case 6:
            exit(0);
        }
        }while(ch != 7);
        return 0;
}
void insert(){
    item i1;
    cout<<"\n\nEnter item name :";
    cin>>i1.name;
    cout<<"\nEnter item quantity: ";
    cin>>i1.quantity;
    cout<<"Enter the item cost: ";
    cin>>i1.cost;
    cout<<"\nEnter item code: ";
    cin>>i1.code;
    o1.push_back(i1);
}
void display(){
    for_each(o1.begin(), o1.end(),print);
}
void print(item & i1){
    cout<<"\n\nItem Name: "<<i1.name;
    cout<<"\nItem Quantity: "<<i1.quantity;
    cout<<"\nItem Cost: "<<i1.cost;
    cout<<"\nItem Code: "<<i1.code<<endl;
}
void search(){
    vector<item>::iterator p;
    item i1;
    cout<<"\nEnter Item code to search: ";
    cin>>i1.code;
    p=find(o1.begin(), o1.end(),i1);
    if(p==o1.end()){
        cout<<"\nNot Found!!";
        }
    else
    cout<<"\n\n Found!!";
}
void dlt(){
    vector<item>:: iterator p;
    item i1;
    cout<<"\n Enter Item code to Delete: ";
    cin>>i1.code;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end()){
        cout<<"\n\nNot found!!!";
    }
    else{
        o1.erase(p);
        cout<<"\n\nDeleted!!!";
    } 
}
