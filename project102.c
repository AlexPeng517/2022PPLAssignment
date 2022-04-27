#include <stdio.h>

void function1(){
	int a;
	a++;
	printf("a: %d",a);
}



int main(){
	function1();
	function1();
	printf("\n In the first function call ends, int a should be recycled by the OS(reached the end of its lifetime). \n");
	printf("But in the second function call,we can found that 'a' equals the previous 'a' +1 \n");
	printf("We have accessed the value that shouldn't be access after first call \n");
return 0;
}
