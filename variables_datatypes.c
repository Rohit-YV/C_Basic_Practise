#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){

    int i1=0;
    printf("i1=%d\n",i1);

     i1=5;
    printf("i1=%d\n\n",i1);

    i1=-3;
    printf("i1=%d\n",i1);

    i1=2;
    printf("The value of i1=%d\n\n",i1);

    double d1=2;
    printf("d1=%1f\n",d1);
    d1=5.70;
    printf("d1=%1f\n",d1);
    float f1=3.7;
    printf("f1=%f\n",f1);

    char c='A';
    printf("%c\n",c);
    c=65;

    printf("%c\n",c);

     int code='A';
     printf("%d\n\n",code);
     _Bool b=0;
     printf("b=%d\n",b);
     b=1;
     printf("b=%d\n",b);

     b=2;
     printf("b=%d\n",b);

     b=1;
     printf("b=%d\n",b);
     b=false;
     printf("using keywords=%d\n",b);
     b=true;
     printf("usingkeywords=%d\n",b);

     char name[]="ranjan";

     printf("%s\n",name);

     int x=sizeof(int);
     printf("uber of bytes of an int:%d byte\n",x);
     printf("number of bits:%d (4*8=32) bits\n",x);
     printf("we can store 2^32 in an integer");



     return 0;


 }
