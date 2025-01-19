/*
    Author : Agnivesh
    Date : 20 jan 2025
    Objective : Structure and functions
*/
#include<stdio.h>
#include<string.h>
// defination
struct studentdata
{
    int roll;
    char name[10];
    int marks;
};
void display(struct studentdata s1){
    s1.roll = 1;
    strcpy(s1.name,"Agnivesh");
    s1.marks=100;
    printf("\t%d\t%s\t%d",s1.marks,s1.name,s1.roll);
}

void main()
{
    struct studentdata s1;
    display(s1);
    return;
}