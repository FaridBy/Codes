#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
int main() 
{setlocale(LC_ALL,"Turkish");
int a[15],i,t,max,min,j,toplam=0,l;
	float ortalama;

srand(time(0));
for(i=0;i<=14;i++)
{
a[i]=rand()%41+20;
max=a[0];
	printf("%d.say�: %d\n",i+1,a[i]);
min=a[0];
toplam=toplam+a[i];
ortalama=toplam/15.0;
}
for(t=1;t<=14;t++)
{if(a[t]>max)
{l=max;
max=a[t];}
else if(a[t]>l && a[t] < max)
        {
            l = a[t];
        }}



for(j=1;j<=14;j++)
{if(a[j]<min)
{min=a[j];}}



printf("\n\nDizideki en b�y�k say�: %d\nDizideki en b�y�k 2. say�: %d\nDizideki en k���k say�: %d\nDizideki say�lar�n toplam�: %d\nDizideki say�lar�n ortalamas�: %f",max,l,min,toplam,ortalama);
}
