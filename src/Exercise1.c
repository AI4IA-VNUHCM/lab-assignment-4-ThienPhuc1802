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
	int arr[n][n+1];
    arr[0][0]=1;
	for (i=0;i<n;i++){
		for (j=0;j<=i;++j){
			if (j==0 || j==i){
				arr[i][j]=1;
			}
		}
	}

	for(i=2;i<n;i++){
		for(j=1;j<i;++j){
		arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
	}	 


    for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<=i;++j){
			printf("%d ",arr[i][j]);
		}
}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
