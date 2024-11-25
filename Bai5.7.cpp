#include <stdio.h>

int main() {
    int i , num1, num2, ucln = 1;

    do {
        printf("Nhap so nguyen thu 1: ");
        scanf("%d", &num1);
        if (num1 <= 0) {
            printf("So nhap vao ko phai so nguyen duong. Vui long nhap lai.\n");
        }
    } while (num1 <= 0);

    do {
        printf("Nhap so nguyen thu 2: ");
        scanf("%d", &num2);
        if (num2 <= 0) {
            printf("So nhap vao ko phai so nguyen duong. Vui long nhap lai.\n");
        }
    } while (num2 <= 0);

    for ( i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            ucln = i;
        }
    }

    printf("Uoc chung lon nhat cua %d va %d la %d\n", num1, num2, ucln);

    return 0;
}
