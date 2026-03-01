#include<iostream>
using namespace std;
main(){

int imposters, players;
float chance;

cout<<"enter imposters (imposter limit is 3) : " ;
cin>> imposters;

cout<<"enter players (players limit is 10) : ";
cin>> players;

chance= 100 * (imposters/players);
cout<<"chance = "<<chance<<"%";
}