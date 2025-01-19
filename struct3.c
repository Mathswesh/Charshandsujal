/*
    Author : Agnivesh
    Date : 20 jan 2025
    Objective : Structure within structure
*/
#include <stdio.h>

struct school{
    int id;
    char sname[10];
};

// defination
struct studentdata
{
    int roll;
    char name[10];
    int marks;
    struct school sc1;
};

void main() {
    struct studentdata s1 = {1,"Agnivesh",100,101,"Royal"};

    // struct studentdata *s2;
    printf("\t%d\t%s\t%d\t%d\t%s",s1.marks,s1.name,s1.roll,s1.sc1.id,s1.sc1.sname);

    printf("\n%d\t%d",&s1,&s1.sc1);
    return ;
}
