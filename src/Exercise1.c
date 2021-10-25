/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	int i,j,k;

	for (i=1;i<=n+1;++i){
		printf("\n");
		for(j=1; j<=i;++j){
			if (j==1 || j==i){
				printf("1 ");
			}
			else{
				printf("%d ",i-1);
			}
		}
	}
    
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
