#include <stdio.h>

int main (){
    float bagian1, bagian2, bagian3;
    printf("Masukkan ukuran sisi yang pertama =");
    scanf("%f", &bagian1);
    printf("Masukkan ukuran sisi yang kedua =");
    scanf("%f", &bagian2);
    printf("Masukkan ukuran sisi yang ketiga =");
    scanf("%f", &bagian3);

    if (bagian1 == bagian2 && bagian2 == bagian3)//dengan logika a = b dan b = c maka a = c. Maka kita tidak perlu menuliskan bagian1 == bagian3
    {
        printf("Inshaalllah ini adalah segitiga sama sisi\n");
    }
     else if (bagian1 == bagian2 .|| bagian2 == bagian3 || bagian3 == bagian1)//ini penggunaan atau '||' bisa menjadi kelompok kelompok kecil yang bisa membuat kita tidakmenulus lagi dengan panjang setiap kemungkinan
    {
        printf(" Inshaallah ini adalah segitiga sama kaki\n");
    } 
    else {
        printf("Ini adalah segitiga sembarang\n");
    } //else berarti yang tidak masuk ke kedalam kemungkinan di atas
    
    return 0;
    
}
