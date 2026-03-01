#include<iostream>
using namespace std;
main(){

int InitialVelocity, Acceleration, Time, FinalVelocity;

cout<<"Enter Initial Velocity (m/s): ";
cin>>InitialVelocity;

cout<<"Acceleration (m/s^2): ";
cin>>Acceleration;

cout<<"Enter Time (s): ";
cin>>Time;

FinalVelocity= InitialVelocity + Acceleration * Time;

cout<<"Final Velocity(m/s): "<<FinalVelocity;
}