// Quick Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

int Partition(int *a, int start, int end){

	int pivot=a[end];
	int partitionIndex=start;

	for(int i=start;i<end;i++){
		if(a[i]<=pivot){
			swap(a[i],a[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(a[partitionIndex],a[end]);

	return partitionIndex;
}

void quickSort(int *a, int start, int end){

	if(start < end){
		int partitionIndex=Partition(a,start,end);
		quickSort(a,start,partitionIndex-1);
		quickSort(a,partitionIndex+1,end);
	}
}

int main(){

	int a[]={4,3,7,8,2,6,9,12};
	int n=sizeof(a)/sizeof(int);

	quickSort(a,0,7);

	for(auto it:a)
		cout<<it<<" ";

	return 0;
}