#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char* ptr = NULL;
	ptr = (char*)malloc(sizeof(char)*15);
	printf("the address given by malloc is %p\n",ptr);
	

//	ptr = "Hello world!!";
	
	strcpy(ptr, "Hello World!!");
	printf("%s\n",ptr);

	free(ptr);
	return 0;
}
