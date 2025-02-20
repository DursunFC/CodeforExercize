#include<stdio.h>
void main(){
	int *pntr;
	int a[5]={1,2,3,4,5};
	pntr=&a;
	printf("%d",*(pntr+3));
}
