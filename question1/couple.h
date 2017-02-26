#include<iostream>
#include"girl.h"
#include"boy.h"
void couple(girl g[],boy b[],int ng,int nb) 
{
	int i,j,maxim,index;
	for(i=0;i<ng;i++) {
		if(g[i].status==-1) {
			maxim=0;
			index=-1;
			switch(g[i].criterion) {
				case 1 :    //criterion=1 for most INTELLIGENT criteria of girl
				            for(j=0;j<nb;j++)                                                     
                                 if(b[j].status==-1 && b[j].min_attr<=g[i].attr && g[i].maint_budget<=b[j].gf_budget && maxim<b[j].int_level) {
                                            index=j;                                 	
                                            maxim=b[j].attr;
                                 	
				}
					break;			
		        case 2 :    //criterion=2 for most RICH criteria of girl 
				            for(j=0;j<nb;j++)                                                     
                                 if(b[j].status==-1 && b[j].min_attr<=g[i].attr && g[i].maint_budget<=b[j].gf_budget && maxim<b[j].gf_budget) {
                                 	index=j;
					maxim=b[j].gf_budget;
				}
				break;
			case 3 :    //criterion=3 for most ATTRACTIVE criteria of girl
				             for(j=0;j<nb;j++)                                                     
                                 if(b[j].status==-1 && b[j].min_attr<=g[i].attr && g[i].maint_budget<=b[j].gf_budget && maxim<b[j].attr) {
                                 	index=j;
					maxim=b[j].attr;
				 }
					    break;            
			}
			if(index != -1){
			g[i].status=index;
			b[index].status=i;
		}
		}
		
	}	
}
