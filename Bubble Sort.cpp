// Bubble Sort Algorithm
// TC => O(n^2)

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *a, int n){

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}

int main(){

	int a[]={4,2,5,7,1,9};
	int n=sizeof(a)/sizeof(int);

	bubbleSort(a,n);

	for(auto it:a)
		cout<<it<<" ";

	return 0;
}
