#include<iostream>
using namespace std;
int main()
{
    char light;
    cout<<"Input color of light (R=red, Y=yellow, G=green): ";
    cin>>a;
    switch (light)
    {
        case 'R':
        cout<<"Stop";
        break;
        case 'Y':
        cout<<"Slow down";
        break;
        case 'G':
        cout<<"Go";
        break;
        default:
        cout<<"Invalid option";
        break;
    }
}
