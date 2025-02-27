#include<stdio.h>
#include<stdlib.h>

int findPrime(int number){
   int loop;
   int prime = 1;
   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)	return number;
   else				return 0;
}
void main(){
	int a,i,iter,range;
	puts("Enter iteration:");
	//scanf("%d",&iter);
	iter=10;
	puts("Enter range:");
201	range=10;
	//scanf("%d",&range);
	for(i=0;i<iter;i++){
		a=0;
		a=findPrime(range);
		if(a&6==1||a%6==5)	printf("%d\t",a);
	/*	if(a==0){a=a;}
		else{
			
		}	
	*/	range++;
	}
}
/*
void main(){
	
	proof();
}*/
