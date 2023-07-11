#include <stdio.h>

int main()
{
    double n1, n2, n3, n4, n5;
    printf("Sayı1: ");
    scanf("%lf", &n1);
    printf("Sayı2: ");
    scanf("%lf", &n2);
    printf("Sayı3: ");
    scanf("%lf", &n3);
    printf("Sayı4: ");
    scanf("%lf", &n4);
    printf("Sayı5: ");
    scanf("%lf", &n5);
 
    if (n1 >= n2 >= n3 >= n4 >=n5)
        printf("Girilen En Büyük Sayı : %.2lf.", n1);
 
    return 0;
}