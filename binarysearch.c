#include<stdio.h>
int main()
{
         int a[100],n,no,i;
         int high,low,mid;
         printf("enter the no.of array:");
         scanf("%d",&n);
         printf("enter the array:");
         for(i=0;i<n;i++)
         {
                   scanf("%d",&a[i]);
         }
         printf("enter the no. to be searched:");
         scanf( "%d",&no);
         low=0;
         high=n-1;
         while(low<=high)
         {
               mid=(low+high)/2;
               if (a[mid]==no)
               {
                        printf("%d to be found at %d position \n",no,mid);
                        return 0;
                        }
               else if(a[mid]<no)
               {
                      low=mid+1;
               }
               else
               {
                      high=mid-1;
               }
          }
          printf("element not found");
          return 0;
 }
