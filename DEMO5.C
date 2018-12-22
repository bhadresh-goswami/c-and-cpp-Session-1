	//include section
	#include<stdio.h>
	#include<conio.h>

	//global function declaration part

	void main()
	{
		//var declaration
		//how to declare the variable?
		//data-type variable_name = initial value;
		int a [10];
		int no = 0;
		int i = 0;
		int temp = 0;
		int flag = 0;
		clrscr();

			//coding part
			for(i = 0;i<10;i++)
			{
				printf("\n\tEnter Your Number:\t");
				scanf("%d",&a[i]);
			}

			for(i=0;i<10;i++)
			{
				no = a[i];
				temp = 2;
				flag = 0;
				while(temp<no)
				{
					if(no%temp==0)
					{
						flag = 1;
						break;
					}
					temp++;
				}
				if ( flag == 0)
				{
					printf("\n\n\t%d is prime!",a[i]);
				}
			}

		getch();
	}

	//global function defination part