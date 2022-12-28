#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void inserthead(node* &head, int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void inserttail(node* &tail,int d){
    node * temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
void insetmid(node* temp1,int p,int d){
    node* temp =new node(d);
    int posn=0;
    while(posn!=p-1){
        posn++;
        
    }
}
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    inserthead(head,20);
    inserttail(tail,20);
    print(head);
    return 0;
}