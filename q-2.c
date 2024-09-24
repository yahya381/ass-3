#include<stdio.h>
main(){
	int num,count;
	printf("Enter the any number : ");
	scanf("%d",&num);
	
	while(num>0){
		num=num/=10;
		count++;
	}
	printf("%d\n",count);
}
