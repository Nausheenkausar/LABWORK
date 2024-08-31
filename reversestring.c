#include<stdio.h>
void reversestring(char *str){
	char *start=str;
	char *end=str;
	char temp;
	while(*end!='\0'){
		end++;
	}
	end--;

while(start<end){
	temp= *start;
	*start=*end;
	*end=temp;
	start++;
	end--;
}
}
int main(){
	char str[]="nausheen";
	reversestring(str);
	printf("reverse string is:%s\n",str);
	return 0;
}
