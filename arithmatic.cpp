#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;


    int sum = n1 + n2;
    cout<<"The summation is: "<<sum;
    cout<<endl;

    int sub = n1 - n2;
    cout<<"The substruction is: "<<sub;
    cout<<endl;

    int mul = n1*n2;
    cout<<"Multiplication is: "<<mul;
    cout<<endl;

    double div = (double)n1 / n2;
    cout<<"Division is: "<<div;
    cout<<endl;

    int mod = n1 % n2;
    cout<<"Modulus is: "<<mod;
    cout<<endl;

    return 0;
}
