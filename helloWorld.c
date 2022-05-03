#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void helloWorld(){
	printf("Hello world!\n");
}

int main (int argc,char* args[]){
	if(!strcmp(args[1],"helloWorld"))
		helloWorld();
	else
		printf("Comando invalido. El unico comando disponible  es helloWorld");
	return 0;
}