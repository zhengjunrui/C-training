#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
typedef struct Student
{
    char data;
    struct Student * next;
}stu;
//β�巨�½�����
stu * create()
{
    stu * head,*p1,*p2;
    char ch;
    head = NULL;
    p2 = NULL;
    printf("�����������ַ�����('#'��ʾ�������):\n");
    ch=getchar();
    while(ch!='#')
    {
        p1=(stu *)malloc(LEN);
        p1->data=ch;
        if(head == NULL)//���ж�������ǲ��ǵ�һ���ڵ�
        {
            head=p1;
        }
        else
        {
            p2->next=p1;//p2ʼ��ָ����������һ���ڵ�
        }
        p2=p1;
        ch=getchar();
    }
    p2->next=NULL;
    return head;
}
void show(stu *head)
{
    stu *p1;
    p1=head;
    while(p1!=NULL)
    {
        printf("%c",p1->data);
        p1=p1->next;
    }
}
void main()
{
    stu *head;
    head = create();
    show(head);
    getchar();
    getchar();
}