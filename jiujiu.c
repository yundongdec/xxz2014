#include<stdio.h>
int main(void)
{
	int i, j;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			printf("%-2dx%d==%d ", j, i, j*i);
		}
		putchar('\n');
	}
	return 0;
}
