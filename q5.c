#include <stdio.h>
#include <stdlib.h>

//bubble sorting in c//


int main() { 
int arr[]={12,3,98,4,77};
int n= sizeof(arr)/sizeof(arr[0]);
int i,j;
int temp;
printf("original array:\n");
for(i=0;i<n;i++){
	printf("%d\n",arr[i]);
	
}
printf("\n");
for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if(arr[j]<arr[j+1]){
			//swapping of elements
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
printf("sorted array is:\n");
for(i=0;i<n;i++){
	printf("%d\n",arr[i]);
}
printf("\n");
	return 0;
}
