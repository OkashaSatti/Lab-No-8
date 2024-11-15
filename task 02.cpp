#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    char opper;
    cout<<"Input two numbers: ";
    cin>>num1>>num2;
    cout<<"Input operator (+ - * /): ";
    cin>>opper;
    switch (opper)
    {
    case '+' :
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
    break;
    case '-' :
    cout<<num1<<"-"<<num2<<"="<<num1-num2;
    break;
    case '*' :
    cout<<num1<<"*"<<num2<<"="<<num1*num2;
    break;
    case '/' :
    cout<<num1<<"/"<<num2<<"="<<num1/num2;
    break;
    default:
    cout<<"Invalid Operator";
    break;
    }
}
