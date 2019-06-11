#include<stdio.h>
main(){
	
	int n;
	int arr[100000];
	int res[100000];
	int i,j,tnum,temp,r,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	for(i=0;i<n;i++){
		tnum=arr[i];
		cnt=0;
		while(tnum>0){
			r=tnum%2;
			if(r==1)
			cnt++;
			tnum=(tnum>>1);
		}
		res[i]=cnt;
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(res[i]==res[j]){
				if(arr[i]<arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					
					temp=res[i];
					res[i]=res[j];
					res[j]=temp;
				}
			}
			else if(res[i]<res[j]){
				temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					
					temp=res[i];
					res[i]=res[j];
					res[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	printf("\n%d",arr[i]);
	
}
