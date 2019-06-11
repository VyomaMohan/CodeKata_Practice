#include<stdio.h>
main(){
	char ch;
	scanf("%c",&ch);
	if((ch>=97&&ch<=122)||(ch>=65&&ch<=90)){
		if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		printf("Vowel");
		else
		printf("Consonant");
	}
	else{
		printf("invalid");
	}
}
