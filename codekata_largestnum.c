#include<stdio.h>
main(){
	int res[200];
	int n,r,i,j,ind,temp,sum=0;
	
	scanf("%d",&n);
	ind=n;
	
	for(i=0;i<ind;i++)
		scanf("%d",&res[i]);	
	/*ind=0;
	while(n>0){
		r=n%10;
		res[ind]=r;
		n=n/10;
		ind++;
	}*/
	
	for(i=0;i<ind;i++){
		for(j=i;j<ind;j++){
			if(res[i]<res[j]){
				temp=res[i];
				res[i]=res[j];
				res[j]=temp;
			}
		}
	}
	
	for(i=0;i<ind;i++){
		sum=(sum*10)+res[i];
	}
	
	printf("%d",sum);
}
