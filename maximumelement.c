/*Pseudocode for finding the maximum element in an array in C 
1.Start with an empty array arr[]
2.Determine the length of the array as n
3.Set the first element of the array at index 0 as the maximum element int max = arr[0]
4.Create a valiable i and assign it to 1
5.while i < n
6.if element at index i > maximum element
7.then, maximum element = element at index i
8.increment for i
9.return maximum element
*/
#include<stdio.h>
//a function findMax is created with an empty array and n
int findMax(int arr[],int n){
	int max = arr[0]; //set the maximum element to the frist element at index 0 of the array 'arr'
	int i = 1; 
	while(i < n){
		if(arr[i] > max){
			max = arr[i];
		}
		i++;
	}
	
	return max;
}
//call the above function
int main(){
	int arr[] = {20,50,70,10,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int maxElement = findMax(arr,n);
	printf("The maximum element in the array is %d",maxElement);
	return 0;
}
