#include <stdio.h>
int main(){
   float belanja, promo1, promo2, promo3, promo4;
   printf("masukkan total pembayaran anda:");
   scanf("%f", &belanja);//di sini dimasukkan belanja

   if ( belanja >= 100000 && belanja < 500000 )
   { //untuk belnja dari 100000 hingga 500000 
    promo1 = belanja - (belanja * 0.10);
    printf("Uang Belanja anda: %.2f\n", belanja);
    printf("promo yang anda dapatkan adalah 10%%\n");
    printf("maka yang harus anda bayarkan %.2f\n", promo1);
   }
   else if (belanja >= 500000 && belanja < 1000000)
   {//untuk belanja dari 500000 hingga 1000000
    promo2 = belanja - (belanja * 0.20);
    
    printf("Uang Belanja anda: %.2f\n", belanja);
    printf("promo yang anda dapatkan adalah 20%%\n");
    printf("maka yang harus anda bayarkan %.2f\n", promo2);
   }
   else if (belanja >= 1000000 && belanja < 2000000)
   {//untuk belanja 1000000 hingga 2000000
    promo3 = belanja - (belanja * 0.25);

    printf("Uang Belanja anda: %.2f\n", belanja);
    printf("promo yang anda dapatkan adalah 25%%\n");
    printf("maka yang harus dibayarkan:%.2f\n", promo3);

   } else if (belanja >= 2000000)
   {// untuk belanja 2000000
    promo4 = belanja - 100000;
    printf("Uang Belanja anda: %.2f\n", belanja);
    printf("promo yang anda dapatkan adalah potongan Rp.100.000\n");
    printf("maka yang harus anda bayarkan:%.2f\n", promo4);
   }
   else
   {//untuk belanja kurang dari 100.000
    printf("\t\t\tBelanja anda %.2f\n Maaf anda tidak mendapatkan jumlah belanja yang memungkinkan untuk dapat potongan\n", belanja);
    printf("\t\t\tsila datang kembali\n");

   }
   
   
    
    return 0;
}
