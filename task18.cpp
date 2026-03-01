#include<iostream>
using namespace std;
main(){
int n;
cout<<"Enter the number of sides of the polygon: ";
cin>>n;

int polygon;
polygon= (n-2) * 180;

cout<<"The total sum of interal angles of a/ : "<<n<<"-sided polygon is: "<<polygon<<" degrees";
}