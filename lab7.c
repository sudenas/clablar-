#include <stdio.h>
int main(){
  /*
 
 int a,b,toplam;
printf("lutfen iki sayi giriniz\n");
scanf("%d",&a);
scanf("%d",&b);
toplam=a+b;
printf("toplam:%d",toplam); */


/*int a,b,c,d;

printf("lutfen a sayisini giriniz\n");
scanf("%d",&a);
printf("lutfen b sayisini giriniz\n");
scanf("%d",&b);

c=a;
d=b;
b=c;
a=d;

printf("a:%d b:%d",a,b);*/
/*

int ogrencino;
    float vize,final,ort;
 
printf("ogrenci no giriniz\n");
scanf("%d",&ogrencino);
printf("vize notunu  giriniz\n");
scanf("%f",&vize);
printf("final notunu giriniz\n");
scanf("%f",&final);

ort=((vize*40)/100)+((final*60)/100);

printf("numaraniz:%d gecme notunuz:%.2f",ogrencino,ort);

*/
int a,r;
float alan,cevre;

printf("1 veya 2 giriniz.\n");
scanf("%d",&a);
printf("yaricap giriniz.\n");
scanf("%d",&r);

    if (a==1){
    cevre=2*3.14*r;
    printf("cevre:%f",cevre);

    }
      
    else if (a==2)
    {
        alan=(((r)^2)*3.14);
        printf("alan:%f",alan);
    }
    else {

        printf("yanlis giris");
    }
    


 




   }

    






    






}
