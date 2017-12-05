#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i;
    i = 30;
    int &r = i;
    i = 40;
    int x;
    x = 10;
    int y = x;
    x = 20;
    cout<<"the value of i is "<< i << "\n";
    cout<<"the value of r is "<< r << "\n";
    cout<<"the address of i is "<< &i << "\n";
    cout<<"the address of r is "<< &r << "\n";
    cout<<"the value of x is "<< x << "\n";
    cout<<"the value of y is "<< y << "\n";
    cout<<"the address of x is "<< &x << "\n";
    cout<<"the address of y is "<< &y << "\n";
    return 0;
}