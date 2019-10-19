/*
All submissions for this problem are available.Today Chef wants to evaluate the dishes of his N students. He asks each one to cook a dish and present it to him.

Chef loves his secret ingredient, and only likes dishes with at least X grams of it. Given N, X and the amount of secret ingredient used by each student Ai, find out whether Chef will like at least one dish.

Input:
First line will contain T, number of testcases. Then the testcases follow.
The first line of each testcase contains two integers N (number of students) and X (minimum amount of secret ingredient that a dish must contain for Chef to like it).
The next line contains N space separated integers, Ai denoting the amount of secret ingredient used by the students in their dishes.

Output:
For each testcase, print a single string "YES" if Chef likes at least one dish. Otherwise, print "NO". (Without quotes).
*/


#include<stdio.h>
int main()
{
int t,n,x,loc;
scanf("%d",&t);
for(int q=0;q<t;q++)
{
loc=-1;
scanf("%d %d",&n,&x);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
if(arr[i]>=x)
 {
     loc=1;
 }
}
if(loc>0)
printf("YES\n");
else
printf("NO\n");
}
}