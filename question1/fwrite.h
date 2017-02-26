#include<iostream>
#include"couple.h"
#include<string>
void putdata(girl g[],boy b[],int nb,int ng) {
	char name[12];
	int ATTR,INT_LEVEL,MAINT_BUDGET,CRITERION,STATUS,MIN_ATTR,GF_BUDGET;
	int i,j;
	FILE *fr1;
        FILE *fr2;
	fr1=fopen("random_boy.txt","r") ;
	for(i=0;i<nb;i++) {
		fscanf(fr1,"%s %d %d %d %d %d\n",b[i].name,&ATTR,&MIN_ATTR,&INT_LEVEL,&GF_BUDGET,&STATUS);     //g[i]name's confusion
		b[i].attr=ATTR;
		b[i].min_attr=MIN_ATTR;
	        b[i].int_level=INT_LEVEL;
		b[i].gf_budget=GF_BUDGET;
		b[i].status=STATUS;
	}
	fclose(fr2);
	fr1=fopen("random_girl.txt","r") ;
	for(i=0;i<ng;i++) {
		fscanf(fr1,"%s %d %d %d %d %d\n",g[i].name,&ATTR,&INT_LEVEL,&MAINT_BUDGET,&CRITERION,&STATUS);     //g[i]name's confusion
		g[i].attr=ATTR;
	        g[i].int_level=INT_LEVEL;
		g[i].criterion=CRITERION;
		g[i].maint_budget=MAINT_BUDGET;
		g[i].status=STATUS;
	}
	fclose(fr1);
	
}
