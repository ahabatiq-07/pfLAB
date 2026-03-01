#include<iostream>
using namespace std;
main(){

int population ;
cout<<"enter the current world population : "; 
cin>>population ;

int monthlybirthrate;
cout<<"enter the monthly birth rate (number of birth per month) : " ;
cin>>monthlybirthrate ;

int yearlyBR ; 
yearlyBR= monthlybirthrate * 12 ;

int threedecades ;
threedecades= (yearlyBR * 30) + population ;

cout<<" population in three decades will be "<<threedecades ;
}