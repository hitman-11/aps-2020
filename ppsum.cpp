/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,n,d,sum=0;
		Scanner sc = new Scanner(System.in);
		t=sc.nextInt();
		for(int j=0;j<t;j++)
		{
		    d=sc.nextInt();
		    n=sc.nextInt();
		    for(int i=0;i<d;i++)
			{
				sum=n*(n+1)/2;
				n=sum;
			}
			System.out.println(sum);
		}
	}
}
