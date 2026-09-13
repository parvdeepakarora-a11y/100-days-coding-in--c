
 #include <stdio.h>

int main() {
    int days, fine = 0;

    scanf("%d", &days);

    if (days > 30) {
        printf("Membership Cancelled");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine ₹%d", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine ₹%d", fine);
    }
    else {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine ₹%d", fine);
    }

    return 0;
}