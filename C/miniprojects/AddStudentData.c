// Program: add Student data.

#include <stdio.h>

struct student
{
    char name[30];
    char course[50];
    char rollno[20];
};

int main()
{
    struct student s;
    FILE *fdata;

    printf("Enter name :");
    scanf(" %[^\n]", s.name);

    printf("Course :");
    scanf(" %[^\n]", s.course);

    printf("Roll no. :");
    scanf("%s", s.rollno);

    fdata = fopen("Student.txt", "w");
    fprintf(fdata, "-------------------------------------\n");
    fprintf(fdata, "Name:\tCourse:\tRollno.:\n");
    fprintf(fdata, "-------------------------------------\n");

    fprintf(fdata, "%s\t%s\t%s\n", s.name, s.course, s.rollno);

    fclose(fdata);
    printf("Data added successfully!");

    return 0;
}