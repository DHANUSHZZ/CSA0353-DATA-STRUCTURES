#include<stdio.h>
int main(){
	int i,j,m,n,a[100],b[100],c[100];
	printf("Enter the Number of elements in the first array:\n");
	scanf("%d",&m);
	printf("Enter the array elements:\n");
	for(int i=0;i<m;i++){
	scanf("%d",&a[i]);}
	printf("Enter the Number of elements in the second array:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(int i=0;i<n;i++){
	scanf("%d",&b[i]);}
	
	for(i=0;i<m;i++)
		c[i]=a[i];
	j=i;
	for(i=0;i<n;i++,j++)
		c[j]=b[i];
	printf("The Merged Array\n");
	for(i=0;i<m+n;i++)
		printf("%d\t",c[i]);
}
