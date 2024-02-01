#include <stdio.h>
#define pi  3.14159 //pi lumayan sukar untuk dituliskan berulang jadinya didefinisikan terus

int main() {

    float d, luas, volume, tinggi, r;
    
    /*pakai float karena kalau pakai int, nanti dibawah tidak mendapatkan hasil pecahan */
    
    printf("masukkan diameter:");
    scanf("%f", &d);
    printf("masukkan tinggi:");
    scanf("%f", &tinggi);
    
    //%f untuk memanggil double di atas dan tanda & untuk bisa menisi diameter dan tingginya
    
    r = d/2;
    
    /*di sini ingin membagikan diameternya, karena yang di atas di-input diameter sementara
     rumus di bawah lebih mudah dicari dengan jari-jari maka diameter harus 
     dibagi dua sehingga menghasilkan jari jari*/

    volume = pi * r * r * tinggi;
    luas = 2 * pi * r * (r+tinggi);
    
    //rumus luas dan volume tabung dengan pi yang sudah didefinisikan

    printf("luas tabung adalah %.2f\n", luas);
    printf("volume tabung adalah %.2f", volume);
    
    //\n untuk bisa skip satu baris 
    // .2 ditaruh untuk membatasi angka pecahannya
    
    return 0;
}


    
