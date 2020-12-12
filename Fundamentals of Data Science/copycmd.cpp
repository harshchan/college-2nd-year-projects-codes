#include<stdio.h>
int main(int argc, char* argv[])
{
	char ch;
	if(argc!=3)
	{
		printf("Wrong number of perameters entered. ");
		return 0;
	}
	FILE *fptr1=fopen(argv[1],"r");
	FILE *fptr2=fopen(argv[2],"w");
	
	if(fptr1==NULL)
	printf("Error in opening source file.");
	
	if(fptr2==NULL)
	printf("Error in opening destination file.");
	
	ch=fgetc(fptr1);
	while(ch!=EOF)
	{
		fputc(ch,fptr2);
		ch=fgetc(fptr1);
	}
	
	if(feof(fptr1))
	printf("End of source file reached.");
	else
	printf("Error with EOF");
	
	printf("File successfully copied.");
	
	fclose(fptr1);
	fclose(fptr2);
	
	getchar();
	
}
