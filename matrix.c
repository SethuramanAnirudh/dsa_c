#include<stdio.h>

int main(){
	int sum=0;
	int sum1=0;
	int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i == j){
			sum=sum+arr[i][j];
			}
			if( ( i==0 && j==3-1 ) || (i==3-1 && j==0) || () ){
				sum1=sum1+arr[i][j];		
		}
	}
	}
	printf("diagonal sum is %d\n",sum);
	printf("diagonal sum1 is %d\n",sum1);

	return 0;
}


