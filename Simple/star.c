#include <stdio.h>
#include "star.h"

int main(){
	int selection;

	while(true){
		printf("c - create a new repository\n");
		printf("a - add a file to repository\n");
		printf("d - delete a file\n");
		printf("t - trash a file\n");
		printf("l - list directory\n");
		printf("g - get a copy of the file (don't remove)\n");
		printf("q - Exit\n");
		scanf("%d", &choice);

		switch(selection){
			case 'c': createRepository(); break; 
			case 'a': addFile(); break;
			case 'd': deleteFile(); break;
			case 't': trashFile(); break;
			case 'l': listDirectory(); break;
			case 'g': copyFile(); break;
			case 'q': exit(0); break;		
			default: printf("Not a valid choice\n");

		}
	}
}