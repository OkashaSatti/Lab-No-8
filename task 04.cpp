#include<iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter your grade (A, B, C, D or F): ";
    cin>>grade;
    switch (grade)
    {
        case 'A':
        cout<<"Very good";
        break;
        case 'B':
        cout<<"Good";
        break;
        case 'C':
        cout<<"Satisfactory";
        break;
        case 'D':
        cout<<"Poor";
        break;
        case 'F':
        cout<<"Fail";
        break;
        default:
        cout<<"Invalid Grade";
        break;
    }
}
