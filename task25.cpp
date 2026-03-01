#include<iostream>
using namespace std;
main()
{
 string moviename ;
int adultticketprice;
int childticketprice;
int adultnosold;
int childnosold;
float percentcharity;
cout<<" Enter the movie name :";
cin>>moviename;
cout<<" Enter the adult ticket price :";
cin>>adultticketprice;
cout<<" Enter the child ticket price :";
cin>>childticketprice;
cout<<" Enter the Number of adult tickets sold :";
cin>>adultnosold;
cout<<" Enter the Number of child tickets sold :";
cin>>childnosold;
cout<<" Enter the percentage of the amount to be donated to charity :";
cin>>percentcharity;
int totalmoney;
totalmoney = (adultticketprice * adultnosold) + (childticketprice * childnosold) ;
cout<<" Total amount generated from ticket sales : $"<<totalmoney <<endl;
float charitymoney;
charitymoney = (percentcharity / 100 ) * totalmoney ;
cout<<" Donation to charity (percentcharity) : $"<<charitymoney <<endl;
float netprofit;
netprofit = totalmoney - charitymoney ;
cout<<" Remaining amount after charity : $"<<netprofit <<endl;
}