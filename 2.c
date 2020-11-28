#include<stdio.h>
#include<stdlib.h>
int main()
{
	int alicepoint=0, bobspoint=0, pointscancelled = 0, i;
	int alicearr[100],bobsarr[100];
	for (i = 0; i<3; i++)
	{
		scanf("%d", &alicearr[i]);
	}
	for (i = 0; i<3; i++)
	{	
		scanf("\n%d", &bobsarr[i]);
	}
	//printf("%d %d %d", alicearr[0], alicearr[1], alicearr[2]);
	for(i=0; i<3; i++)
	{
		if(alicearr[i] > bobsarr[i])
			alicepoint++;
		if(bobsarr[i] > alicearr[i])
			bobspoint++;
		if(alicearr[i] == bobsarr[i])
			pointscancelled++;
	}
	printf("%d %d\n", alicepoint, bobspoint);
	
return 0;
}
