//Given an array count the occurrence of an element in that array, if it is not present return -1//
#include<stdio.h>
int* occ(int *a,int n,int k);
int main()
{
    int n,k,i,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    occ(a,n,k);
 }

int* occ(int *a,int n,int k)
{
    int i,flag=0;
     for(i=0;i<n;i++)
 {
     if(k==a[i])
     flag++;
 }
 if(flag)
 printf("%d",flag);
 else
 printf("%d",-1);
 return 0;
}