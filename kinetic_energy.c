#include<stdio.h>
int main()
{
	int mass,vel,Kinetic_Energy;
	printf("Enter the mass:");
	scanf("%d",&mass);
	printf("Enter the velocity:");
	scanf("%d",&vel);
	Kinetic_Energy=(mass*vel*vel)/2;
	printf("The kinetic energy is:%d",Kinetic_Energy);
	return 0;	
}