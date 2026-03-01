#include<iostream>
using namespace std;
main(){

int win=3;
int draw=1;
int loss=0;
int wins, draws, losses, total;
cout<<"enter the number of wins: ";
cin>>wins;

wins=wins * win;

cout<<"enter the number of draws: ";
cin>>draws;

draws=draws * draw;

cout<<"enter the number of losses: ";
cin>>losses; 

losses=losses * loss;
total=wins+draws+losses;

cout<<"Pakistan has obtained "<<total<<" in Asia Cup Tornamesnt";
}