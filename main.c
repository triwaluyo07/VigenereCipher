#include "header.h"
int main()
{    int pilihan; ///menerima pilihan inputan dari user

///algoritma

    while (1)
    {

        printf("\n==Program Enkripsi dan Dekripsi Vigenere Cipher==");
        printf("\n\n[1] Enkripsi\n");
        printf("\n[2] Dekripsi\n");
        printf("\n[3] Exit\n");
        printf("\nInputkan pilihan anda : ");
        scanf("%d",&pilihan);

        fflush(stdin); ///untuk mengosongkan buffer input

        if (pilihan == 1)
        {
            Enkripsi();
        }
        else if (pilihan == 2)
        {
            Dekripsi();
        }
        else if (pilihan == 3)
        {
            exit(0);
        }
        else
        {
        printf("Maaf, inputan yang dimasukan salah.\n\n"); ///jika inputan user tidak sesuai ketentuan
        }
    }
 return 0;
}
