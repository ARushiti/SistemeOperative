//Donika
#include<stdio.h>
#include<stdlib.h>
//perfshirja e librarise pthread.h
#include<pthread.h>

int arr[50], i;
int n;

/*
 average, minimum, and maximum 
 vlerat do te ruhen globalisht
*/
float average;
int minimum;
int maximum;

//thread1 per kalklulimit e avarage(mesatares)
void *th()
{
        int sum=0;
        for(i=1;i<=n;i++)
                sum=sum+arr[i];
        average=sum/n; 
}

//Elira
//thread2 per kalkulimin e vlerave minimale
void *th1()
{


        minimum=arr[1];
        for(int i=1;i<n;i++)
                if(minimum>arr[i])
                minimum=arr[i];
        

}

//thread3 per kalkulimin e vlerave maksimale
void *th2()
{

        maximum=arr[1];
        for(int i=1;i<=n;i++)
                if(maximum<arr[i])
                        maximum=arr[i];
                        
}
//Albina
int main(int argc, char *argv[])
{
    int count =0;
    /*
     seria e numrave te pasuar ne command line 
    */
        for (int i = 1; i < argc; i++)
        {
                arr[i] =  atoi(argv[i]);
                count++;
        }
        n = count;
        printf("%d command line arguement are passed \n", count);
        for(int i=1; i<=n; i++)
            printf("%d\t",arr[i]);
            
            
        printf("\n\n");
    int t,i;
    //tri objektet e punes se threadave jane t1, t2, t3
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;


