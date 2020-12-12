#include<stdio.h>
int main(int argc, char* argv[])
{
	char ch;
	if(argc!=4)
	{
		printf("Wrong number of perameters entered. ");
		return 0;
	}
	FILE *fptr1=fopen(argv[1],"r");
	FILE *fptr2=fopen(argv[2],"r");
	FILE *fptr3=fopen(argv[2],"w");

	
	if(fptr1==NULL)
	printf("Error in opening source file 1.");
	
	if(fptr2==NULL)
	printf("Error in opening source file 2.");
	
	if(fptr3==NULL)
	printf("Error in opening destination file.");

	ch=fgetc(fptr1);
	while(ch!=EOF)
	{
		fputc(ch,fptr3);
		ch=fgetc(fptr1);
	}
	
	ch=fgetc(fptr2);
	while(ch!=EOF)
	{
		fputc(ch,fptr3);
		ch=fgetc(fptr2);
	}
	
	if(feof(fptr1)&&feof(fptr2))
	printf("End of source file reached.");
	else
	printf("Error with EOF");
	
	printf("Files successfully merged.");
	
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	
	getchar();
	
}
