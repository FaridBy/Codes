#include <stdio.h>
#include <time.h>
#include <locale.h>

int fonk(int n[], int length); 
int main()
{
 srand(time(0));
 setlocale(LC_ALL,"Turkish");
	
	int i, a;
	printf("Dizinin eleman say�n� giriniz : ");
	scanf("%d",&a);
	
	int array[a];
	
//Dizinin elemanlar�n�n yazd�r�lmas�
	for(i=0;i<a;i++)
	{
		array[i]=rand()%100+1;
		printf("%d. say� %d\n",i+1,array[i]);
	}
	
	
	
	printf("Dizinin en b�y�k eleman� %d", fonk(array, a));
}

//Fonksiyon
int fonk(int n[], int length) 
{
	int max;
if(length!=0) { 
		max=fonk(n, length-1);
		if (n[length-1] > max){
			return n[length-1];
		}
	return max;
	}

}
