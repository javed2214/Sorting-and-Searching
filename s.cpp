// Merge Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

void Merge(int *left, int n1, int *right, int n2, int *a){

	int i=0,j=0,k=0;

	while(i<n1 and j<n2){

		if(left[i]<=right[j]){
			a[k++]=left[i++];
		}else{
			a[k++]=right[j++];
		}
	}
	while(i<n1)
		a[k++]=left[i++];
	while(j<n2)
		a[k++]=right[j++];
}

void mergeSort(int *a, int n){

	if(n<2) return;
	int mid=(n/2);
	
	int *left, *right;
	left=(int *)malloc(sizeof(int)*mid);
	right=(int *)malloc(sizeof(int)*(n-mid));

	for(int i=0;i<mid;i++)
		left[i]=a[i];
	for(int i=mid;i<n;i++)
		right[i-mid]=a[i];

	mergeSort(left,mid);
	mergeSort(right,n-mid);
	Merge(left,mid,right,n-mid,a);

	free(left);
	free(right);
}

int main(){

	int a[]={4,3,6,8,1,9};
	int n=sizeof(a)/sizeof(int);

	mergeSort(a,n);

	for(auto it: a)
		cout<<it<<" "; 

	return 0;
}