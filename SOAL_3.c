#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;    // Bilangan <= 1 bukan bilangan prima
    if (n == 2) return 1;    // 2 adalah bilangan prima
    if (n % 2 == 0) return 0; // Bilangan genap selain 2 bukan prima

    for (int i = 3; i * i <= n; i += 2) { // Mulai dari 3 dan periksa faktor ganjil
        if (n % i == 0) return 0; // Jika ditemukan faktor, bukan prima
    }
    return 1; // Jika tidak ada faktor, maka bilangan prima
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}