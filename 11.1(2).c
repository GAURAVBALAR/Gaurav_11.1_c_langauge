#include<stdio.h>
 
 void main(){
 	int a,b;
 	
 	printf("Enter the value of A:");
 	scanf("%d",&a);
 	printf("Enter thr value of B:");
 	scanf("%d",&b);
 	printf("\n");
 	
 	int *ptr1=&a;
 	int *ptr2=&b;
 	int *ptr3=0;
 	
 	printf("Before Swapping:\n");
 	printf("%d\n",a);
 	printf("%d\n\n",b);
 	ptr3=ptr1;
 	ptr1=ptr2;
 	printf("After Swapping:\n");
 	
 	printf("%d\n",*ptr1);
 	
 	printf("%d\n",*ptr3);
 }

