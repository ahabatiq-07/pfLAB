#include<iostream>
using namespace std;
main()
{
int age;
cout<<"enter age :";
cin>>age;

int moves;
cout<<"enter moves :";
cin>>moves;

int average_years ;
average_years= age / (moves+1);

cout<<"average years = "<< average_years;
}