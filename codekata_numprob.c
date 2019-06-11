#include<stdio.h>
main(){
	int n;
	int i,ind=0,r,sum,cnt=0,num;
	int res[55];
	scanf("%d",&n);
	for(i=1;i<n;i++){
		sum=0;
		num=i;
		while(num){
			r=num%10;
			sum=sum+r;
			num=num/10;
		}
		num=i;
		if(n-num==sum){
			cnt++;
			res[ind]=num;
			ind++;
		}
	}
	
	printf("%d",cnt);
	for(i=0;i<ind;i++)
	printf("%d ",res[i]);
}
