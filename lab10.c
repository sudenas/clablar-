#include<stdio.h>
#include<stdlib.h>

    int main(){
/*
        float dizi[8],ort;
        int i;

        for ( i = 0; i < 8; i++)
        {
           printf("elemani giriniz.");
           scanf("%f",&dizi[i]);
        }
        for ( i = 0; i < 8; i++)
        {
            ort+=dizi[i];
        }
        printf("%.2f",ort/8);
 

    int dizi[10],sayi,i,a;

        for ( i = 0; i < 10; i++)
        {
            printf("sayi giriniz.");
            scanf("%d",&sayi);
            if (sayi==-1)
            {
               break;
            }
            printf("dizi elemani giriniz");
            scanf("%d",&dizi[i]);
        }
        if (i==0)
        {
            printf("dizi elemani girilmedi.");
        }
        else
        {
            for ( a = 0; a < i+1; a++)
            {
                printf("%d\n",dizi[a]*dizi[a]);
            }
            
        }
    */
   /*
        int dizi[5],sayi,b=0,a=0,i;
            printf("sayi giriniz");
            scanf("%d",&sayi);
            while (sayi!=0)
            {
                a=sayi%10;
                sayi=sayi/10;
                dizi[b]=a;
                b++;
            }

        for ( i = 0; i <b+1; i++)
        {
           printf("dizi[%d]:%d\n",dizi[i]);

        }
        */
        //olmadı.Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan programı yazınız. 

        int dizi[10],a,i;
       

        for ( i = 0; i < 10; i++)
        {
           printf("elemani giriniz.");
           scanf("%d",&dizi[i]);
        }
            a=0;
        for ( i = 9; i>=0; i--)
        {
            printf("dizi[%d]:%d\n",a,dizi[i]);
            a++;
        }
        




        

            
            
   
        
        
        
        

        
        
        



        

      
        

    

        








    
    
       
    

        














        return 0;

    }