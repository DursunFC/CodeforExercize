#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	char input='+';
	time_t t;
	srand((unsigned)time(&t));
	while(1){
	printf("%c",input);
	scanf("%c",&input);
	if(input=='+')
		printf("%d\n",(rand()%6)+1);
	else 
		break;

	}

}
