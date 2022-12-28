#include<graphics.h>
using namespace std;
int main(){
    int slope;
    cout<<"Enter the Co-ordinates"<<endl;
    int x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    slope=(y2-y1)/(x2-x1);
    int dx,dy;
    dx=(y2-y1)/slope;
    dy=slope*(x2-x1);

    return 0;
}
