#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);    //ȡrawtime��1970.1.1��0ʱ0��0�뵽���ھ���������
    timeinfo = localtime(&rawtime);    //ȡ����ʱ��
    cout<<"the time is "<<asctime(timeinfo)<<endl;    //ת����ascii���ʽ
    return 0;
}