#include <stdio.h>

int main() {
   int n,m;
   scanf("%d %d",&n,&m);
   int card[n];

   for(int i=0;i<n;i++){
       scanf("%d",&card[i]);
   }
   int t;
   int sum=0;

   for(int i=0;i<n-2;i++){
       for(int j=i+1;j<n-1;j++){
           for(int k=j+1;k<n;k++){
               t=card[i]+card[j]+card[k];
               if(m-t>=0&&t>sum)
                   sum=t;
           }
       }
   }
   printf("%d",sum);

}
