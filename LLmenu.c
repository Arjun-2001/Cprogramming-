#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
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
	int size = 5;
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
 
 int linkSet = 1;
//PRINTING MENU
	  printf("\nselect opt 1,2,3,4\n\n");
     printf("OPTION 1: ADD\n");
     printf("OPTION 2: DELETE\n");
     printf("OPTION 3: RESIZE\n");
     printf("OPTION 4: PRINT\n");
	  printf("OPTION 5: EXIT\n");
	  printf("current size is :%d\n",sizeCur);
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
		if(sizeCur<size){
			sizeCur++;
		}
			system("clear");
	}else{

//SECOND PERSION ADDING TO LIST AT SECOND POSTION ONWARDS
		printf("\n**AGE of PERSON?: ");
		scanf("%d",&age);
		 if(size==sizeCur){
  	   	 printf("List full");
  		 }
		for(i=0;i<size;i++){
			if(list[i].valid == FALSE){
				list[i].age = age;
				list[i].valid = TRUE;
				if(sizeCur<size){
					sizeCur++;
				}
				break;
			}
		}	
			if(sizeCur>=0){
				for(i=0;i<sizeCur;i++){
					list[i].link = i+1;
					list[sizeCur-1].link = -1;
			}
				}
	}
}
system("clear");

//DELETE MENU OPTION
if(option == 2){
//IF LIST EMPTY PRINT ERROR MSG	
//	if(sizeCur == 0){
//		system("clear");
//		printf("\nlist empty\n");
//	}
printf("select element");
scanf("%d",&delete);

//IF LIST HAS 1 ELEMENT RESET ALL VALUES AND RESET SIZECUR AND STARTPOS TO 0
	if(sizeCur == 1||delete == 1){
		list[0].age = -1;
		startPos = delete;
		list[0].valid = FALSE;
		for(i=startPos;i<sizeCur;i++){
			list[i].link = linkSet++;
			list[sizeCur-1].link = -1;
		}
	}

//IF LIST HAS MORE THAN ONE ELEMENT AND MIDDLE IS BEING DELETED
	if(delete == size){
		list[size-2].link = -1;
		list[size-1].age= -1;
		list[size-1].valid= FALSE;
		list[size-1].link= -1;
	}

	if(delete>1 && delete<size){
		list[delete-1].valid= FALSE;
		list[delete-2].link = list[delete-1].link;
		list[delete-1].link = -1;
		for(i=startPos;i<sizeCur;i++){
			if(list[i].valid==TRUE){
				list[i].link= i+1;
			}
		}
		list[sizeCur-1].link=-1;
	}
//
}

//PRINT MENU OPTION
// LOOP CHECKS FOR TRUE VALIDS AND PRINTS THOSE VALUES
if(option == 4){
	for(i=0;i<sizeCur;i++){
		if(list[i].valid == TRUE){
  				printf("|AGE:%d |LINK:%d |VALID:%d |\n",list[i].age,list[i].link, list[i].valid);
		}
	}
}

//CLOSE THE WHILE LOOP
}

//END OF PROGRAM 
return(0);
}
		


