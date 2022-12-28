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
        this->next=NULL;
        delete next;
    }
};
void inserthead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void inserttail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletenode(node* &head,int pos){
    node* temp=head;
    if(pos==1){
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* curr=head;
        node* prev=NULL;
        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            ++count;
        }
        prev->next=curr->next;
        delete curr;
    }
}
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    inserthead(head,12);
    inserthead(head,15);
    inserttail(tail,30);
    inserttail(tail,303);
    inserttail(tail,00);    
    print(head);
    deletenode(head,1);
    print(head);
    deletenode(head,3);
    print(head);
    return 0;
}