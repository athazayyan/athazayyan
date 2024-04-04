#include <stdio.h>

void enkripsi_baru(char *data, char arah, int pergeseran);

int main() {
    char data[50]; 
    char arahgeser[10];
    int jumlahgeser; 
    int i = 0;
//input semua data
    printf("Masukkan sebuah string: ");
    scanf("%[^\n]", data); 

    printf("Besar pergeseran karakter: ");
    scanf("%d", &jumlahgeser); 

    printf("Arah pergeseran (kanan/kiri): ");
    scanf("%s", arahgeser); 

    while (data[i] != '\0') { //digunakan untuk mengecilkan semuahuruf dri data yang dimasukkan
        if (data[i] >= 'A' && data[i] <= 'Z') {
            data[i] = data[i] + 32;
        } 
        i++;   
    }
    
    enkripsi_baru(data, arahgeser[1], jumlahgeser);//fungsinya 

    return 0;
}

void enkripsi_baru(char *data, char arah, int pergeseran) {
    int panjang = 0;
    while (data[panjang] != '\0') {
        panjang++;
    }//ini kurang lebih untuk hitung ulang panjang kalimat

    if (arah == 'a') {//kalau kanan pakai ini
        for (int i = 0; i < panjang; i++) {
            if (data[i] >= 'a' && data[i] <= 'z') {
                data[i] = 'a' + (data[i] - 'a' + pergeseran) % 26;
            }
        }
    } else if (arah == 'i') { //kalau kiri pakai ini
        for (int i = 0; i < panjang; i++) {
            if (data[i] >= 'a' && data[i] <= 'z') {
                data[i] = 'a' + (data[i] - 'a' - pergeseran + 26) % 26;
            }
        }
    }

    printf("Hasil enkripsi: %s\n", data); 
}
