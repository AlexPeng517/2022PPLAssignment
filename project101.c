#include <stdio.h>

int lock = 1;
int *pa = 0;


void function2(){
    int b = 2;
    printf("b is %d \n",b);
    printf("Local variable a is accessible via function2 : %d \n",*pa);
    lock = 0;
}


void function1(){
    int a = 1;
	printf("Current value of a is from function1(): %d \n",a);
    pa = &a;
    function2();
    while(lock){}
}


int main(){
    function1();
    return 0;
}

