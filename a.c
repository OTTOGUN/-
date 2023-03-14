//
// Created by 39221 on 2023/3/14.
//

#include<stdio.h>

int main(){
    int i = 0, a = 0 , b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;
    printf(" a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);
    printf(" i = %d\n",i);
    return 0;
}