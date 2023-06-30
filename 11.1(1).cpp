#include<stdio.h>

int main(){
	int n;
	printf("Enter the Size of Array :");
	scanf("%d",&n);
	int a[n];
	
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	int *ptr;
    printf("The square of Array Is:\n");
	for(i=0;i<n;i++){
		*ptr=a[i]*a[i];
		printf("%d\n",*ptr);
	}
	return 0;
}
