#include<stdio.h> 
#include<string.h>
#define MAX
#define MAXIMUM(a,b) a>b?a:b		//define��MAXIMIUM���ö����������ͣ�int�ȣ� �������ʱ��ֱ�Ӳ��ô����� 
#define MINIMUM(a,b) a>b?b:a

int main(int argc,char* argv[]){
	//if(argv[1]=="test"){
		int x=20;
		int y=10;
		#ifdef MAX
		printf("�����������%d\n",MAXIMUM(x,y));
		#else
		printf("��С��������%d\n",MINIMUM(x,y));
		#endif
		#ifndef MIN
		printf("û����MIN\n");
		#else
		printf("�Ѿ�������MIN\n");
		#endif 
		#define MIN
		#ifdef MIN
		printf("�Ѿ�������MIN\n");
		printf("��С��������%d\n",MINIMUM(x,y));
		#else
		printf("û����MIN\n");
		#endif
		return 0;		
	//}
}
 

