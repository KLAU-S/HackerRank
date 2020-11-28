#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the simpleArraySum function below.
 */


int main()
{
    
    int i, count, sum = 0;
    int arr[1000];
    scanf("%d",&count);
    for(i=0;i<count;i++){
      scanf("%d", &arr[i]);
      sum+=arr[i];
  }

    printf("%d\n",sum);
	return 0;
} 
