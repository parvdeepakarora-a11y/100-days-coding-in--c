
  #include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit = %.2f%%", percentage);
    }
    else if (costPrice > sellingPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss = %.2f%%", percentage);
    }
    else {
        printf("No Profit, No Loss");
    }

    return 0;
}