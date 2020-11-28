

#include <math.h>
#include <stdio.h>

int main()
{
	long long int arr[10], sum=0;
	int count=0;
	scanf("%d", &count);
	for(int i =0; i <count; i++){
		scanf("%lld",&arr[i]);
		sum+=arr[i];
		}
	printf("%lld", sum);
	
	return 0;
}


