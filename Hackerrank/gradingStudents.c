#include<stdio.h>
#include<stdlib.h>


/*   GRADING STUDENTS PROBLEM 
Sam is a professor at the university and likes to round each student's grades according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade  up to the next multiple of 5.
If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
*/


int* gradingStudents(int *grades, int size){
	for(int i=0;i<size;i++){
		if(grades[i] % 5 > 2 && grades[i] >= 38)
			grades[i] += (5 - (grades[i] % 5));
	}
	return grades;
}


int main(){
	int i,n;
	printf("Enter number of students : ");
	scanf("%d",&n);
	int *marks = (int*)calloc(n,sizeof(int));
	printf("Enter grades of students : ");
	for(i=0;i<n;i++)
		scanf("%d",&marks[i]);

	int* roundedMarks = gradingStudents(marks,n);
	printf("Marks of students after grading : ");

	for(i=0;i<n;i++)
		printf("%d ",roundedMarks[i]);
	printf("\n");
}
