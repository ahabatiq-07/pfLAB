#include<iostream>
using namespace std;
main(){
    int salary, advance, months;
    cout<<"Enter your salary: ";
    cin>>salary;
    advance= salary * 6 * 0.5 ;
    if(advance >= 50000) {  cout<<"You can buy Laptop"; }
    months = 50000 * 2 / salary;
    cout<<"Months required to buy laptop"<<months;
}