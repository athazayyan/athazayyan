#include <stdio.h>

char* gantikarakter(char *data, char find, char replace);//proto fungsii...

int main() {
    //input semua data
    char data1[30], find1, replace1;
    printf("Masukkan string anda : ");
    scanf("%[^\n]", data1); 
    getchar(); 

    printf("Masukkan karakter yang ingin diganti : ");
    scanf("%c", &find1);
    getchar(); 

    printf("Masukkan karakter pengganti : ");
    scanf("%c", &replace1);

    gantikarakter(data1, find1, replace1);//fungsi
    printf("maka hasil subtitusinya : %s", data1);//data yang sudah diolah oleh fungsii
    return 0;
}

char* gantikarakter(char *data, char find, char replace) {// fungsi 
    for (int i = 0; data[i] != '\0'; i++) {
        if (data[i] == find) {
            data[i] = replace;
        }
    }
    return data;
}
