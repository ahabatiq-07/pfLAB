#include<iostream>
using namespace std;
main()
{
   
  float vegpriceperkg;
cout<<" Enter vegetable price per kilogram (in coins) :";
cin>>vegpriceperkg;
float fruitpriceperkg;
cout<<" Enter fruits price per kilogram (in coins) :";
cin>>fruitpriceperkg;
int totalveg;
cout<<" Enter total kilograms of vegetables:";
cin>>totalveg;
int totalfruit;
cout<<" Enter total kilograms of fruits :";
cin>>totalfruit;
float totalcoins;
totalcoins = (totalveg * vegpriceperkg) + (totalfruit * fruitpriceperkg) ;
float totalRP;
totalRP = totalcoins / 1.94 ;
cout<<" Total earning in Rupees (Rps) :"<<totalRP;
}