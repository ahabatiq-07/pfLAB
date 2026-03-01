#include<iostream>
using namespace std;
main(){

int imposter;
float player;

cout<<" Enter Imposter Count: ";
cin>>imposter;

cout<<" Enter Player Count: ";
cin>>player;

int chance;

chance=(imposter/player) * 100 ;
cout<<"Chance of being an imposter: "<<chance<<"%";
}