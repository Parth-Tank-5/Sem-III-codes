#include<bits/stdc++.h>
using namespace std;
class complexx{
    public:
        int real,imag;
        complexx(int real,int imag){
            this->real=real;
            this->imag=imag;
        }
        complexx operator +(complexx s)
        {
            complexx temp(0,0);
            temp.real=this->real+s.real;
            temp.imag=this->imag+s.imag;
            return temp;
        }
};
int main(){
    complexx c1(10,20);
    complexx c2(20,10);
    complexx c3(0,0); 
    c3=c1+c1;
    cout<<"addition is: "<<c3.real<<" + "<<c3.imag<<" i"<<endl;

    return 0;
}