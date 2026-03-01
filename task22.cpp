#include<iostream>
using namespace std;
main()
{
string patientname;
cout<<"Enter the name of the person :";
cin>>patientname;

float targetloss;
cout<<"Enter the target weight loss in kilograms :";
cin>>targetloss;

float totalloss;
totalloss=targetloss * 15;

cout<<patientname << " will be " << totalloss <<  " days to lose " <<  targetloss <<  " of weight by following the doctor's suggestions" ;
} 
