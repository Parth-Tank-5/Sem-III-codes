#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data=0;
    node* prev;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void inserthead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    //print(head);
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
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertpos(node* &head,int pos ,int d){
    int count=1;
    node* temp=new node(d);
    node* curr=head;
    node* prev=NULL;
    node* next=curr->next;
    if (pos==1){
        inserthead(head,d);
        return;
    }
    else{
    while(count<pos){
        prev=curr;
        curr=next;
        next=next->next;
        count++;
    }
    if(next==NULL){
        inserttail(head,d);
    }
    else{
        cout<<"sff"<<endl;
    prev->next=temp;
    temp->prev=prev;
    temp->next=curr;
    curr->prev=temp;
    }
    }
}
int main(){
    node* node1=new node(20);
    //cout<<node1->prev<<"\t"<<node1->data<<"\t"<<node1->next<<endl;
    node* head=node1;
    node* tail=node1;
    inserthead(head,30);
    inserthead(head,40);
    inserttail(tail,10);
    inserttail(tail,0);
    insertpos(head,1,50);
    print(head);
    insertpos(head,7,43);
    print(head);
    return 0;
}