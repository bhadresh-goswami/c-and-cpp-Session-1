	//include section
	#include<stdio.h>
	#include<conio.h>

	//global function declaration part

	void main()
	{
		//var declaration
		//array
		//data_type var_name[size];
		int arr[10],max;
		int i,j;
		clrscr();

			//coding part
			//set values in array
			for ( i = 0 ; i < 10 ; i++ )
			{
				printf("\n\tEnter value at %d:\t",i);
				scanf("%d",&arr[i]);
			}


			//print values from array
			printf("\n\n\tValues :\n\n");
			for ( i = 0 ; i < 10; i++ )
			{
				//printf("\n\tvalue atr arr(%d):\t%d",i,arr[i]);
				printf(" [ %d ], ",arr[i]);
			}

			max = 0;
			for ( i = 0 ; i < 10; i++ )
			{
				for ( j = 0 ; j < 10; j++ )
				{
					if(arr[i]>max)
					{
						max = arr[i];
						//printf("%d,",max);
						break;
					}
				}

			}

			printf("\n\n\tMax value is %d!",max);


			getch();
		}
