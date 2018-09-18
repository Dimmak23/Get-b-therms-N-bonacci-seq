#include <iostream>

// Recursive function for getting each therm of
// sequence step by step 
int getFibonacci(int a, int b)
{
	int sum = 0;
	// Gentlly handle starter 0 and 1 of sequences.
	// Obviously, we can find pattern here:
	// For 2-Fibonacci {0,1,...}
	// For 3-Fibonacci {0,0,1,...}
	// For 4-Fibonacci {0,0,0,1,...}
	if (b < (a-1)) sum = 0;
	if (b == (a-1)) sum = 1;
	// For other else request would be actual
	// calculation of numbers:
	if (b >= a)
		for (int j = 1; j <= a; j++)
			sum += getFibonacci(a, (b-j));
	return sum;
}

// Main function starts here:
int main()
{
	// Declaration of variables
	int a, b;

	// First things first, so here we input range of
	// Fibonacci sequence, for 2 it's would be sum of
	// 2 step numbers, for sum of 3 and so go on
	std::cout<<"\nEnter type of Fibonacci sequence: ";
	std::cin >> a;

	// Then we input how many numbers we want to be
	// printed
	std::cout<<"\nEnter how many therms: ";
	std::cin >> b;

	// Here actual result outputed:
	std::cout << "\nThere are a first " << b << " numbers from " << a;
	std::cout << "-Fibonacci sequence:" << std::endl;
	std::cout << "\n{ ";
	for(int i=0; i<b; i++) std::cout << getFibonacci(a, i) << " ";
	std::cout << "};\n";	
}
