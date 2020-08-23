#include <stdlib.h>
#include <stdio.h>

struct Student{
int age;
int link;
};

int main(){
int studAge;
int i;

struct Student students[4];

	for(i=0;i<3;i++){
		printf("\n\n what is student %d's age: ",i);
		scanf("%d",&studAge);
		students[i].age= studAge;
		//mistake #1 students[i].link= &students[i+1];
		students[i].link = i+1;
	}

printf("\n\n what is student 3's age: ");
scanf("%d",&studAge);
students[3].age= studAge;
students[3].link= -1;

return(0);
}
