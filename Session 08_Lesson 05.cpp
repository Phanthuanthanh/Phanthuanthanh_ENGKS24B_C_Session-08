#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4},{5 ,6, 7, 8},{9, 10, 11, 12}};
    int sum = 0; 

    for (int j = 0; j < 4; j++) {
        sum += arr[0][j];
    }

    for (int i = 1; i < 2; i++) {
        sum += arr[i][0];
    }

    for (int j = 0; j < 4; j++) {
        sum += arr[2][j];
    }

    for (int i = 1; i < 2; i++) {
        sum += arr[i][3];
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

