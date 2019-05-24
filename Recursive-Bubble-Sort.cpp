// Recursive Bubble Sort

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *a, int n){

	if(n==1) return;

	for(int i=0;i<n-1;i++)
		if(a[i] > a[i+1])
			swap(a[i],a[i+1]);

	bubbleSort(a,n-1);
}

int main(){

	int a[]={5,4,7,6,3,1,2};
	int n=sizeof(a)/sizeof(int);

	bubbleSort(a,n);

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}