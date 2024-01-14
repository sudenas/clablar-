#include<stdio.h>
#include<stdlib.h>

    int main(){

        const int studentno=4;
        float a=0.0,b=0.0,dizi[4][5]={67,76,55,0,1,34,79,76,0,2,56,68,57,0,3,66,89,65,0,4};
        int i,j,id;

            for ( i = 0; i < studentno; i++)
            {
                for ( j = 0; j < 3; j++)
                {
                    a+=dizi[i][j];
                }
               
                dizi[i][3]=a/3;
                a=0;  
            }
        
        b=dizi[0][3];

        for ( i = 1; i < 4; i++)
        {
            if (dizi[i][3]>dizi[0][3])
            {
                b=dizi[i][3];
                id=i;
            } 
            
        }
        printf("studentno:%d\naverage:%.2f",id,b);
    }