#include<stdio.h>
int main()
{
	int mass,acc,force;
	printf("Enter the mass:");
	scanf("%d",&mass);
	printf("Enter the acceleration:");
	scanf("%d",&acc);
	force=mass*acc;
	printf("The force is:%d",force);
	return 0;
}