#include <stdio.h>

int main() {
    int n = 0;
    char array[255];
    printf("\n<<MEMBALIKKAN KALIMAT>>\n");
    // Input kalimat
    printf("Masukkan kalimat anda: ");
    fgets(array, sizeof(array), stdin);

    // Mengecilkan semua huruf
    while (array[n] != '\0') {
        if (array[n] >= 'A' && array[n] <= 'Z') {
            array[n] = array[n] + 32;
        } 
        n++;
    }
    
    // Mencetak kalimat secara terbalik dengan memanfaatkan pengulangan diatas yang sudah diujung.. tinggal membalikkanya sahaja
    int i;
    for (i = n - 1; i >= 0; i--) {
        printf("%c", array[i]);
    }

    return 0;
}
