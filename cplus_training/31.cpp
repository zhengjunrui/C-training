#include<stdio.h>
 
 main(){
 	char a,b;
 	printf("����һ����ĸ��");
	scanf("%c",&a);
	getchar();
	switch(a){
		case 'm':
			printf("Monday\n");
			break;
		case 't':
			printf("������һ����ĸ��");
			scanf("%c",&b);
			if(b=='u'){
				 printf("Tuesday\n");
				 break; 
			}
			if(b=='h'){
				printf("Thursday\n");;
				break;
			}
		case 'w':
			printf("Wednesday\n");
			break;
		case 'f':
			printf("Friday\n");
			break;
		case 's':
			printf("������һ����ĸ��");
			scanf("%c",&b);
			if(b=='a'){
				printf("Saturday\n");
				break;
			}
			if(b=='u'){
				printf("Sunday\n");
				break;
			}

		default:
			printf("error\n");
			break;
			
	}
	
 }
