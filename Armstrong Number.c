#include <stdio.h>
 #include <math.h>
 #include <locale.h>
 // Armstrong say�s� rakamlar�n�n k�pleri toplam� kendisine e�it olan say�d�r...
void fonk();
int main()
{ setlocale(LC_ALL,"Turkish");
printf("Bir sayi giriniz: ");
 
fonk();

}

void fonk()
{
    int sayi,a,b,c=0,d;
   scanf("%d",&sayi);
    d=sayi;
    while(sayi > 0){        
        a = sayi % 10;
        b=pow(a,3);
        c=c+b;
        sayi = sayi / 10;
    }
    if(c==d)
    printf("%d ARMSTRONG say�s�d�r.",c);
    else 
    printf("%d ARMSTRONG say�s� de�il!",d);
    }
