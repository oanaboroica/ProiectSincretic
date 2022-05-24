#include<stdio.h>
#include<string.h>

void randnum(int n)
{
int random;
srand(time(NULL));
for(int i=0;i<n;i++)
{
random=rand();
printf(" ", random);
}
printf("\n");
}

int main() {

int n;
printf("n= ");
scanf("%d", &n);
randnum(n);

	return 0;
}