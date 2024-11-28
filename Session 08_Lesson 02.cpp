#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    int n;

    printf("Nhap phan tu ban can tim: ");
    scanf("%d", &n);

    for (int i = 0; i <= 4; i++) {
        if (arr[i] == n) {
            printf("Vi tri phan tu trong mang la %d\n", i); 
			break;
        }else{
        	printf("Phan tu khong ton tai trong mang.\n");
        	break; 
        } 
    }
    return 0;
}

