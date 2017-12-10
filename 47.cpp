/*#include<stdio.h>
#define add(int a,int b) {int c;c=a+b;return c;}

main(){
	int add();
	int a=1;
	int b=3,c;
	c = add(a,b);
	printf("%d",c);
}*/

#include<stdio.h>
#define exchange(a,b) { int t;t=a;a=b;b=t;}//注意放在一行里
int main()
{
    int x=10;
    int y=20;
    printf("x=%d; y=%d\n",x,y);
    exchange(x,y);
    printf("x=%d; y=%d\n",x,y);
    return 0;
}
