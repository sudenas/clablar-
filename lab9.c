#include<stdio.h>
#include<math.h>




int main() {
/*
 int A,B,C;
    printf("uc sayi giriniz.\n");
    scanf("%d %d %d",&A,&B,&C);
        if (A>B && A>C)
        {
          printf("A:%d sayisi en buyuktur.",A);
        }
       else if (B>A && B>C){

            printf("B:%d en buyuk sayidir.",B);
        }
        else if (C>A && C>B)
        {
            printf("c:%d en buyuk sayidir.",C);
        }
       
    else {

        printf("sayilar birbirine esittir.");

    }

   int a,fak=1,sayi1;
printf("lutfen sayi giriniz\n");
scanf("%d",&sayi1);
for(a=1;a<=sayi1;a++){
   fak=fak*a;
}   
printf("sonuc:%d",fak);

    int i;
        for ( i = 1002; i <2000; i+=2)
        {
            printf("%d\n",i);
        }
 

  
    int sayi, ters=0, temp, basamak; 
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);
    
    temp = sayi;
    while(temp>0)
    {
        basamak = temp%10;
        ters = (ters*10)+basamak;
        temp = temp/10;
    }
    if(ters == sayi)
        printf("Palindromdur.");
    else
        printf("Palindrom degildir.");

        */
       int fak,a,i,sayi;
       float toplam,x;

    printf("n sayisini giriniz."),
    scanf("%d",&sayi);
    

toplam=0;
fak=1;

    for ( i = 1; i <= sayi; i++)
    {
        fak=fak*i;

       for ( a = 0; a <= sayi; a++)
       {
        toplam=toplam+pow(x,a)/fak;
       }
       
    }
    printf("%f",toplam);

    



       
       
      





    return 0;
}




    
    
      
     






















