#include <stdio.h>

#include <locale.h>

int buyukBul(int *ptr);

#define x 5

main(){

setlocale(LC_ALL,"Turkish");

int dizi[x],j;

int *p=dizi;

printf("%d elemanl� bir dizi olu�turun ve en b�y�k eleman� bulal�m\n",x);

for(j=0;j<x;j++){

scanf("%d",(p+j));

}

printf("\nMax element of array:%d\n",buyukBul(dizi));

return 0;

}

int i=0;//i de�i�kenini bir �e�it saya� gibi kulland�m

int enBuyuk=0;

int buyukBul(int *ptr){

int sonuc;

if(i==x){

sonuc=enBuyuk;

enBuyuk=0;

i=0;

return sonuc;

}

else if(*(ptr+i)>=enBuyuk){

enBuyuk=*(ptr+i);

i++;

return buyukBul(ptr);

}

else{

i++;

return buyukBul(ptr);

}

}
