#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionSort(int arr[],int n){
for(int i=0;i<n-1;++i){
int minIndex=i;
for(int j=i+1;j<n;++j){
if(arr[j]<arr[minIndex]){
minIndex=j;
}
}
if(minIndex!=i){
int temp=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;
}
}
printf("sorted array");
for(int i=0;i<5;++i){
printf("%d\t",arr[i]);
}
printf("\n");
}
int main(){
int n;
printf("enter the number elements:");
scanf("%d",&n);
int arr[n];
srand(time(NULL));
for(int i=0;i<n;i++){
arr[i]=rand()%10000;
}
clock_t start=clock();
selectionSort(arr,n);
clock_t end=clock();
double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("time taken for sorting:%f seconds\n",time_taken);
return 0;
}
