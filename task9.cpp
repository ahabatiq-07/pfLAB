#include<iostream>
using namespace std;
main(){
int MB, KB, bytes, total;
int MB1=1024;
int KB1=1024;
int bytes1=8;

cout<<"enter the size in megabytes(MB):";
cin>>MB;

total=MB *MB1 * KB1 * bytes1;

cout<<MB<<" MB"<<" is equivalent to "<< total<< " bits";
}