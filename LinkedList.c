#include <stdio.h>
struct student {
	int age;
	char* name;
	int ID;
	struct student *address;
};
struct student Input(int age, char* name, int ID, struct student *address);
void Prnt(struct student record );

struct student Input(int age, char* name, int ID, struct student *address){
	struct student record;
	record.age = age;
	record.name = name;
	record.ID = ID;
	record.address = address;
	return record;
}

void Prnt(struct student record){
	printf("age : %d \n", record.age);
	printf("name: %s \n", record.name);
	printf("ID: %d \n", record.ID);
}

int main() { 
	//--- create a termial point
	struct student  head, tail;
	//------
	tail = Input(20, "Naveen", 5675, NULL);
	printf("address of 1st block %p \n", &tail);
	tail = Input(20, "cindy", 5695, &tail);
	printf("address of 2nd block %p \n", &tail);
	//Prnt(student1);
	//Prnt(student2);
return 0;
}


