#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find(FILE *f1);


int main(){
	FILE *f1;
	int i=0;
	printf("Press control-c to exit\n");
	do{
		f1=fopen("currency.dat","w+");
		fprintf(f1,"delete from CURRENCYS where ID = ");
		find (f1);
		fprintf(f1,";\n");
		fprintf(f1,".quit\n");
		fclose(f1);
		printf("................................\n");
		system("sqlite currency.db < currency.dat");
	}while(i==0);
	return 0;
}


void find(FILE *f1){
	char cc[190];
	char *ccc;
	ccc=cc;
	printf("delete id number :? ");
	ccc=fgets(ccc,181,stdin);
	ccc=strstr(ccc,"\n");
	if(ccc!=NULL) ccc[0]=0;
	ccc=cc;
	printf("\n");
	fprintf(f1,"%s",ccc);
	
}

















