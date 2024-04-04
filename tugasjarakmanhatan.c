#include <stdio.h>

int main(){
    int X1, a, X2, Y1, Y2, horizontal, vertikal;
    printf("\nmasukkan bilangan X1 :");
    scanf("%d", &X1);
    printf("\nmasukkan bilangan X2 :");
    scanf("%d", &X2);
    printf("\nmasukkan bilangan Y1 :");
    scanf("%d", &Y1);
    printf("\nmasukkan bilangan Y2 :");
    scanf("%d", &Y2);
    

    horizontal = X1 - X2;
    vertikal = Y1 - Y2;

    if (horizontal<0 && vertikal>0)
    {
        printf("Maka jawabannya : %d\n", -1*horizontal + vertikal);
    }
    else if (horizontal>0 && vertikal<0)
    {
        printf("Maka jawabannya : %d\n", horizontal + (-1*vertikal));
    }else if (vertikal<0 && horizontal<0)
    {
        printf("Maka jawabannya : %d\n", -1*horizontal + (-1*vertikal));
    }else
    {
        printf("Maka jawabannya : %d\n", horizontal+vertikal);
    }
    
    
return 0;
}
