#include<iostream>
#include<stdlib.h>
#include<stdio.h>
void randomdata(int nb,int ng) {
	int ATTR,INT_LEVEL,MAINT_BUDGET,CRITERION,STATUS,MIN_ATTR,GF_BUDGET;
	int i,j;
        char *name;
	FILE *fr1;
        FILE *fr2;
	fr2=fopen("random_boy.txt","w") ;
	for(i=0;i<nb;i++) {
		name=(char*)malloc(11*sizeof(char));
		for(j=0;j<10;j++)
		      name[j]=rand()%26+65;
		name[j]='\0';
		ATTR=rand() % 10 + 1 ;
		MIN_ATTR=rand() % 10 + 1 ;
	        INT_LEVEL=rand() % 10 + 1 ;
		GF_BUDGET=rand() % 4001 + 2000 ;
		STATUS=-1;
		fprintf(fr2,"%s %d %d %d %d %d\n",name,ATTR,MIN_ATTR,INT_LEVEL,GF_BUDGET,STATUS);
	}
	fclose(fr2);
	fr1=fopen("random_girl.txt","w") ;
	for(i=0;i<ng;i++) {
		name=(char*)malloc(11*sizeof(char));
		for(j=0;j<10;j++)
		      name[j]=rand()%26+65;
		name[j]='\0';
		ATTR=rand() % 10 + 1 ;
	        INT_LEVEL=rand() % 10 + 1 ;
		CRITERION=rand() % 3 + 1 ;
		MAINT_BUDGET=rand() % 4001 + 500 ;
		STATUS=-1;
		fprintf(fr1,"%s %d %d %d %d %d\n",name,ATTR,INT_LEVEL,MAINT_BUDGET,CRITERION,STATUS);
	}
	fclose(fr1);
		
}
