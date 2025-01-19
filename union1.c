/*
    Author : Agnivesh
    Date : 20 jan 2025
    Objective : Union
*/

#include<stdio.h>
#include<string.h>
// defination
union studentdata{
    int roll;
    char name[10];
    int marks;
};

struct studentdetails{
    int roll;
    char name[10];
    int marks;
}s2;

int main(){
// declare and initialize
    union studentdata s1;

    s1.roll = 1;
    strcpy(s1.name,"Agnivesh");
    s1.marks=100;

    s2.roll = 1;
    strcpy(s2.name,"Agnivesh");
    s2.marks=100;
    
    printf("\t%d\t%s\t%d",s1.marks,s1.name,s1.roll);
    printf("\n%d\t%s\t%d",s2.marks,s2.name,s2.roll);

    printf("\n%d",sizeof(s1));
    printf("\n%d",sizeof(s2));

    return 0;
}