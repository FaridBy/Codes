#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>


//Let's start...

int main()
{setlocale(LC_ALL,"Turkish");
srand(time(NULL)); 

//Adlar�n tan�mlanmas�
char a[10][100]={
{"turkey"},
{"istanbul"},
{"azerbaijan"},
{"baku"},
{"football"},
{"messi"},
{"lovely"},
{"book"},
{"marmara"},
{"barcelona"}
};
printf("Oyuna ba�layabilirsiniz, ba�ar�lar...\n");
printf("NOT* ��kan bi harfi 2. kez girerseniz kaybedersiniz!\n\n");
printf("Bulaca��n�z Kelime:     ");
int i=rand()%10,num=0;
int ch,length=strlen(a[i]),g=strlen(a[i]);

char ok[11]={3,3,3,3,3,3,3,3,3,3,3};

	   for(int v=0;v<length;v++)
{
	printf("_ ");
}
printf("\n\n\n");
   
int x=2*length; 
 printf("%d �ans�n�z var:\n",x);
	printf("Kelimedeki bulunmayan harf say�: %d\n\n\n ",g);
	int az=0;
	
	// Harf kontr�l�
for(int o=0;o<4*length;o++)

{ 

scanf("%s",&ch);
x--;
for(int l=0;l<length;l++)
{ 
     if(ch==a[i][l])
     {num++;g--;az++;
	 ok[l]=ch;} 
} 
for(int s=0;s<strlen(a[i]);s++){
printf("%c ",ok[s]);} //Kelimenin buldu�umuz harflerinin ekrana yazd�r�lmas�


printf("\n");
printf("-Kelimede girdi�iniz harften %d tane var.\n",num);
printf("*%d �ans�n�z kald�:\n",x);
	printf("-Kelimedeki bulunmayan harf say�: %d\n",g);
printf("-�imdiye kadar buldu�unuz harf say�s�: %d\n\n\n",az);

num=0;
char us[10]; 
//Kazanma ve Kaybetme
	if(g==0 || g<0 ){printf("Kelimedeki t�m harfler bulundu! Kazand�n�z!"); break;}
	if(x==0)
	
{printf("Son �ans olarak s�z� girin: "); 

scanf("%s",&us);
	if(us[0]!=a[i][0] || us[1]!=a[i][1] || us[2]!=a[i][2] || us[3]!=a[i][3]  )
{	printf("Kaybettiniz! Kelime: %s",a[i]);
	}
	else printf("Tebrikler! Kelimeyi buldunuz!");
;break;}
	
}
}



