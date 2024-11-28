#include<stdio.h>

int main(){
	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	printf("Gia tri cac phan tu trong mang: \n");
		
		for(int i = 2; i >= 0; i--){
			for(int j = 3; j >= 0; j--){
				printf("%d ",arr[i][j]); 
			}
			printf("\n"); 
		} 
	return 0; 
}
 
