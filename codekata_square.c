#include<stdio.h>
main(){
	int x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d%d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	scanf("%d%d",&x3,&y3);
	scanf("%d%d",&x4,&y4);
	
	if(x1==x2&&x3==x4&&y1==y4&&y2==y3)
	printf("yes");
	else
	printf("no");
}
