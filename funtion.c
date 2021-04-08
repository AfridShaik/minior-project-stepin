#include<stdio.h>
typedef struct varaible{
unsigned int var1,var2,var3;
int sum,total_internal_marks;
} varaible;

int mid_marks_calculate(){
    varaible v;
    printf("Enther the mid marks by giving space between them\n");
    scanf("%u %u %u",&v.var1,&v.var2,&v.var3);
    v.sum = (v.var1*0.4)+(v.var2*0.4)+(v.var3*0.4);
    v.total_internal_marks = v.sum * 0.6;
    printf("The Mid Internal Marks are %d\n",v.total_internal_marks);
}

int weekly_mark_calculate(){
    varaible v;
    printf("Enther the Weekly Test  marks by giving space between them\n");
    scanf("%u %u %u",&v.var1,&v.var2,&v.var3);
    v.sum = v.var1+v.var2+v.var3;
    v.sum = (v.sum)/3;
    v.total_internal_marks = v.sum * 1.8;
    printf("The Mid Internal Marks are %d\n",v.total_internal_marks);
}