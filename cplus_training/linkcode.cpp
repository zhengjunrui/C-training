/*�ó�����3������������Ȼ�����*/
#include <stdio.h>
#include <stdlib.h>
typedef  int ElemType;
typedef struct node     /*������Ͷ���*/
{
	ElemType data;               /*������*/
   	struct node *next; /*nextΪָ����ָ��ý��ĺ��*/
}JD;
int main()
{
	int j;
	JD *p,*phead,*ptail;

	/*������1�����*/
 	p=(JD*)malloc(sizeof(JD));
	scanf("%d",&(p->data));
	ptail=p; /*�ڽ��������̵����ӹ�ϵʱ����Ҫ�ý��ĵ�ַ�����Ҫ�������ʱ������*/
        phead=p;/*��ͷָ��ָ���1�����*/

	/*������2�����*/
 	p=(JD*)malloc(sizeof(JD));
	scanf("%d",&(p->data));
	ptail->next=p; /*ǰ�潨���Ľ��ָ��ǰ���*/
	ptail=p;

	/*������3�����*/
 	p=(JD*)malloc(sizeof(JD));
	scanf("%d",&(p->data));
	ptail->next=p; /*ǰ�潨���Ľ��ָ��ǰ���*/
	ptail=p;
        p->next=NULL; /*��β���ָ����Ϊ��*/

	/*���*/
	 p=phead;
	 j=0;
	while(p!=NULL){						//�ú����ɵó���������,NULL���ڽ����ж� 
		printf("%d  ", p->data);
		p=p->next;
		j++;
	}
	printf("\nThe length of list is:%d\n",j);
	//printf("%d  ", ptail->data);
	return 0;
}

