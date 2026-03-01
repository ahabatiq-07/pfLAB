#include<iostream>
using namespace std;
main(){

int area, width, height,  painted;

cout<<"enter paint area: ";
cin>>area;

cout<<"enter width: ";
cin>>width;

cout<<"enter height: ";
cin>>height;

painted=  area/ (width * height);

cout<<"walls painted= "<< painted;
}