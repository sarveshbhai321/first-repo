A publishing company deals with marketing of books and audio cassettes. For each
book and the audio cassette the company needs to record a title and price of
publication. Also a page count should be recorded for each book and a play-time in
minutes should be recorded for each cassette.
CO1
Design a suitable class hierarchy. Write a menu driven program that instantiates the
book and tape class, allows users to manipulate and display the information about
books and cassettes. The program should catch exceptions and if an exception is 

import.java.util.Scanner;
public class project
{
	public String []title=new String[];
	public int []price=new int[];
	public int []pagecount[]=new int[];
	public String []audio=new []String;
	public int []playtime=new []int;
public static void main(String[]srgs)
{
		int a,
}
class bookinput extends class project
{
	public void getdata()
	{
	Scanner obj=new Scanner(System.in);
	System.out.println("enter the title");
	title[i]=obj.next();
	System.out.println("enter the price");
	price[i]=obj.nextInt();
	System.out.println("enter the pagecount");
	pagecount[i]=obj.nextInt();
	}
}
class musicinput extends class project
{
	public void music()
	{
	Scanner obj1=new Scanner(System.in);
	System.out.println("enter the cassette name");
	audio[j]=obj1.next();
	System.out.println("enter the playtime");
	playtime[j]=obj1.nextInt();
	}
}
	
	
	

	
		
			
	

