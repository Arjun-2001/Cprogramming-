#include <stdlib.h>
#include <stdio.h>
#define undetermined 10
#define stdNum 3
//i need help with resize,and resetting links if element is deleted  
struct person{
   int age;
   int link;
};
  
int main(){

	int option;
	int size = 3;
	int i;
	int valid=0;
	int first;
	int delete;
   
	struct person list[size];
    
	 while(option!=5){
     
	  printf("\nselect opt 1,2,3,4\n\n");
     printf("OPTION 1: ADD\n");
     printf("OPTION 2: DELETE\n");
     printf("OPTION 3: RESIZE\n");
     printf("OPTION 4: PRINT\n");
	  printf("OPTION 5: EXIT\n");
     scanf("%d",&option);

if(option == 1){
	printf("PERSON#: ");
	scanf("%d",&first);
	
	if(first==1){
		printf("\nAGE of PERSON?: ");
		scanf("%d",&list[i].age);
		list[i].link=-1;
		valid=1;
	}else{
		printf("\nAGE of PERSON?: ");
		scanf("%d",&list[i].age);
		list[i].link = i+1;
		valid=1;
	}
}

if(option == 2){
	printf("\nPERSON# DELETE: ");
	scanf("%d",&delete);
	list[delete-1].age = -1;;
}

if(option == 3){
	printf("NEW SIZE: ");
//	scanf("%d",&size);
}

	if(option == 4){
		if(valid == 1){
			for(i=0;i<first;i++){
				if(list[i].age!=-1){
  		     	printf("person = %d\n",list[i].age);
   		  	printf("link = %d\n",list[i].link);
				}
			}  
	  }else{
	  		  printf("no List to print");
	  }
	}	

}
	return(0);
}
