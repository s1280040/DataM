#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int GetRandom(int min,int max);

int main(void)
{
	int i;
    int j;
    int a[2];
	srand((unsigned int)time(NULL));
     a[0]=GetRandom(1,6);
    a[1]=GetRandom(2,7)-1;
	printf("Rolling the dice...\n");
		for (i = 0;i < 2;i++) {
            printf("die %d:",i+1);
		printf("%d\n",a[i]);
        }
        
	printf("Total value: %d\n",a[0]+a[1]);
	return 0;
}

int GetRandom(int min,int max)
{
	return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}