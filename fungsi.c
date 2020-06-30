#include "header.h"

void Enkripsi()
{

///kamus
    int a, b;

    char input[257], kunci[33];

///algoritma

    printf("\nInputkan Teks yang akan dienkripsi [max 256 huruf] : ");
    gets(input);

    printf("\nInputkan kunci enkripsi [max 32 huruf] : ");
    gets(kunci);

    printf("\n");

    for (a=0, b=0; a<strlen(input); a++,b++) ///strlen digunakan untuk menghitung panjang karakter pada suatu string
    {
        if(b>=strlen(kunci))
        {
            b = 0;
        }
        printf("%c",65+(((toupper(input[a])-65)+(toupper(kunci[b])-65))%26)); /// Ci = (Pi + Ki) mod 26
    }
    printf("\n\n");

}

void Dekripsi()
{
    ///kamus

    int a, b, hasil;
    char input[257], kunci[33];

    ///algoritma
    printf("\nInputkan Teks yang akan diDekripsi [max 256 huruf] : ");
    gets(input);

    printf("\nInputkan kunci [max 32 huruf] : ");
    gets(kunci);

    printf("\n");

    for (a=0, b=0; a<strlen(input); a++,b++)
    {
        if(b>=strlen(kunci))
        {
            b = 0;
        }

        hasil = (((toupper(input[a])-64)-(toupper(kunci[b])-64)));

        if( hasil < 0) ///jika hasil pengurangan kurang dari 0, maka Pi = 26+hasil
        {
            hasil = 26 + hasil;
        }

    printf("%c",65 + (hasil % 26));
    }

    printf("\n\n");

}
