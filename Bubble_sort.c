#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void display(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%3d",a[i]);
    }
    
}

void Bubblesort(int *a,int n){
    int c=1;
    while(c<n){
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        printf("\nPass %d: ",c);
        display(a,n);
        c++;
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
    Bubblesort(arr,n);

    return 0;
}