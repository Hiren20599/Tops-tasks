#include <stdio.h>
int main()
{
	int phy,chem,math,total,pmt;
	printf("Enter your  PHYSICS marks: ");
	scanf("%d",&phy);
	printf("Enter your  CHEMISTRY marks: ");
	scanf("%d",&chem);
	printf("Enter your  MATHEMATICS marks: ");
	scanf("%d",&math);
	total=phy+chem+math;
	pmt=phy+math;
	
	if((phy>=55)&&(chem>=50)&&(math>=65))
	{
		if((total>=190)||(pmt>=140))
		{
		printf("You are eligible for addmision in Profesional course!!!!");
		}
		else
	  	{
		printf("SORRY!!!\nYou are not eligible for addmision in Profesional course");
		}
	}
	else
		{
		printf("SORRY!!!\nYou are not eligible for addmision in Profesional course");
		}
	return 0;
}
