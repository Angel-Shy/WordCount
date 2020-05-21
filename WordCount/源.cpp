#include<stdio.h>
#include <stdlib.h>
int main(char argc, char** argv)
{
	FILE *fp;
	char ch;
	int nums = 0;
	char* parameter = argv[1];
	char* file_name = argv[2];
	
	if ((fp = fopen(file_name,"r")) == NULL)
	{
		printf("not open");
		exit(0);
	}if (parameter[1] == 'c') {
		while ((ch = fgetc(fp)) != EOF) {
			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == ' ' || ch == '\t' || ch == '\n') ++nums;
		}
		printf("×Ö·ûÊý£º%d", nums);
	}
	else if (parameter[1] == 'w') {
		while ((ch = fgetc(fp)) != EOF) {
			if (ch == ' ' || ch == ',') ++nums;
		}
		printf("µ¥´ÊÊý£º%d", nums + 1);
	}
	fclose(fp);
	return 0;
}
