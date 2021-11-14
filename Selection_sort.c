#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void swap(int a[],int i,int mi){
    int temp=a[i];
    a[i]=a[mi];
    a[mi]=temp;
}

void display(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%3d",a[i]);
    }
    
}

void Selectionsort(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        int MinIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[MinIndex])
                MinIndex=j;
        }
        swap(a,i,MinIndex);
        printf("\nPass %d: ",i+1);
        display(a,n);
    }
    
}

int main()
{
    int *arr,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    
    printf("Before shorting: ");
    display(arr,n);
    Selectionsort(arr,n);

    return 0;
}