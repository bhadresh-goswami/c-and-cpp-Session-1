
	#include<iostream.h>
	#include<conio.h>


	class a{
		public:
			int a_int;
			void calc()
			{
				a_int = a_int * a_int;
			}

	};
	class b{
		public:
			int b_int;
			void calc()
			{
				b_int = b_int / 2;
			}
	};

	class c: public  a,b{

		public:
			void setvalues(int x,int y)
			{
				a_int = x;
				b_int = y;
			}

			void displayvalues()
			{
				cout<<"\n\n\tValue of a:"<<a_int;
				cout<<"\n\n\tValue of b:"<<b_int;

			}

	};


	void main()
	{
		c cObj;

		clrscr();
			cObj.setvalues(3,4);
			cObj.displayvalues();
			/*cObj.calc();//??a,b??

			cObj.displayvalues();*/
		getch();
	}