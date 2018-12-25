
	#include<iostream.h>
	#include<conio.h>


	//inheritance
	//a->b:single level
	//a->b->c:multi level
	//a->c, b->c multiple :advance langunage not supported

	class class1{
		private:
			int a;
		public:
			void seta()
			{
				cout<<"\n\n\tSet value a:\t";
				cin>>a;
			}


		protected:
			int b;

	};

	class class2:public class1{
		private:
			int c;
		public:
			void setb()
			{
				cout<<"\n\n\tb From Class 1 will set in class 2:";
				cin>>b;
			}
			void setc(int x)
			{
				c = x;

			}
			void display()
			{
				cout<<"\n\tvalue of b:"<<b<<"\t\tvalue of c:"<<c;
			}

	};




	void main()
	{

		class2 c2;
		class1 c1;
		clrscr();
			c1.seta();
			c2.setb();//b from class1 is protected so we can access in class 2
			c2.setc(22);
			c2.display();
		getch();

	}