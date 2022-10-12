#include <stdio.h>
struct student
{
    char name[100];
    char usn[11];
    int marks;
} s[100];

void main()
{
    int num, i;
    double total = 0.0, avg = 0.0;
    printf("Enter the no. of students\n");
    scanf("%d", &num);
    printf("Enter the student details\n");
    for (i = 0; i < num; i++)
    {
        printf("--------------------------------------\n");
        printf("Name \n");
        scanf("%s", s[i].name);
        printf("USN \n");
        scanf("%s", s[i].usn);
        printf("Marks \n");
        scanf("%d", s[i].marks);
        total += s[i].marks;
    }
    avg = total / num;
    printf("The average marks for the class is:%lf\n", avg);
    printf("The student who has scored below average\n");
    printf("------------------------------------------\n");
    for (i = 0; i <= num; i++)
    {
        if (s[i].marks < avg)
        {
            printf("Name \n");
            printf("%s\n", s[i].name);
            printf("Usn \n");
            printf("%s\n", s[i].usn);
            printf("marks\n");
            printf("%d\n", s[i].marks);
        }
    }
    printf("The student who has scored above average\n");
    printf("------------------------------------------\n");
    for (i = 0; i <= num; i++)
    {
        if (s[i].marks >= avg)
        {
            printf("Name \n");
            printf("%s\n", s[i].name);
            printf("Usn \n");
            printf("%s\n", s[i].usn);
            printf("marks\n");
            printf("%d\n", s[i].marks);
        }
    }
}
