#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SEL 10 

void printArray(int numARR[],int size);
void initArray(int numARR[],int size);
void inputArray(FILE* fp, int numARR[]);
void checkNum(int user, int numARR[],int size);
int checkNumBin(int user, int numARR[],int size);

int main(){

		  //declare array and var
		  int numARR[SEL];
		  int numCurrent;
		  int i,x;
		  int user;
			clock_t start;
			clock_t end;
			float timeElapsed;

			start = clock();
			initArray(numARR,SEL);
        // printArray(numARR,SEL);
		  //ask user for search
		  printf("\n select a number to search:");
		  scanf("%d",&user);
		  //printf("you chose %d\n",user);

			FILE* fp= NULL;
			fp =fopen("numbers.txt","r");
			inputArray(fp, numARR);
			//	printArray(numARR,SEL);
			checkNum(user,numARR,SEL);
			checkNumBin(user,numARR,SEL);
			
			end = clock();
			timeElapsed= (end - start)/CLOCKS_PER_SEC;
			printf("\n##TIME BENCHMARK:%f## \n",timeElapsed);
}

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

void checkNum(int user, int numARR[],int size){
int i=0;
int state = 0;
for(i=0;i < size;i++){
	if(user == numARR[i]){
		printf("\nthe number you selected (%d) has been found",user);
		state=1;
		}
	}
	if(state==0){
	printf("\nnumber not found in file\n");
	}
}

int checkNumBin(int user, int numARR[],int size){
int high = size-1;
int low = 0;

	while(low<=high){
	int index = (high + low)/2;
		if(user == numARR[index]){
		printf("\nnumber (%d) has been found using binary search\n\n",user);
		return(1);
		}else{
				if(user<numARR[index]){
				high = index-1;
				}else{
						low = index+1;
				}
		}
	}
	printf("binary search for (%d) could not be found\n\n",user);
	return(0);
}

