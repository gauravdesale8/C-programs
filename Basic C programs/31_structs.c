/* Structs */
#include<stdio.h>
#include<stdlib.h>
#include<string.h> /* <string.h> is imp for running string */ 
struct Student
{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main()
{
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy( student1.name, "Jim"); /* strcpy is reffered as "stringcopy" */
	strcpy( student1.major, "Buisness");

	struct Student student2;
	student2.age=21;
	student2.gpa=3.0;
	strcpy( student2.name, "Mike");
	strcpy( student2.major, "Arts");
	
	printf("%s \n", student1.name);
	printf("%d \n",student1.age);
	printf("%s \n", student2.name);
	printf("%d", student2.age);
	return 0;
}
