#include<stdio.h>
#include<stdlib.h>
void main()
{
	unsigned char z[32]={0x00,0x00,0x7D,0xFC,0x44,0x20,0x7D,0x20,0x45,0xFE,0x7C,0x50,0x48,0x52,0x54,0x92,
                             0x65,0x0E,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x00,0x00,0xFF,0xFE};
	unsigned char w[8]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
	unsigned char i,j;
	unsigned int k,n,m;
	printf("请输入放大的倍数（原始汉字大小为16×16）当输入k为0时清屏\nk=");
	while(scanf("%d",&k)!=EOF)
	{
		getchar();
		if(k==0)
		{
			system("CLS");
			printf("请输入放大的倍数（原始汉字大小为16×16）当输入k为0时清屏\nk=");
		}
		else
		{
			for(i=0;i<32;i=i+2)
			{
				for(m=0;m<k;m++)
				{
					for(j=0;j<8;j++)
					{	
						for(n=0;n<k;n++)
						{
							if((z[i]&w[j])>0)
							printf("+");
							else
							printf(" ");
						}
					}
					for(j=0;j<8;j++)
					{	
						for(n=0;n<k;n++)
						{
							if((z[i+1]&w[j])>0)
							printf("+");
							else
							printf(" ");
						}
					}
					printf("\n");
				}
			}
		printf("请输入放大的倍数（原始汉字大小为16×16）当输入k为0时清屏\nk=");
		}
	}
}
