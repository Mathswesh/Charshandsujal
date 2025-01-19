/*
    Author : Agnivesh
    Date : 20 jan 2025
    Objective : Structure
*/

#include<stdio.h>

// defination
struct studentdata{
    int roll;
    char name[10];
    int marks;
}s1,s2;

int main(){
// declare and initialize
    struct studentdata s1 = {1,"Agnivesh",100};
    
    printf("\t%d\t%s\t%d",s1.marks,s1.name,s1.roll);

    return 0;
}