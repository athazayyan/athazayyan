#include <stdio.h>

int main() {
//deklarasi 
int uang, nominal, nominal1, nominal2, nominal3, nominal4, nominal5, nominal6, nominal7, nominal8, nominal9,nominal10, nominal11;
int nominal12, nominal13, nominal14;
char ulangi = 'y';
int counter = 0;
//input
while (uang>=1){
    printf("Jumlah uang: ");
    scanf("%d", &nominal);
//output 
printf("output: \n");
printf("________________________\n");
    printf("Pecahan|\tJumlah\n");
printf("________________________\n");
//sedikit manual... tapi tidak apa apa.. asal hasilnya sesuai
        uang = nominal / 500000; nominal1 = nominal % 500000;//menggunakan do while karena mau nyoba penggunaan ini,, kalau untuk keberadaaanya sama saja.
        printf("500.000|\t%d\n", uang);
          // karena hasil yang kita harapkan adalah hitungan yang mengisi nominal terbesar dahulu maka modulo % menjadi opsi terbaik untuk sisa
        uang = nominal1 / 100000; nominal2 = nominal1 % 100000;
        printf("100.000|\t%d\n", uang);  

        uang = nominal2 / 50000; nominal3 = nominal2 % 50000;
        printf(" 50.000|\t%d\n", uang);

        uang = nominal3 / 20000; nominal4 = nominal3 % 20000;
        printf(" 20.000|\t%d\n", uang);

        uang = nominal4 / 10000; nominal5 = nominal4 % 10000;
        printf(" 10.000|\t%d\n", uang);

        uang = nominal5 / 5000; nominal6 = nominal5 % 5000;
        printf("  5.000|\t%d\n", uang);

        uang = nominal6 / 2000; nominal7 = nominal6 % 2000;
        printf("  2.000|\t%d\n", uang);

        uang = nominal7 / 1000; nominal8 = nominal7 % 1000;
        printf("  1.000|\t%d\n", uang);

        uang = nominal8 / 500; nominal9 =  nominal8 % 500;
        printf("    500|\t%d\n", uang);

        uang = nominal9 / 200; nominal10 = nominal9 % 200;
        printf("    200|\t%d\n", uang);

        uang = nominal10 / 100; nominal11 = nominal10 % 100;
        printf("    100|\t%d\n", uang);

        uang = nominal11 / 50; nominal12 = nominal11 % 50;
        printf("     50|\t%d\n", uang);

        uang = nominal12 / 10;  nominal13 = nominal12 % 10;
        printf("     10|\t%d\n", uang);

        uang = nominal13 / 5; nominal14 = nominal13 % 5;
        printf("      5|\t%d\n", uang);

        uang = nominal14 / 1;
        printf("      1|\t%d\n", uang);
        counter++;
}
    return 0;
}
