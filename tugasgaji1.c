#include <stdio.h>

int main(){
    char nama[16], jabatan[16]; //mendeklerasikan nama dan jabatan dengan char.. 16 angka random sahaja bu sebab ACHMAD ATHA ZAYYAN 16 huruf
    int gajikotor, gajibersih, zakat, pajak; //gajikotor, gajibersih, zakat, dan pajak dideklerasikan dengan int

    printf("masukkan nama anda :");
    gets(nama);        //gets bisa baca spasi scanf bisa juga tapi pemakaian gets lebih efisien
    printf("Jabatan :");
    gets(jabatan);
    printf("masukkan gaji kotor anda :");
    scanf("%i", &gajikotor); //disini tidak memerlukan spasi jadi bisa dengan fungsi scanf sahaja

    pajak = gajikotor * 0.1; //pajak 10% dituliskan dengan 0.1
    zakat = gajikotor * 0.025; //zakat sebesar 2.5% dituliskan 0,025
    gajibersih = gajikotor - pajak - zakat;

    puts("------output--------\n");//fungsi puts dapat berdiri sendiri dan membuat baris baru

    printf("Nama karyawan :%s\n", nama);
    printf("Jabatan karyawan :%s\n", jabatan);
    printf("jumlah gaji kotor :%i\n", gajikotor);
    printf("jumlah gaji bersih :%i\n", gajibersih);
    printf("jumlah pajak anda :%i\n", pajak);
    printf("jumlah zakat anda :%i\n", zakat);
    
    return 0;

}