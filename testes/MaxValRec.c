#include<stdio.h>



int maxi (int maior, int n, int v[])
{
    
   if (v[n]>maior)
   {
      maior=v[n];
      printf("v[n]=%d n=%d maior=%d \n", v[n], n, maior);
   }   
      
   if (n==0)
       return maior;
       
   else
       return maxi(maior,n-1,v);
       
}            

int main()
{

int v[]={1,8,12,4,18,22};

int resp;


resp=maxi(v[0],5,v);

printf("Resp: %d \n",resp);

return 0;
}