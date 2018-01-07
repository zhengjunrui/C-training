#include<iostream>
using namespace std;

typedef struct student
{
    char name[20];
    int num;
    float Chinese;
    float English;
    float Math;
    float mean;
}stu;

int main()
{
    stu abc;
    cout<<"name\n";
    cin>>abc.name;
    cout<<"number\n";
    cin>>abc.num;
    cout<<"Chinese\n";
    cin>>abc.Chinese;
    cout<<"English\n";
    cin>>abc.English;
    cout<<"Math\n";
    cin>>abc.Math;
    abc.mean = (abc.Chinese+abc.English+abc.Math)/3;
    cout<<abc.name<<" "<<abc.num<<" "<<abc.Chinese<<" "<<abc.English<<" "<<abc.Math<<" "<<abc.mean<<endl;
    return 0;
}