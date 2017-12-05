#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    /*auto add = [](int a,int b)-> int {return a + b;};
    auto multiply = [](int a,int b) int {return a * b;};
    //int a=20;
    //int b = 3;
    int c = add(20,3);
    int d = multiply(20,3);
    cout<<c<<"\n";
    cout<<d<<"\n"<<endl;*/
    
    auto basicLambda = [] { cout << "Hello, world!" << endl; };

    // µ÷ÓÃ
    basicLambda();
    return 0;
}