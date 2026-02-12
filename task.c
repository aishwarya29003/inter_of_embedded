#include(stdio.h)
int main()

    char name[] ="Aishwarya"
    int usn = 5;
    int marks = 66;
    printf("enter your name:")
    scanf("%s",name)

    if(marks>=90){
        printf("%s,your marks is excellent\n",name)
    }
    else if(marks>=80){
        printf("%s,your marks is good\n",name)
    }
    else if(marks>=70){
        printf("%S,your marks is better\n",name)
    }
    else{
        printf("%s,you have been failed\n",name)
    }