#include<stdio.h>
main(){
	int arr[100000];
	int low,high,limit,count=0,i,j,num,increment;
	scanf("%d%d",&low,&high);
	
	limit=high-low+1;
	
	//if(low==1)
	//arr[0]=1;
	
	for(i=0;i<limit;i++){
		num=i+low;
		increment=num;
		if(arr[i]==0&&num!=1){
			count++;
			num=num+num;
			while(num<=high){
				arr[num-low]=1;
				num=num+increment;
			}
		}
	}
	
	//for(i=0;i<limit;i++)
	//printf("%d:%d ",low+i,arr[i]);
	
	//printf("\n");
	
	printf("%d",count);
}
