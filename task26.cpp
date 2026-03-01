#include<iostream>
using namespace std;
main()
{
  int anynumber;
 cout<<" Enter a 4-digit number :";
cin>>anynumber;
int firstdigit;
firstdigit = anynumber % 10 ;
int removefirst;
removefirst = anynumber / 10 ;
int secdigit;
secdigit = removefirst % 10 ;
int removesec;
removesec = removefirst / 10 ;
int thirddigit;
thirddigit = removesec % 10 ;
int removethird;
removethird = removesec / 10 ;
int sum;
sum = firstdigit + secdigit + thirddigit + removethird ;
cout<<" sum of digits = "<<sum;
}