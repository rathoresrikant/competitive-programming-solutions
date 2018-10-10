#include<iostream>
using namespace std;
void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}
int partition(int l, int r, int a[]){
	int pivot = a[(l+r)/2],i=l,j=r;
	while(i<j){
		while(i!=r&&a[i]<=pivot){
			i++;
		}
		while(j!=l&&(j==(l+r)/2||a[j]>pivot)){
			j--;
		}
		if(i<j){
			swap(a[i],a[j]);
		}
	}
	swap(a[(l+r)/2],a[j]);
	return j;
}
void quicksort(int l, int r, int a[]){
	if(l<r){
		int j = partition(l, r, a);
		quicksort(l, j-1, a);
		quicksort(j+1, r, a);
	}
	else 
		return;
}
int main(){
	int a[] = {14,41,93,40,98};
	quicksort(0,4,a);
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	return 0;
}
