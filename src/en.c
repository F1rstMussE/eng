#include "en.h"
int load(char text[20][40]){
	FILE *fp;
	SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

	char name[] = "base.txt";
	if ((fp = fopen(name, "r")) == NULL){
    	printf("Not open File");
    	getchar();
    	return 0;	
  	}
  	for(int i = 0; i < 20; i++)	
  		fgets(text[i],40,fp);
	fclose(fp);
	return 1;
}