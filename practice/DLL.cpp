#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next; 
        node* prev;
        node(int d){
            this->data=d;
            this->next=this->prev=NULL;
        }
        ~node(){
            this->next=NULL;
            this->prev=NULL;
            delete next;
            delete prev;
        }
};
void inserthead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
void inserttail(node* &tail,int d){
    node* temp=new node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void insertpos(node* head,int pos,int d){
    node* temp= new node(d);
    node* curr=head;
    node* prev=NULL;
    node* next=curr->next;
    int count=1;
    while(count<pos){
        prev=curr;
        curr=next;
        next=next->next;
        count++;
    }
    prev->next=temp;
    temp->next=curr;
    head=temp;
}
void deletepos(node* &head,int pos){
    node* curr=head;
    node* prev=NULL;
    node* next=curr->next;
    int count=1;
    if(pos!=1){
    while(count<pos){
        prev=curr;
        curr=next;
        next=next->next;
        count++;
    }
    prev->next=next;
    next->prev=prev;
    delete curr;
    }
    else{
        next->prev=NULL;
        delete curr;
    }
}
int main(){
    node* node1=new node(10);
    node* head=node1;
    print(head);
    node* tail=node1;
    inserthead(head,20);
    print(head);
    inserthead(head,232);
    print(head);
    inserttail(tail,34);
    print(head);
    inserttail(tail,230);
    print(head);
    insertpos(head,3,69);
    print(head);
    deletepos(head,1);
    print(head);
    cout<<head->data<<"\t"<<tail->data;
    return 0;
}