#include<iostream>
using namespace std;
int main()
{
         double purchase;

    cout<<"the purchase of the product:";
    cin>>purchase;

    if(purchase> 30000) {

     cout<<"she will receive a 10% discount"<<endl;

    }
    if(purchase<30000){

    cout<<"she will receive a 2% discount"<<endl;

    }


    return 0;
}
