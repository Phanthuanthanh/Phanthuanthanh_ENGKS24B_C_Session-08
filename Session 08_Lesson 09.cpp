#include <stdio.h>

int main() {

    int arr[8] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = 8;  
    int max_count = 0;  
    int max_element = arr[0];  
    int count[8]; 

    for (int i = 0; i < n; i++) {
        count[i] = 0; 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;  
            }
        }
    }
    
	for (int i = 0; i < n; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_element = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat trong mang la: %d\n", max_element);

    return 0;
}


