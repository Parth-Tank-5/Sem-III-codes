#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int d){
            this->data=d;
            this->next=NULL;
        }
        ~node(){
            if(next!=NULL){
                delete next;                
                next=NULL;
            }
        }
};
void inserthead(node* &tail,int s,int d){
    node* temp=new node(d);
    if(tail->data==s){
        tail->next=temp;
        temp->next=tail;
        tail=temp;
    }
    else{
        tail=tail->next;
    }
}
void print(node* &tail){
    node* temp= tail;
    temp=temp->next;
    while(temp!=tail){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1=new node(10);
    node* tail=node1;
    inserthead(tail,10,20);
    inserthead(tail,20,30);
    inserthead(tail,30,40);
    print(tail);
    return 0;
}