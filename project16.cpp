#include <iostream>

using namespace std;

inline int product(int a,int b)
{
    return a*b;
}
float moneyRecieved(int currentMoney, float interest=1.04)
{
    return currentMoney * interest;
}

int main()
{
    //int a,b;
    int currentMoney = 100000;
    //cout<<"Enter the value of a and b ";
    //cin>>a>>b;
    //cout<<"the product of a and b is "<<product(a,b);
    cout<<"If you have "<<currentMoney<<" Rs in your bank account, you will recieve "<<moneyRecieved(currentMoney)<<" Rs after one year"<<endl;
    cout<<"For VIP : If you have "<<currentMoney<<" Rs in your bank account, you will recieve "<<moneyRecieved(currentMoney, 1.1)<<" Rs after one year";

    return 0;
}
