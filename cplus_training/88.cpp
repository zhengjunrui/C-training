#include<iostream>
using namespace std;

int main()
{
    int num,i,j;
    for(i=0;i<7;i++)
    {
        cout<<"input a number(below 50)\n";
        cin>>num;
        if(num<=50)
        {
            for(j=0;j<num;j++)
            {
                cout<<"*";
            }
        cout<<"\n";
        }
        else
        {
            i--;
            cout<<"input a number PLEASE(BeLow 50)\n";
        }
    }
    return 0;
}