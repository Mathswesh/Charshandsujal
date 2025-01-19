/*
    Author : Agnivesh
    Date : 20 jan 2025
    Objective : Structure using array
*/
#include <stdio.h>
// defination
struct studentdata
{
    int roll;
    char name[10];
    int marks;
};
void main()
{
    // 0 1 2 3 4 s1[100].roll = 200
    struct studentdata s1[100];
    int i;
    for (i = 0; i < 100; i++){
        printf("\nRoll : ");
        scanf("%d", &s1[i].roll);

        printf("\nName : ");
        scanf("%s", &s1[i].name);

        printf("\nmarks : ");
        scanf("%d", &s1[i].marks);
    }
    for (i = 0; i < 100; i++){
        printf("\n\t%d\t%s\t%d", s1[i].marks, s1[i].name, s1[i].roll);
    }
    return;
}