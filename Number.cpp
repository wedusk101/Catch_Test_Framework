#include <cstddef>
#include "Number.h"


bool Number::isPrime(const int &num) const
{
	if(num <= 1)
		return false;
	else
	{
		for(std::size_t i = 2; i * i <= num; i++)
			if(num % i == 0)
				return false;
	}
	return true;
}

bool Number::isPrime() const
{
	if(number <= 1)
		return false;
	else
	{
		for(std::size_t i = 2; i * i <= number; i++)
			if(number % i == 0)
				return false;
	}
	return true;
}