#include <stdio.h>
#include <stdlib.h>

int main()
{
    
//Pentagon sayıları Pn=n(3n−1)/2 formülüne göre üretilmektedir. 100'den küçük pentagon sayılarını ekrana yazdırın.
//Pentagon numbers are produced according to the formula Pn=n(3n−1)/2. Print pentagon numbers less than 100 to the screen.

   int P[8],i;
    
    for (i = 0; i < 8; i++)
    {
        P[i]=i*(3*i-1)/2;

        printf("P[%d]:%d\n",i,P[i]);
    }
    

   int i=0;
   
    while (1)
    {
        if ((float)(i*(3*i-1)/2)<100)
        {
            printf("P[%d]:%f\n",i,(float)i*(3*i-1)/2);
            i++;
        }
        else{
            break;
        } 
        
    }

//Bir sınıftaki 10 öğrencinin boy ve kilo değerlerini iki boyutlu diziye klavyeden okuyarak aktaran ve ortalama boy ve kilo değerlerini hesaplayarak ekrana yazdıran programı C dili ile yazınız.
//Write a program in C language that transfers the height and weight values of 10 students in a class to a two-dimensional array by reading them from the keyboard and calculates the average height and weight values and prints them on the screen.

      
       int boy[1][10];
       int kilo[1][10];
       int i=0,j=0,boyort=0,kiloort=0;

      
        for ( j= 0; j < 10; j++)
        {
            printf("ogrencinin boy degerini giriniz\n");
            scanf("%d",&boy[i][j]);
            printf("ogrencinin kilo degerini giriniz\n");
            scanf("%d",&kilo[i][j]);

        }
        for ( j= 0; j < 10; j++)
        {
           boyort+=boy[i][j];
           kiloort+=kilo[i][j];
        }

      
        printf("%.2f\n",(float)boyort/10);
        printf("%.2f",(float)kiloort/10);

    

//Aynı satır ve sütun sayısına sahip iki matrisi toplayan C kodunu yazınız. Matris değerleri klavyeden girilecek.
//Write the C code that adds two matrices with the same number of rows and columns. Matrix values will be entered from the keyboard.

     int a[3][3],b[3][3],toplam[3][3];
    int i,j;

      for (i = 0; i < 3; i++)
      {
       for (j= 0; j < 3; j++)
       {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
       }
       
      }
       for (i = 0; i < 3; i++)
      {
       for (j= 0; j < 3; j++)
       {
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
       }
       
      }
       for (i = 0; i < 3; i++)
      {
       for (j= 0; j < 3; j++)
       {
               toplam[i][j]=a[i][j]+b[i][j];
               printf("a[%d][%d]+b[%d][%d]=%d\n",i,j,i,j,toplam[i][j]);
           
       }
       
      }


       

    
        
        


     


        

















    


    




    




























}

