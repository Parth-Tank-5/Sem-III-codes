#include<bits/stdc++.h>
using namespace std;
class stackk{
    public:
    int *arr,top,size;
    stackk(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int element){
        if(top<size){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
    }
    void isempty(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;    
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }
    }
    int peek(){
        if(top>+0){
            return arr[top];
        }
        else{
            cout<<"stack underflow"<<endl;
            return -1;
        }
    }   
};
int main(){
    stackk st(10);
    st.push(23);
    st.push(40);
    st.push(323);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.isempty();
}