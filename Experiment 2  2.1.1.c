#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
int mid=left+(right-left)/2;
		if(arr[mid]==x){
			return mid;
		}
		else if(x<arr[mid]){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
    }