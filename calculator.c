#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int ch;
	while(1)
	{
		printf("\n1.Basic math calculation(Addition,Subtraction,Multiplication,Division)\n2.Exchange Rate(covert from dollar to rupees and rupees to dollar)\n3.calculate age\n4.calculate perimeter and area\n5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				basic_calculator();
				break;
			case 2:
				exchange_rate();
				break;
			case 3:
				calculate_age();
				break;
			case 4:
				calculate_perimeterandarea();
				break;
			case 5:
				exit(0);
			default:
				printf("invalid choice!!");
		}
	}
}
void basic_calculator()
{
	int ch1,a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
	printf("Enter your choice");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			printf("Addition is %d",a+b);
			break;
		case 2:
			printf("Subtraction is %d",a-b);
			break;
		case 3:
			printf("Multiplication is %d",a*b);
			break;
		case 4:
			printf("Division is %d",a/b);
			break;
		case 5:
			exit(0);
		default:
			printf("invalid choice");
			
	}
}
void exchange_rate()
{
	int ch2;
	float rupees,dollar;
	printf("\n1.Rupees to dollar\n2.dollar to rupees\n3.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
			printf("\nEnter Rupees:");
			scanf("%f",&rupees);
			dollar=rupees/83.1138;
			printf("\nDollar form of %f rupees is: %f",rupees,dollar);
			break;
		case 2:
			printf("\nEnter dollar:");
			scanf("%f",&dollar);
			rupees=dollar*83.1138;
			printf("\nRupees form of %f dollar is: %f",dollar,rupees);
			break;
		case 3:
			exit(0);
		default:
			printf("Invalid choice");
	}
	
}
void calculate_age()
{
	int present_yr,birth_yr;
	int age;
	printf("Enter present year:");
	scanf("%d",&present_yr);
	printf("\n Enter birth year:");
	scanf("%d",&birth_yr);
	age=present_yr-birth_yr;
	printf("\nYour age is %d years",age);
}
void calculate_perimeterandarea()
{
	int ch;
	float l,b,c,a,h,r,s,area,perimeter;
	printf("\n1.Triangle\n2.rectangle\n3.square\n4.circle\n5.exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter 3 sides of triangle: ");
			scanf("%f%f%f",&a,&b,&c);
			s=(a+b+c)/2;
			area=sqrt((s*(s-a)*(s-b)*(s-c)));
			perimeter=a+b+c;
			printf("\nArea= %f",area);
			printf("\nPerimeter= %f",perimeter);
			break;
		case 2:
			printf("\nEnter length and breath:");
			scanf("%f%f",&l,&b);
			area=l*b;
			perimeter=2*(a+b);
			printf("\nArea= %f",area);
			printf("\nPerimeter= %f",perimeter);
			break;
		case 3:
			printf("\nEnter length: ");
			scanf("%f",&l);
			area=l*l;
			perimeter=4*l;
			printf("\nArea= %f",area);
			printf("\nPerimeter= %f",perimeter);
			break;
		case 4:
			printf("\nEnter radius: ");
			scanf("%f",&r);
			area=r*r*3.14;
			perimeter=2*3.14*r;
			printf("\nArea= %f",area);
			printf("\nPerimeter= %f",perimeter);
			break;
		case 5:
			exit(0);
		default:
			printf("invalid choice");
	}
}

