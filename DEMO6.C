#include<stdio.h>
#include<conio.h>

	void sum1();//no params and no return type
	void sum2(int a, int b);//with params and no return type
	int sum3();//no params and with return type
	int sum4(int a, int b);//with params and with return type

	void main()
	{
		clrscr();
			printf("\n\ntype 1:");
			sum1();

			printf("\n\ntype 2:");
			sum2(4,5);

			printf("\n\ntype 3:");
			printf("%d",sum3());

			printf("\n\ntype 4:");
			printf("%d",sum4(4,5));
		getch();

	}

	void sum1()//no params and no return type
	{
		int a,b;
		printf("\n\tEnter a and b:");
		scanf("%d %d",&a,&b);
		printf("\n\n\tAddition is %d",a+b);
	}

	void sum2(int a, int b)//with params and no return type
	{

		printf("\n\n\tAddition is %d",a+b);

	}

	int sum3()//no params and with return type
	{

		int a,b;
		printf("\n\tEnter a and b:");
		scanf("%d %d",&a,&b);
		return a + b;
	}
	int sum4(int a, int b)//with params and with return type
	{

		return a+b;
	}

