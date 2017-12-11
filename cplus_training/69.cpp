#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	printf("input the number of people who participate the game\n");
	cin>>n;
	int j,*p,m,k,i,num[100];
	p=num;
	for(j=0;j<n;j++){
		*(p+j) = j+1;
	}
	i=0;
	k=0;
	m=0;
	while(m<n-1){
		if(*(p+i)!=0){
			k++;
		}
		if(k==3){
			k=0;		//¼ÇµÃÇåÁã 
			*(p+i)=0;
			m++;
		}
		i++;
		if(i==n){
			i=0;
		}
	}
	for(j=0;j<n;j++){
		if(num[j]!=0){
			cout<<"the remnant person is "<<num[j]<<endl;
		}
	}
	return 0;
}
