#include <stdio.h>
#include <string.h>
#include <locale.h>
char buyukunlu();//buyukunlu uyumu fonksiyonu
char kucukunlu();//kucukunlu uyumu fonksiyonu
 main()
{setlocale(LC_ALL,"Turkish");buyukunlu();
kucukunlu();
}
char buyukunlu()       //Buyukunlu fonksiyonu controlling...
{
	
char word[50];
      int length,i,a=0,b=0;
      printf("Bir kelime girin: ");
      gets(word);
      length=strlen(word);
      for(i=0;i<length;i++){
if(word[i]=='a'||word[i]=='o'
||word[i]=='u'||word[i]=='�' ||word[i]=='U' ||word[i]=='A' ||word[i]=='I' ||word[i]=='O'){
        a++; }
       if(word[i]=='e'||word[i]=='i'
||word[i]=='�'||word[i]=='�' || word[i]=='E'|| word[i]=='�'|| word[i]=='�'|| word[i]=='�'){
        b++; }  }
   if(a==0||b==0){
  printf("Girdi�iniz Kelime B�y�k �nl� Uyumuna Uyuyor.\n");}
   else{
    printf("Girdi�iniz Kelime Buyuk �nl� Uyumuna Uymuyor.\n");}
    
}
char kucukunlu()   //Buyukunlu fonksiyonu controlling...
{
	char word[50];
      int length,i,a=0,b=0;
      length=strlen(word);
      for(i=0;i<length;i++){
if(word[i]=='�'||word[i]=='o'
||word[i]=='u'||word[i]=='�' ||word[i]=='�' ||word[i]=='�' ||word[i]=='U' ||word[i]=='O'){
        a++; }
       if(word[i]=='e'||word[i]=='a'
||word[i]=='i'||word[i]=='�'
||word[i]=='E' ||word[i]=='�' ||word[i]=='I' ||word[i]=='A'){
        b++; }  }
   if(a==0||b==0){
  printf("Girdi�iniz Kelime K���k �nl� Uyumuna Uyuyor.");}
   else{
    printf("Girdi�iniz Kelime K���k �nl� Uyumuna Uymuyor.");}
}
