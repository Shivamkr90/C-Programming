// Program: Manage Student & Teacher data.

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    char rollNO[20];
};

struct Teacher
{
    char name[100];
    char subject[200];
};

int main()
{
    struct Student s[100];
    struct Teacher t[50];
    int scount = 0;
    int tcount = 0;
    char search[50];

    int choice;

    while (1)
    {
        printf("\n1. for Add Student");
        printf("\n2. for show Student");
        printf("\n3. for Search Student");
        printf("\n4. for Add Teacher");
        printf("\n5. for Show Teacher");
        printf("\n6. for search Teacher");
        printf("\n7. for Exit");

        printf("Enter choice :");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Enter Name : ");
            scanf(" %49[^\n]", s[scount].name);
            printf("Enter RollNO. : ");
            scanf("%19s", s[scount].rollNO);
            scount++;

            printf("Student added Successfully.\n");
            break;

        case 2:
            if (scount == 0)
            {
                printf("no student Record found's!\n");
            }
            else
            {
                printf("\n=====Student Records=====\n");

                printf("\nStudent information : \n");

                for (int i = 0; i < scount; i++)
                {
                    printf("\nStudent %d", i + 1);
                    printf("\nName : %s", s[i].name);
                    printf("\nRollno. : %s", s[i].rollNO);
                }
            }
            break;

        case 3:
            printf("Enter name or Rollno. :");
            scanf(" %49[^\n]", search);

            int found = 0;
            for (int i = 0; i < scount; i++)
            {
                if (strcmp(s[i].name, search) == 0 || strcmp(s[i].rollNO, search) == 0)
                {
                    printf("\nStudent found!\n");
                    printf("Name : %s\n", s[i].name);
                    printf("RollNo. : %s\n", s[i].rollNO);

                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("\nStudent not found!\n");
            }
            break;

        case 4:
            printf("Enter Teacher Name : ");
            scanf(" %49[^\n]", t[tcount].name);
            printf("Enter Subject : ");
            scanf(" %49[^\n]", t[tcount].subject);
            tcount++;

            printf("Teacher info added successfully.\n");
            break;

        case 5:

            if (tcount == 0)
            {
                printf("No teacher record found!");
            }
            else
            {
                printf("\n=====Teacher Records=====\n");

                for (int i = 0; i < tcount; i++)
                {
                    printf("\nTeacher %d", i + 1);
                    printf("\nName : %s", t[i].name);
                    printf("\nSubject : %s\n", t[i].subject);
                }
            }
            break;

        case 6:
            printf("Enter name or Subject :");
            scanf(" %49[^\n]", search);

            int locate = 0;
            for (int i = 0; i < tcount; i++)
            {
                if (strcmp(t[i].name, search) == 0 || strcmp(t[i].subject, search) == 0)
                {
                    printf("\nTeacher found!\n");
                    printf("Name : %s\n", t[i].name);
                    printf("Subject : %s\n", t[i].subject);

                    locate = 1;
                    break;
                }
            }

            if (locate == 0)
            {
                printf("\nTeacher not found!\n");
            }
            break;

        case 7:
            printf("Program ended.\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
