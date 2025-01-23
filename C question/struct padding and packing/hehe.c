#include<stdio.h>
#pragma pack (1)

struct s1
{
	char name;
	int roll_no;
	char gender;

};


int main()
{
	struct s1 a;
	printf("%d",sizeof(a));
	return 0;
}