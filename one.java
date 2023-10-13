import java.util.Scanner;
class Circle
{
	int radius;
	double area,perimeter;
	void getarea()
	{
	area=3.14 * radius * radius;
	System.out.println("the area of the cirle is"+area);
	}
	void getperimeter()
	{
	perimeter=3.14 * 2 * radius;
	System.out.println("the perimeter of the cirle is"+perimeter);
	}
	};
		class Main
		{
		public static void main(String[]args)
		{
		Circle obj=new Circle();
		Scanner radi=new Scanner(System.in);
		obj.radius=radi.nextInt();
		obj.getarea();
		obj.getperimeter();
		}
		}
		
