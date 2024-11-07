//program to output two-2D arrays

/*
Author: Clowen Wendoh
Date: Thursday, 7th November 2024
Aim: Output two-2D arrays
*/

#include <stdio.h>

int main()
{
	int R,C;
	
	//for declaring the 1st 2D array
	int score[2][2]={{65,92},{84,72}};
	
	for(R=0; R<2; R++)
	{
		for(C=0; C<2; C++)
			printf("Score[%d][%d]=%d\n", R,C, score[R][C]);
	}
	
	//for outputting the values of the 1st 2D arrays
	int r,c;
	for(r=0; r<R; r++)
	{
		for(c=0; c<C; c++)
		{
			printf("%d ",score[r][c]);
		}
		printf("\n");
	}
	
	int P,H;
	
	//for declaring 2nd 2D array
	int SCORE[2][2]={ {35,70},{59,67} };
	
	for(P=0; P<2; P++)
	{
		for(H=0; H<2; H++)
			printf("Score[%d][%d]=%d\n", P,H, SCORE[P][H]);
	}
	
	//for outputting the values of the 2nd 2D array
	int p,h;
	for(p=0; p<P; p++)
	{
		for(h=0; h<H; h++)
		{
			printf("%d ", SCORE[p][h]);
		}
		printf("\n");
	}
	
	return 0;
}