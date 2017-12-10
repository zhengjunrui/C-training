#include<stdio.h>
#include<stdlib.h>
void main()
{
	unsigned char z[32]={0x82,0x03,0xBB,0xDF,0x82,0xDF,0xBA,0x01,0x83,0xAF,0xB7,0xAD,0xAB,0x6D,0x9A,0xF1,
0xE0,0x0F,0xEF,0xEF,0xE0,0x0F,0xEF,0xEF,0xE0,0x0F,0xFF,0xFF,0x00,0x01,0xFF,0xFF};
  int k;
  printf("请输入放大倍数k（原始大小16*16），当输入k为0时清屏\nk=");
  while(scanf("%d",&k)!=EOF)
  {
    getchar();
	if(k==0)
	{
	  system("CLS");
	  printf("请输入放大倍数k（原始大小16*16），当输入k为0时清屏\nk=");
	}
	else
	{
	  unsigned char i,j;
	  int a,b,c;
      unsigned char m[8]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
      for(i = 0;i<32;i = i+2)
	  {
        for(a = 0;a<k;a++)
		{
	      for(j = 0;j<8;j++)
		  {
	        for(b = 0;b<k;b++)
			{
		      if((z[i]&m[j])<1)
		      printf("暨");
		      else
		      printf("  ");
			}
		  }
	    for(j = 0;j<8;j++)
		{
	      for(c = 0;c<k;c++)
		  {
		    if((z[i+1]&m[j])<1)
		    printf("暨");
		    else
		    printf("  ");
		  }  
		}
	    printf("\n");
		}
	}
	  printf("请输入放大倍数k（原始大小16*16），当输入k为0时清屏\nk=");
	}

  }

}
