#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
    initwindow(800,800);
    setcolor(BROWN);
    line(0,400,800,400);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(400,200,BROWN);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(400,500,BROWN);
    setcolor(BROWN);
    line(0,400,200,200);
    line(200,200,400,400);
    line(400,400,600,200);
    line(600,200,800,400);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(200,350,BROWN);
    floodfill(600,350,BROWN);
    setcolor(BROWN);
    line(395,400,300,800);
    line(405,400,500,800);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(400,500,BROWN);
    for(int i=0;i<=60;i++){
        setcolor(YELLOW);
        arc(400,400,45,135,i);
        delay(50);
    }

/*

    setcolor(BROWN);
    line(0,400,800,400);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(400,200,BROWN);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(400,500,BROWN);
    setcolor(BROWN);
    line(0,400,200,200);
    line(200,200,400,400);
    line(400,400,600,200);
    line(600,200,800,400);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(200,350,BROWN);
    floodfill(600,350,BROWN);
    setcolor(BROWN);
    line(395,400,300,800);
    line(405,400,500,800);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(400,500,BROWN);
    for(int i=0;i<=60;i++){
        setcolor(YELLOW);
        arc(400,400,45,135,i);
//        delay(50);
    }
*/


    delay(2000);
    for(int i=60;i>=0;i--){
        setcolor(LIGHTBLUE);
        arc(400,400,45,135,i);
        delay(50);
    }
    getch();
return 0;}
