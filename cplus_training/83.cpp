#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
    int N;
    cin>>N;
    int i,s=4;
    for(i=1;i<N;i++)
    {
        if(i==1)
        {
            s *= 7;
        }
        else
        {
            s *= 8;
        }
    }
    cout<<s<<endl;
    return 0;
}