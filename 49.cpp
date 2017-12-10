#include<stdio.h> 
#include<string.h>
#define MAX
#define MAXIMUM(a,b) a>b?a:b		//define的MAXIMIUM不用定义数据类型（int等） ，定义的时候直接不用大括号 
#define MINIMUM(a,b) a>b?b:a

int main(int argc,char* argv[]){
	//if(argv[1]=="test"){
		int x=20;
		int y=10;
		#ifdef MAX
		printf("更大的数字是%d\n",MAXIMUM(x,y));
		#else
		printf("更小的数字是%d\n",MINIMUM(x,y));
		#endif
		#ifndef MIN
		printf("没定义MIN\n");
		#else
		printf("已经定义了MIN\n");
		#endif 
		#define MIN
		#ifdef MIN
		printf("已经定义了MIN\n");
		printf("更小的数字是%d\n",MINIMUM(x,y));
		#else
		printf("没定义MIN\n");
		#endif
		return 0;		
	//}
}
 

