//C++ 查看argv存储参数值及对应序号  
#include <iostream>  
using namespace std;  
int main(int argc,char *argv[])  
{  
   /* cout<<"参数个数="<<argc<<endl;  
    for(int i=0; i<argc; i++)  
    {  
        cout<<"参数序号="<<i<<" ";  
        cout<<"参数值="<<argv[i]<<endl;       
    }  */ 
    int a,b,c;
    a=8;b=4;
	if(*argv[1]=='+'){
		c = a+b;
		printf("和，值为%d\n",c);
	}
	if(*argv[1]=='-'){
		c = a-b;
		printf("差，值为%d\n",c);
	}
	if(*argv[1]=='*'){
		c = a+b;
		printf("乘，值为%d\n",c);
	}
	if(*argv[1]=='/'){
		c = a+b;
		printf("除，值为%d\n",c);
	}
    system("PAUSE");  
    return 0;  
}//</strong>  
