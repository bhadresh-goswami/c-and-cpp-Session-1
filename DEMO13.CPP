
	#include<iostream.h>
	#include<conio.h>

	class parent{
		public:
			int a,b;
			virtual void sum()
			{

				a = 4;
				b = 3;
				cout<<"\n\tThe sum of 4 + 3 is "<<4+3;

			}
			void sum(int a)
			{
				this->a = a;
				b = 4;
				cout<<"\n\tThe sum of "<<this->a<<" + 4 is "<<this->a+3;


			}

	};

	class child:public parent{
		public:
			virtual void sum()
			{

				a = 3;
				b = 3;
				cout<<"\n\tThe sum of 4 + 3 is "<<4+3;

			}
	};

	void main()
	{
		parent p1;
		child c1;

		clrscr();
			p1.sum();
			p1.sum(5);
			c1.sum();
		getch();
	}