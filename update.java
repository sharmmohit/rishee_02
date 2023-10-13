// Java program to compute GCD 
// of two numbers using Euclid's
// repeated division approach
import java.io.*;
import java.util.*;

class GFG {

	// gcd method returns the GCD of a and b
	static int gcd(int a, int b)
	{
		// if b=0, a is the GCD
		if (b == 0)
			return a;

		// call the gcd() method recursively by
		// replacing a with b and b with
		// modulus(a,b) as long as b != 0
		else
			return gcd(b, a % b);
	}
	// Driver method
	public static void main(String[] args)
	{
		int a = 20, b = 30;

		// calling gcd() over
		// integers 30 and 20
		System.out.println("GCD = " + gcd(a, b));
	}
}
