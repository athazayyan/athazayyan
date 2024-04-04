#include <stdio.h>
#include <stdbool.h>

int main() {
   
   
            
    int tahun, bulan;//input
    char ulangi = 'y';
    int counter = 0;

while (ulangi == 'y'){
    printf("masukkan tahun: ");
    scanf("%d", &tahun);
    printf("masukkan bulan: ");
    scanf("%d", &bulan);

//output... di sini hanya membaginya mnenjadi dua segmen.. tahun kabisat dan non kabisat kemudian mengulang bulan di masing masing segmen... yang sangat beda adalah di bulan februari di setiap segmen.
    if ( tahun % 400 == 0 || (tahun % 100 != 0 && tahun %4 == 0))
    {
        printf("Tahun %i adalah tahun kabisat\n", tahun);
       if (bulan == 2)
       {
            printf("Jumlah hari pada bulan Februari tahun %i adalah 29\n", tahun);
       } else if (bulan == 1 )
       {
        printf("Jumlah hari pada bulan Januari tahun %i adalah 31\n", tahun);
       } else if (bulan == 3 )
       {
        printf("Jumlah hari pada bulan Maret tahun %i adalah 31\n", tahun);
       } else if (bulan == 5)
       {
        printf("Jumlah hari pada bulan Mai tahun %i adalah 31\n", tahun);
       }else if (bulan == 7 )
       {
        printf("Jumlah hari pada bulan Juli tahun %i adalah 31\n", tahun);
       }else if (bulan == 8 )
       {
        printf("Jumlah hari pada bulan agustus tahun %i adalah 31\n", tahun);
       }else if (bulan == 10 )
       {
        printf("Jumlah hari pada bulan Oktober tahun %i adalah 31\n", tahun);
       }else if (bulan == 12 )
       {
        printf("Jumlah hari pada bulan Desember tahun %i adalah 31\n", tahun);
       }else if (bulan == 4 )
       {
        printf("Jumlah hari pada bulan April tahun %i adalah 30\n", tahun);
       }else if (bulan == 6 )
       {
        printf("Jumlah hari pada bulan Juni tahun %i adalah 30\n", tahun);
       }else if (bulan == 9 )
       {
        printf("Jumlah hari pada bulan September tahun %i adalah 30\n", tahun);
       }else if (bulan == 11 )
       {
        printf("Jumlah hari pada bulan Nopember tahun %i adalah 30\n", tahun);
       }
       

    } else
    {
        printf("Tahun %i bukan tahun Kabisat\n", tahun);
     if (bulan == 2)
       {
            printf("Jumlah hari pada bulan Februari tahun %i adalah 28\n", tahun);
       } else if (bulan == 1 )
       {
        printf("Jumlah hari pada bulan Januari tahun %i adalah 31\n", tahun);
       } else if (bulan == 3 )
       {
        printf("Jumlah hari pada bulan Maret tahun %i adalah 31\n", tahun);
       } else if (bulan == 5)
       {
        printf("Jumlah hari pada bulan Mai tahun %i adalah 31\n", tahun);
       }else if (bulan == 7 )
       {
        printf("Jumlah hari pada bulan Juli tahun %i adalah 31\n", tahun);
       }else if (bulan == 8 )
       {
        printf("Jumlah hari pada bulan agustus tahun %i adalah 31\n", tahun);
       }else if (bulan == 10 )
       {
        printf("Jumlah hari pada bulan Oktober tahun %i adalah 31\n", tahun);
       }else if (bulan == 12 )
       {
        printf("Jumlah hari pada bulan Desember tahun %i adalah 31\n", tahun);
       }else if (bulan == 4 )
       {
        printf("Jumlah hari pada bulan April tahun %i adalah 30\n", tahun);
       }else if (bulan == 6 )
       {
        printf("Jumlah hari pada bulan Juni tahun %i adalah 30\n", tahun);
       }else if (bulan == 9 )
       {
        printf("Jumlah hari pada bulan September tahun %i adalah 30\n", tahun);
       }else if (bulan == 11 )
       {
        printf("Jumlah hari pada bulan Nopember tahun %i adalah 30\n", tahun);
       }
    }
       
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/tidak): ");
        scanf(" %c", &ulangi);
        counter++;
}
 return 0;
    
    
}
