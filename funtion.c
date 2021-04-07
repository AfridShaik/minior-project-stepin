#include<stdio.h>

int mid_marks_calculate(){
    unsigned int mid1,mid2,mid3;
    int sum,mid_internal_marks;
    printf("Enther the mid marks by giving space between them\n");
    scanf("%u %u %u",&mid1,&mid2,&mid3);
    sum = (mid1*0.4)+(mid2*0.4)+(mid3*0.4);
    mid_internal_marks = sum * 0.6;
    printf("The Mid Internal Marks are %d",mid_internal_marks);
    }