	#include <stdio.h>
	int main(){
	int x = 5;
	int y = 8;
	int* ptr = &x;
	*ptr = 10;
	ptr = &y;
	int* p2 = &y;
	p2 = &x;
	*p2 = *ptr + 1;
	
	printf("%d %d %d %d", *ptr, *p2, x, y);

	return 0;
	}