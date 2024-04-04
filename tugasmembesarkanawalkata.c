#include <stdio.h>

int main() {
    int i=0, n;
    char str[256];
    printf("\n<<<<<<MENGUBAH SEMUA AWALAN KATA MENJADI BESAR>>>>>>>\n");
    printf("Masukkan kalimat yang saudara inginkan: ");//input kalimat
    fgets(str, sizeof(str), stdin);
    
   while(str[i] != '\0')//semua kata jadi kecil
    {  if (str[i]>= 'A' && str[i]<= 'Z')
        {
            str[i] = str[i] + 32;
        } 
     i++;   
    }

    if (str[0] >= 'a' && str[0] <='z')//kata pertama kecil jadi besar
    {
        str[0] = str[0] - 32; 
    } 
    
    i = 0;
    while(str[i] != '\0')
    {if (str[i] == ' ')// kata setelah spasi jadi besar
    {
        if (str[i+1] >= 'a' && str[i+1] <='z')
        {
            str[i+1]= str[i+1] - 32;
        } 
        
    }
    
        
     i++;   
    }
    

    printf("%s", str);
    return 0;
}
