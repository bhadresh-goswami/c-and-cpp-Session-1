	#include<iostream.h>
	#include<conio.h>

	class basicVar{
		public:
			int sa;
			static int st;
			basicVar()
			{
				sa = 0;
				basicVar::st++;
			}

			void display()
			{
				cout<<"\n\tvalue of simple var is "<<sa;

			}
	};
	int basicVar::st = 0;

	void main()
	{
		basicVar a,b,c,d;
		clrscr();
			a.sa++;
			a.sa++;
			a.sa++;

			b.sa++;

			c.sa++;

			d.sa++;

			a.display();
			b.display();
			c.display();
			d.display();

			cout<<"\n\tvalue of static var is "<<basicVar::st;		getch();
	}