#include<stdio.h>
typedef struct varaible{
unsigned int mid1,mid2,mid3;
} varaible;

int mid_marks_calculate(){
    varaible v;
    int sum,mid_internal_marks;
    printf("Enther the mid marks by giving space between them\n");
    scanf("%u %u %u",&v.mid1,&v.mid2,&v.mid3);
    sum = (v.mid1*0.4)+(v.mid2*0.4)+(v.mid3*0.4);
    mid_internal_marks = sum * 0.6;
    printf("The Mid Internal Marks are %d",mid_internal_marks);
}