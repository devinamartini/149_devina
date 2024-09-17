#include <stdio.h>

// Fungsi untuk melakukan pengurutan menggunakan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar jika elemen lebih besar ditemukan
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Membaca jumlah nilai

    int nilai[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);  // Membaca semua nilai
    }

    // Mengurutkan nilai menggunakan Bubble Sort
    bubbleSort(nilai, n);

    // Menampilkan nilai yang sudah terurut
    for (int i = 0; i < n; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}