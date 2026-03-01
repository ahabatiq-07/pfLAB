#include<iostream>
using namespace std;
main(){

int Minutes, Second, Frames;

cout<<"Number of Minutes: ";
cin>>Minutes; 

cout<<"Frames per Second: ";
cin>>Second;

Frames= Minutes * Second * 60;

cout<<"Total Number of Frames: "<< Frames; 
}