#include<stdio.h>
#include<stdlib.h>

int strLength(char str[]){
    int uzunluk = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        uzunluk++;
    }
    return uzunluk;
   
}
void  strReverse(char str[40],int len){
    int i;
    char a;
    for ( i = 0; i < len/2; i++)
    {   
        a=str[len-1-i];
        str[len-1-i]=str[i];
        str[i]=a;
    }
    
}
int main(){
    char s[50];
    int len=0 ;
    
    
        printf("lutfen bir cumle giriniz.\n");
        gets(s);
        len=strLength(s);
        printf("\nlength:%d\n",len);
        strReverse(s,len);
     printf("ters_cevirilmis_hali:%s",s);
}
