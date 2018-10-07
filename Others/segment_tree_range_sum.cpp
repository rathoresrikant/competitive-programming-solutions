#include<bits/stdc++.h>

using namespace std;

void constructST(int arr[],int start,int end,int *st,int pos){

	if(start == end){
		st[pos] = arr[start];
		return;
	}
	int mid = (start + end)/2;
	constructST(arr,start,mid,st,2*pos+1);
	constructST(arr,mid+1,end,st,2*pos+2);
	st[pos] = st[2*pos+1] + st[2*pos+2];
}

int * createST(int arr[],int n){

	int height = ceil(log2(n));
	int size = pow(2,height + 1) -1;
	int *st = new int[size];
	constructST(arr,0,n-1,st,0);
	return st; 
}

int rangeQuery(int *st,int pos,int start,int end,int qs,int qe){

	if(qs>end || qe<start)
		return 0;
	if(qs<=start && qe>=end)
		return st[pos];
	int mid = (start + end)/2;
	return rangeQuery(st,2*pos+1,start,mid,qs,qe) + rangeQuery(st,2*pos+2,mid+1,end,qs,qe);
}

void updateST(int *st,int pos,int start,int end,int i,int diff){

	if(i > end | i < start)
		return;
	st[pos] += diff;
	if(start != end){
		int mid = (start + end)/2;
		updateST(st,2*pos+1,start,mid,i,diff);
		updateST(st,2*pos+2,mid+1,end,i,diff);
	}
}

int updateRange(int arr[],int n,int *st,int i,int val){

	int diff =  val - arr[i];
	arr[i] = val;
	updateST(st,0,0,n-1,i,diff);
}
int main(){

	int arr[] = {1, 3, 5, 7, 9, 11};
	int n = 6;
	int *st = createST(arr,n);
	cout<<rangeQuery(st,0,0,n-1,1,3)<<endl;
	updateRange(arr,n,st,1,10);
	cout<<rangeQuery(st,0,0,n-1,1,3)<<endl;	
	return 0;
}