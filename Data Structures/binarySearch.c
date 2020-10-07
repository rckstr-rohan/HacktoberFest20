#include<stdio.h>
//binary Search 
void main() {
	int arr[] = {5,9,11,13,17,23,27,32,50,75};
	int search=0,location=0;
	printf("searching digit\n");
	scanf("%d",&search);
	int start=0,mid=0;
	int end=sizeof(arr)/sizeof(int)-1;
	mid=(start+end)/2;
	while(end)
	{
	if(search > arr[mid]) {
		start = mid;
		mid = (start+end)/2;
		
	}
	else if(search==arr[mid]) {
		location = mid;
		break; 
	}
	else {
		 end = mid;
		 mid = (start + end)/2;
		 
	}
}
   location++;
	printf("--> %d",location);
}
