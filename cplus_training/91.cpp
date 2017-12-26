#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);    //取rawtime，1970.1.1的0时0分0秒到现在经历的秒数
    timeinfo = localtime(&rawtime);    //取当地时间
    cout<<"the time is "<<asctime(timeinfo)<<endl;    //转换成ascii码格式
    return 0;
}