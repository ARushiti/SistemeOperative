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



