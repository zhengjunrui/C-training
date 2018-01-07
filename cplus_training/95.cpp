#include<iostream>
using namespace std;

struct aa
{
    float a;
    char* b;
}test;

int main()
{
    struct aa aaa;  //不能用test替代struct aa
    char string[] = "www.baidu.com";
    float zjr = 666;
    aaa.a = zjr;
    aaa.b = string;
    cout<<aaa.a<<"  "<<aaa.b<<endl;
    return 0;
}