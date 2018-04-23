#include <stdio.h>
#include "functions.h"

int main(){
	int choice;
	Disk disk = NULL;

	while(true){
		printf("c - create a new repository\n");
		printf("a - add a file to repository\n");
		printf("d - delete a file\n");
		printf("t - trash a file\n");
		printf("l - list directory\n");
		printf("g - get a copy of the file (don't remove)\n");
		printf("9. Exit\n");
		scanf("%d", &choice);

		switch(choice){
			case 'c':
				if(diskIsNull(disk)){
				disk = allocateDisk();
				}else{
					freeDisk(disk);
					disk = allocateDisk();
				} 
				break;
			case 'a':
				if(diskIsNull(disk)){
					printf("Please allocate a disk\n");
				}else{
					formatDisk(disk);
				} 
				break;
			case 'd':
				if(diskIsNull(disk)){
					printf("Please allocate a disk\n");
				}else{
					addFile(disk);
				} 
				break;
			case 't':
				if (diskIsNull(disk))
				{
					printf("Please allocate a disk\n");
				}else{
					extractFile(disk);
				}
				break;
			case 'l':
				if(diskIsNull(disk)){
					printf("Please allocate a disk\n");
				}else{
					printDiskInformation(disk);
				} 
				break;
			case 'g':
				if(diskIsNull(disk)){
					printf("Please allocate a disk\n");
				}else{
					printDiskToFile(disk);
				} 
				break;
			case 'q':
				if(diskIsNull(disk)){
					printf("Please allocate a disk\n");
				}else{
					renameFile(disk);
				} 
				break;
		
			default:
				printf("Not a valid choice\n");

		}
	}
}