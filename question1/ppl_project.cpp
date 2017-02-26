#include<string>
#include<iostream>
#include<stdlib.h>
#include"fread.h"
#include"fwrite.h"
using namespace std;

int main()
{
	int i, ng=rand()%6+10 , nb=rand()%10+16;
	girl g[ng];
	boy b[nb] ;
	randomdata(nb,ng);
        putdata(g,b,nb,ng);
	couple(g,b,ng,nb);
       
	for(i=0;i<ng;i++)
		if(g[i].status>=0) 
			cout<<g[i].name<<"\t"<<b[g[i].status].name<<endl;		 
	return 0;
}
