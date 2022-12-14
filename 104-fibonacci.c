Skip to content

Search or jump to…

Pull requests

Issues

Marketplace

Explore



@Eniola-rihanat

bdbaraban

/

holbertonschool-low_level_programming

Public

Code

Issues

2

Pull requests

2

Actions

Projects

Security

Insights

holbertonschool-low_level_programming/0x02-functions_nested_loops/104-fibonacci.c

@234761

234761 Cleaned code

Latest commit 60d24c5 on Sep 27, 2018
  
 History
  
 1 contributor
  
  56 lines (48 sloc)  1.04 KB
  

  
/*

 * File: 104-fibonacci.c

 * Auth: Brennan D Baraban

 */
  

  
#include <stdio.h>
  

  
/**

 * main - Prints the first 98 Fibonacci numbers, starting with

 *        1 and 2, separated by a comma followed by a space.

 *

 * Return: Always 0.

 */
  
  int main(void)
  
{
  
  int count;
  
  unsigned long fib1 = 0, fib2 = 1, sum;
  
  unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
  
  unsigned long half1, half2;
  

  
  for (count = 0; count < 92; count++)
    
    {
      
      sum = fib1 + fib2;
      
      printf("%lu, ", sum);
      

      
      fib1 = fib2;
      
      fib2 = sum;
      
    }
  

  
  fib1_half1 = fib1 / 10000000000;
  
  fib2_half1 = fib2 / 10000000000;
  
  fib1_half2 = fib1 % 10000000000;
  
  fib2_half2 = fib2 % 10000000000;
  

  
  for (count = 93; count < 99; count++)
    
    {
      
      half1 = fib1_half1 + fib2_half1;
      
      half2 = fib1_half2 + fib2_half2;
      
      if (fib1_half2 + fib2_half2 > 9999999999)
	
	{
	  
	  half1 += 1;
	  
	  half2 %= 10000000000;
	  
	}
      

      
      printf("%lu%lu", half1, half2);
      
      if (count != 98)
	
	printf(", ");
      

      
      fib1_half1 = fib2_half1;
      
      fib1_half2 = fib2_half2;
      
      fib2_half1 = half1;
      
      fib2_half2 = half2;
      
    }
  
  printf("\n");
  return (0);
}
