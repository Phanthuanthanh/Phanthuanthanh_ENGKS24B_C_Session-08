#include <stdio.h>

int main() {
    int n;

    printf("Moi ban nhap vao mot so nguyen: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Nhap cac phan tu cho ma tran %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu o vi trí [%d][%d]: ", i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Ma tran vuong o nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
	return 0;
}

