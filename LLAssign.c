#include <stdlib.h>
#include <stdio.h>
#define size 10
#define stdNum 3

struct Student{
 int age;
 int link;
 };

void printArr(int students[],int Lsize);

 int main(){
 int ageInit=0;
 int i,x;
 int pos;
 int posDel;
 char delSel='y';
 int age[3];

 struct Student students[size];
	
	printf("select starting position: ");
	scanf("%d",&pos);

	printf("what is the age of new student 1: ");
	scanf("%d",&age[0]);
	printf("what is the age of new student 2: ");
	scanf("%d",&age[1]);
	printf("what is the age of new student 3: ");
	scanf("%d",&age[2]);

    for(i=pos;i<size;i++){
       students[i].age= ageInit;
       students[i].link = i+1;
		 printf("student age = %d\n",students[i].age);
		 printf("link = %d\n",students[i].link);
    }
	 printf("\n\n");

	 //finding blank space and placing age
	 
  	for(i=pos;i<size;i++){
		if(students[i].age == 0 && students[i].link != -1){
			students[i].age = age[0];
			students[i].link = -1;
			break;
		}	
	}
	 for(i=pos;i<size;i++){
      if(students[i].age == 0){
        students[i].age = age[1];
		  students[i].link = -1;
		  break;
		}  
    } 
	 for(i=pos;i<size;i++){
    	if(students[i].age == 0){
  	     students[i].age = age[2];
		  students[i].link = -1;
        break;
      }
 	 }
	for(i=0;i<size;i++){
		printf("student age = %d\n",students[i].age);
		printf("link = %d\n",students[i].link);
	}

	printf("\nDelete Student?(y or n)\n");
	if(delSel == 'y'){
      printf("\nselect position to delete\n");
      scanf("%d",&posDel);
      students[posDel].age = 0;
      students[posDel].link = posDel+1;
			for(i=0;i<size;i++){
 				 printf("student age = %d\n",students[i].age);
       		printf("link = %d\n",students[i].link);
			}
}
//		if(delSel == 'n'){
//			return(0);
//		}
}

