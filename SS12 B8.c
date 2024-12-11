#include <stdio.h>
#include <math.h>
 
int greatestCommonDivisor(int n,int m){
	
	while(m!=0){
		int temp=m;
		m = n%m;
		n=temp;
	}
	return abs(n);
}
int main(){
	int n,m; 
	printf("moi ban nhap so thu nhat ");
	scanf("%d",&n); 
	printf("moi ban nhap so thu hai ");
	scanf("%d",&m);
	printf("UCLN cua %d va %d la %d",n,m,greatestCommonDivisor(n,m));
	return 0; 
} 
