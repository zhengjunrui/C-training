//C++ �鿴argv�洢����ֵ����Ӧ���  
#include <iostream>  
using namespace std;  
int main(int argc,char *argv[])  
{  
   /* cout<<"��������="<<argc<<endl;  
    for(int i=0; i<argc; i++)  
    {  
        cout<<"�������="<<i<<" ";  
        cout<<"����ֵ="<<argv[i]<<endl;       
    }  */ 
    int a,b,c;
    a=8;b=4;
	if(*argv[1]=='+'){
		c = a+b;
		printf("�ͣ�ֵΪ%d\n",c);
	}
	if(*argv[1]=='-'){
		c = a-b;
		printf("�ֵΪ%d\n",c);
	}
	if(*argv[1]=='*'){
		c = a+b;
		printf("�ˣ�ֵΪ%d\n",c);
	}
	if(*argv[1]=='/'){
		c = a+b;
		printf("����ֵΪ%d\n",c);
	}
    system("PAUSE");  
    return 0;  
}//</strong>  
