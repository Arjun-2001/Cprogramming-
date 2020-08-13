#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SEL 10 

void printArray(int numARR[],int size);
void initArray(int numARR[],int size);
void inputArray(FILE* fp, int numARR[]);

int main(){
		  //errors:scanf wont stop scanning, readin in int list occurs incorrectly, bin search method could not use or test but i wrote my attempt in comments 

		  //i cannot get this program to work


		  //using time.h attempt to count runtime 
		  //		clock_t start, end;
		  //   	double cpu_time_used;
		  //		start = clock();

		  //declare array and var
		  int numARR[SEL];
		  int numCurrent;
		  int i,x;
		  int user;

			initArray(numARR,SEL);
         printArray(numARR,SEL);

		  //ask user for search
		  printf("\n select a number to search:");
		  scanf("%d",&user);
		  //printf("you chose %d\n",user);

			FILE* fp= NULL;
			fp =fopen("numbers.txt","r");
			inputArray(fp, numARR);
			printArray(numARR,SEL);

}
/*
		  //open file(use w to make file switch to r for use
		  FILE* fp = NULL;
		  fp = fopen("numbers.txt","r");

		  if (fp == NULL){
					 printf("\n no file found \n");
					 return(0);
		  }else{
					 //search until end of file
					 while(numCurrent != EOF){
								fscanf(fp, "%d", &numARR[x]);	

								//checking each number in the array sequentially			
								if(numARR[x]== user){
										  printf("the program found a match");
										  return(0);
								}
					 }
		  }
}

//if search doesnt work end program
printf("the program could not find a  match");
fclose(fp);
//	end = clock();
return(0);
}





i tried my best but could not incooperate this method this was my method

int middle;
int numCurrent= 0;
middle=SEL/2;

if(user>=middle){
for(numCurrent=0; numCurrent != EOF;numCurrent++){
if(numARR[x]== user){
printf("number has been found");
}else{
numCurrent++;
}

if(user<=middle){
for(numCurrent=0; numCurrent != EOF;numCurrent++){
if(numARR[x]== user){
printf("number has been found");
}else{
numCurrent--;
}
}


 */

void printArray(int numARR[],int size){
	int i;
	for(i=0;i < size;i++){
		printf("\n%d\n",numARR[i]);
	}
}

void initArray(int numARR[],int size){
	int i;
	for(i=0;i < size; i++){
		numARR[i]= 0;
	}
}

void inputArray(FILE* fp, int numARR[]){
int i = 0;

while(fscanf(fp,"%d",&numARR[i])!= EOF){
i++;
}
}

