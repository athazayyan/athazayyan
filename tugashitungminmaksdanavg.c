#include <stdio.h>

int main() {
    int n, counter; char ulangi='y';
    float array[80], mindata, maksdata, avg, total;
    
    while (ulangi == 'y'){
    printf("\nMasukkan jumlah data yang saudara inginkan: ");
    scanf("%d", &n);//input jumlah data
    
    if (n > 0 && n <= 80) {// input nilai data
        for (int i = 0; i < n; i++) {
            printf("\nData ke %d: ", i + 1);
            scanf("%f", &array[i]); //
            
      
            if (i == 0 || array[i] < mindata)
                mindata = array[i];
            
           
            if (i == 0 || array[i] > maksdata)
                maksdata = array[i];
            
            total += array[i];
        }
        
        avg = total/n;
        
      
        printf("\nNilai Maksimum dari data adalah : %.3f", maksdata);//output nilai maks min dan rata-rata
        printf("\nNilai Minimum dari data adalah : %.3f", mindata);
        printf("\nNilai Rata-Rata dari data adalah : %.3f", avg);
    } else {
        printf("\nNilai n harus berada dalam interval 0 < n <= 80.\n");
    }
        printf("\nApakah kamu mau mengulang?\n");
        printf("Jawab (y/tidak): ");
        scanf(" %c", &ulangi);
        counter++; while (ulangi != 'y')
        {
          break;
        }
        
}

printf("Terima kasih");
    return 0; 
}
