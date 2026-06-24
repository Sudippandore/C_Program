#include<stdio.h>
int main()
{
    float price, discount = 0.0, finalPrice;

    
    printf("Enter the original price of the item: ");
    scanf("%f", &price);

    if (price < 500) {
        discount = 5.0;
    } else if (price >= 500 && price < 1000) {
        discount = 10.0;
    } else if (price >= 1000 && price < 5000) {
        discount = 15.0;
    } else {
        discount = 20.0;
    printf("%f",&price);
       

    }
}
