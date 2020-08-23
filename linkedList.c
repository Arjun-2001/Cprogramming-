#include <stdlib.h>
#include <stdio.h>

struct student{
int age;
float hieght;
int weight;
struct student *next;
};

void printStruct(struct student*ptr);

int main(){


struct student tom;
struct student bob;
struct student rob;

struct student *head = &tom;

tom.age = 17;
tom.hieght = 6.2;
tom.weight = 200;
tom.next = &bob;

bob.age = 18;
bob.hieght = 6.0;
bob.weight = 190;
bob.next = &rob;


rob.age = 18;
rob.weight = 235;
rob.hieght = 6.3;
rob.next = NULL;

printStruct(head);
}

void printStruct(struct student*ptr){
	printf("\n");
	while(ptr != NULL){
		printf("%4d ",ptr->age);
		printf("%d ",ptr->weight);
		printf("%f\n",ptr->hieght);
		ptr = ptr->next;
	}
}

