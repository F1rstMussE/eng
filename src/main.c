#include "en.h"
int main() {
	SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
	char Text[20][40] = {0};
	int d;
	char name[] = "base.txt";
	char ch;
	int n,checks,cas;
	cas = load(Text,name);
	
	printf("Hello it's your assistent for learn english!\nYou need write translate words which I'm print you");
	while(1){
		printf("\nCountie?(Y,n)");
		scanf("%c",&ch);
		if(ch == 'n'){
			printf("Good bie!");
			return 0;
		} else if(ch == 'Y'){
			char Texts[40];
			n = 1;
			printf("Translate This: ");
			
			for(int i = 0; i < 40; i++){
				if(Text[n][i] == '-')break;
				d = i;
			}
			for(int i = d+2; i <40; i++){
				if(Text[n][i] == '\n')break;
				printf("%c",Text[n][i]);
				
			}
			printf(" - ");
			for(int i = 0; i < d+2; i++){
				scanf("%c",&Texts[i]);
			}	
			printf("%d\n",d);
			checks = check(Text,n,Texts,d);
		}
	}
	
	
	return 0;
}
