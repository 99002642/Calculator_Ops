#include <calculator_operations.h>
int isprime(int operand1);

int addition(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtra(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multi(int operand1, int operand2)
{
    return operand1 * operand2;
}

int division(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}


int primenum(int operand1)
{
  int result = isprime(operand1);
  return result;
}

int isprime(int operand1)
{
	int i;
   for(i=2;i<operand1;i++)
  /* checks prime number */
  if(operand1%i== 0)
    break;
  /* Return 1 for prime number */
  if(i>operand1/2)
  return -1;
  else
  return 1;
}
int positivenum(int operand1)
{
	if(operand1>0)
		return 1;
}
int negativenum(int operand1)
{
	if(operand1<0)
		return -1;
}
int iszero(int operand1)
{
	if(operand1==0)
		return 0;
}
int modulo(int operand1, int operand2)
{
    return operand1 % operand2;
}
int evennum(int operand1)
{
	if(operand1%2==0)
	{
		return 1;
	}
}
int oddnum(int operand1)
{
	if(operand1%2==1)
	{
		return 1;
	}
}
int percent(int operand1, int operand2)
{
    return (operand1*100 /operand2);
}
int fact(int operand1)
{
  /* Return -1 for negative numbers */
  if(operand1 < 0)
    return -1;

  /* Return 1 for 0 */
  if(operand1 == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return operand1 * fact(operand1-1);
}
float area_p (float operand1, float operand2)
{
	float area_p = operand1*operand2;
	return area_p;
}

	
