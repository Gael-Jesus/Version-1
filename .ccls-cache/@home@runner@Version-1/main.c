#include <stdio.h>
#include <time.h>
//# VERSION 1//

int sum_numbers_v1( int from_number,int to_number)
{
  
  int sum_result =0;

  for(int i=0; i<= to_number;++i)
    sum_result += i;
    
  return sum_result;
}

int main()
{
  int from_number =0;
  int to_number =(int)1e9;

  printf("from_number = %d \n", from_number);
  printf("to_number = %d \n", to_number);

  printf("\nprocessing ...\n");

  clock_t start =clock();
  double result =sum_numbers_v1(from_number, to_number);
  clock_t end =clock();
  double elapsed_time =(end-start)/(double)CLOCKS_PER_SEC ;


  printf("\nsum from %d  to %d is : %d\n", from_number, to_number, result );
  printf("\nprocess took : %f seconds\n", elapsed_time);
  printf("\n\n\n");

  return 0;
  
}