#include "en.h"
int load(char text[20][40],char name[8]){
	FILE *fp;
	
	if ((fp = fopen(name, "r")) == NULL){
    	printf("Not open File");
    	return 0;	
  	}
  	for(int i = 0; i < 20; i++)	
  		fgets(text[i],40,fp);
	fclose(fp);
	return 1;
}
int check(char text[20][40],int n,char texts[40],int d){

	for(int i = 0; i < d+1; i++){
		if(text[n][i] != texts[i+1]){
			printf("Invalid word");
			return 0;
		}
	}
	printf("Valid word!Good Work!");
	return 1;
}
