#include<stdio.h>
void main(){
    printf("Utkarsh Pandey IT-C 2100320130186\n");
    int n,key;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter key:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(A[i]==key){
            printf("key found at index %d",i);
        }
    }
}
