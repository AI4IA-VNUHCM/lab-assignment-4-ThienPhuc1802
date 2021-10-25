/*
5.	Receive an array of m x n with all distinguished elements.
Find the minimum element of each row then find the maximum
number from those.
Ex:
___________________________________________________________________________________
| Input: 5(row) 4(col) 10 21 22 54 64 53 86 72 68 99 30 11 12 23 69 15 16 77 98 19 |
| The converted 2D array will be like this:                                        |
| 10 21 22 54                                                                      |
| 64 53 86 72                                                                      |
| 68 99 30 11                                                                      |
| 12 23 69 15                                                                      |
| 16 77 98 19                                                                      |
| Output:                                                                          |
| 53                                                                               |
|__________________________________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void Array2Dconverter(int arr[], int a[SIZE][SIZE], int m, int n)
{
	int row, column;
	int counter = 0;
	//Convert 1D array to 2D array
	for (row = 0; row <= (m - 1); row ++){
		for (column = 0; column <= (n - 1); column ++){
			a[row][column] = arr[counter];
			counter++;
		}
	}
}

void Ex5(int arr[], int m, int n){
	int a[SIZE][SIZE];
	Array2Dconverter(arr,a,m,n);
	int i,j,k,Min,Max;
	int arr2[m];
	a[0][0]=Min;
	for (i=0;i<=m-1;++i){
		Min=a[i][0];
		for (j=0;j<=n-1;++j){
			if (Min>a[i][j]){
				Min=a[i][j];
			}
			if(j==n-1){
			arr2[i]=Min;
			// printf("%d ", Min);	
			}
				
			}
		}
		Max =arr2[0];
		for (i=0;i<m;++i){
			if (Max<arr2[i]){
				Max=arr2[i];
			}
		}
		printf("%d",Max);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);
	argc-=3;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+3]);
	}

	Ex5(testcase, row, col);
	
	return 0;
}
