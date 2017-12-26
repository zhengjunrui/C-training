#include<iostream>
using namespace std;

int main()
{
    int num,a,b,c,d,new_num;
    cout<<"input a number(siweishu)\n";
    cin>>num;
    if(num>=1000&&num<=9999)
    {
        a = (num/1000+5)%10;
        num = num%1000;
        b = (num/100+5)%10;
        num = num%100;
        c = (num/10+5)%10;
        d = (num%10+5)%10;
        new_num = d*1000+c*100+b*10+a;
        cout<<new_num<<endl;
    }
    return 0;
}