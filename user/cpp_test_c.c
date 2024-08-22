#include "cpp_test.h"
#include "kernel/types.h"
#include "user/user.h"
int main(void){
		int a = 1;
		int b = 2;
		int c = add(a, b);
		printf("the test result is %d\n", c);
		exit(0);
}