#include<iostream>
using namespace std;
int main()
{
      int grosssalary;
    double tax;
    double netsalary;

    cout<<"input the grosssalary:";
    cin>>grosssalary;

    if(grosssalary<=10000) {
        netsalary = grosssalary;

    }
  if(grosssalary >10000 || grosssalary<=30000) {
      netsalary = 0.95*grosssalary;
  }
if (grosssalary> 30000 || grosssalary<=50000) {
    netsalary = 0.9*grosssalary;
}
 if(grosssalary>50000 || grosssalary<=70000) {
     netsalary =0.87*grosssalary;
 }
if(grosssalary>70000) {
    netsalary = 0.85*grosssalary;
}
    cout<<"the net salary is "<<netsalary;
    return 0;
}
