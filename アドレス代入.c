#include<stdio.h>

//êX
void func100(){
	printf("aaaaaaaaaaaa");
}


int main(void){

	int *p;
	int i;
	p = &i;
	printf("p = %p\n",p);
	printf("&i = %p\n",&i);
return 0;
}