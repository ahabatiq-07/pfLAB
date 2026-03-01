#include<iostream>
using namespace std;
main()
{
 float weight;
cout<<" Enter weight of the fertilizer bag (in pounds):";
cin>>weight;
float bagcost;
cout<<" Enter the cost price of the bag ($):";
cin>>bagcost;
float area;
cout<<" Enter the size of the area bag can cover:";
cin>>area;
float costperpound;
costperpound = bagcost / weight ;
cout<<" Cost of fertilizer per pound: $"<<costperpound <<endl;
float costpersquarefoot;
costpersquarefoot = bagcost / area ;
cout<<" Cost of fertilizer per square foot is : $"<<costpersquarefoot;
}