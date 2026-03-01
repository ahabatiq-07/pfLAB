#include<iostream>
using namespace std;
main(){
string name;
float matricmarks;
float intermediatemarks;
float ecatmarks;

cout<<"enter student's name: ";
cin>>name;

cout<<"enter matriculation marks (out of 1100) : ";
cin>>matricmarks;

cout<<"enter intermediate marks (out of 550) : ";
cin>> intermediatemarks;

cout<<"enter ecat marks (out of 400) :" ;
cin>>ecatmarks;

float aggregate;
aggregate=((matricmarks / 1100 * 0.1) + ( intermediatemarks / 400 * 0.4) + (ecatmarks / 400 * 0.5)) * 100;

cout<<"aggregate score for "<< name << " is " << aggregate;
}