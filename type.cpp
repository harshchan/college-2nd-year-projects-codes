#include<stdio.h>
int main(int argc, char* argv[])
{
	char ch;
	if(argc!=2)
	{
		printf("Wrong number of perameters entered. ");
		return 0;
	}
	FILE *fptr1=fopen(argv[1],"r");
	
	if(fptr1==NULL)
	printf("Error in opening source file.");
	
	ch=fgetc(fptr1);
	while(ch!=EOF)
	{
		fputchar(ch);
		ch=fgetc(fptr1);
	}
	
	if(feof(fptr1))
	printf("End of source file reached.");
	else
	printf("Error with EOF");
	
	fclose(fptr1);
	
		getchar();
	
}
