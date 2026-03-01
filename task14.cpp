#include<iostream>
using namespace std;
main(){
int minutes, totalframes, fps;

cout<<"enter minutes: ";
cin>>minutes;

cout<<"enter fps: ";
cin>>fps;

totalframes= minutes * 60 * fps;

cout<<"total frames = "<<totalframes;
}
