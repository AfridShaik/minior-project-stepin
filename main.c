#include<stdio.h>
#include</home/afrid/Documents/minior-project-stepin/funtion.h>
int main(){
    int n;
    printf("Select An option\n1 - Mid Marks\n2 - Internal Marks\n3 - Semister Examinations\n");
    scanf("%d",&n);
    switch(n) {
        case 1:
        mid_marks_calculate();
        case 2:
        weekly_mark_calculate();
}
}