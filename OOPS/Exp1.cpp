#include<iostream>
using namespace std;
class complex
{
public:
    float real,imag;
    complex()
    {
        real=0;
        imag=0;
    }
    friend ostream & operator<< (ostream &, complex&);
    friend istream & operator>> (istream &, complex&);
    complex operator + (const complex& obj)
    {
        complex temp;  
        temp.real = real + obj.real;
        temp.imag= imag + obj.imag;
        return temp;
    }
    complex operator * (const complex& obj )
    {
    complex temp;
    temp.real= (real * obj.real)-(imag*obj.imag);
    temp.imag=(real*obj.imag)+(imag*obj.real);
    return temp;
    }
};
istream & operator >> (istream& is,complex & obj)
{
    is>>obj.real;
    is>>obj.imag;
    return is;
}
ostream & operator << (ostream & out, complex & obj)
{
    out <<""<<obj.real;
    out<<"+"<<obj.imag<<"i";
    return out;
}
int main ()
{
    float p,q;
    complex a,b,c,d;
    cout<<"Enter the real and imaginary parts: ";
    cin>>a>>b;
    c=a+b;
    d=a*b;
    cout<<"Addition is "<<c;
    cout<<"\nMultiplication is "<<d;
    return 0;
}