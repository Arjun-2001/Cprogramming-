#include <stdlib.h>
#include <stdio.h>
#define undetermined 10
#define stdNum 3
#define TRUE 1
#define FALSE 0

//CREATING STRUCTURE 
struct person{
   int age;
   int link;
	int valid;
};
//PROGRAM STARTS
int main(){
//DECLARING & INITIALIZED CERTAIN VARIABLES
	int option=TRUE;
	int size = 3;
	int i;
	int delete;
   int sizeCur = 0;
	int startPos;
	int age;
//CREATING AN ARRAY OF TYPE STRUCT
	struct person list[size];

//SETTING ALL LINKS TO -1 AND VALIDS TO FALSE
	for(i=0;i<size;i++){
		list[i].link = -1;
		list[i].valid = FALSE;
	}
//WHOLE PROGROM ON LOOP UNTIL MENU OPTION 5 IS TYPED
	 while(option!=5){
//PRINTING MENU
	  printf("\nselect opt 1,2,3,4\n\n");
     printf("OPTION 1: ADD\n");
     printf("OPTION 2: DELETE\n");
     printf("OPTION 3: RESIZE\n");
     printf("OPTION 4: PRINT\n");
	  printf("OPTION 5: EXIT\n");
     scanf("%d",&option);
//ADD TO LIST MENU OPTION
if(option == 1){
//FIRST PERSON ADDING TO LIST AT FIRST POSITION
	if(sizeCur==0){
		printf("\nAGE of PERSON?: ");
		scanf("%d",&list[0].age);
		list[0].link = -1;
		list[0].valid = TRUE;
		startPos = 0;
		sizeCur++;
		printf("current size is :%d",sizeCur);

	}else{
//SECOND PERSION ADDING TO LIST AT SECOND POSTION ONWARDS
		printf("\n**AGE of PERSON?: ");
		scanf("%d",&age);
			for(i=0;i<size;i++){
				if(list[i].valid == FALSE){
					list[i].age = age;
					list[i].valid = TRUE;
					sizeCur++;
					break;
				}
			}	
	}
//RESETTING LINKS AFTER EVERY ADD ACOUNTING FOR VARIABLE SIZE
	if(sizeCur>1){
		for(i=0;i<sizeCur;i++){
			list[i].link = i+1;
			list[sizeCur-1].link = -1;
		}
	}
}
//DELETE MENU OPTION
if(option == 2){
	printf("\nPERSON# DELETE: ");
	scanf("%d",&delete);
//IF LIST EMPTY PRINT ERROR MSG	
	if(sizeCur == 0){
		printf("\nlist empty\n");
	}
	//IF LIST HAS 1 ELEMENT RESET ALL VALUES AND RESET SIZECUR AND STARTPOS TO 0
	if(sizeCur == 1){
		list[0].age = -1;
		startPos = 0;
		sizeCur = 0;
			for(i=0;i<size;i++){
				list[i].valid = FALSE;
			}
	}
}
//RESIZE MENU OPTION
if(option == 3){
	printf("NEW SIZE: ");
	scanf("%d",&size);
}
//PRINT MENU OPTION
// LOOP CHECKS FOR TRUE VALIDS AND PRINTS THOSE VALUES
if(option == 4){
	for(i=0;i<sizeCur;i++){
		if(list[i].valid == TRUE && list[i].age!=0){
  			printf("person = %d\n",list[i].age);
   		printf("link = %d\n",list[i].link);
			printf("valid = %d\n",list[i].valid);
		}
  	}
}
//CLOSE THE WHILE LOOP
}
//END OF PROGRAM 
return(0);
}
		


