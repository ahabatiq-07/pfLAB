#include<iostream>
using namespace std;
main()
{
 int area;
 int w;
int h;
cout<<" Number of square meters you can print : ";
cin>>area;
cout<<" Width of the single wall (in meters) : ";
cin>>w;
cout<<" Height of the single wall (in meters):";
cin>>h;
int paintedwalls;
paintedwalls = area / (w * h) ;
cout<<" Number of walls you can print: "<<paintedwalls;
} 