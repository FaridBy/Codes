#include <stdio.h>
#include <string.h>
#include <locale.h>
void fonk();
//Karakter, b�y�k harf,k���k harf say�s� bulma
int main()
{
	fonk();
}
void fonk()
{setlocale(LC_ALL,"Turkish");
char text[50];
int i,x=0,t=0;
printf("Metini dahil edin:") ;
gets(text);
for(i=0;i<50;i++)
{
	if(text[i]>='a' && text[i]<='z')
	x++;
		if(text[i]>='A' && text[i]<='Z')
	t++;
}printf("Girilen metinde %d tane karakter\n%d tane k���k harf\n%d tane b�y�k harf var.",strlen(text),x,t-1);
}
