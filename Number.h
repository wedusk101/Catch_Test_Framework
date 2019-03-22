#ifndef NUMBER_H__
#define NUMBER_H__

class Number
{
	int number;
	
	public:
		Number(const int &n_) : number(n_) {}
		Number() : number(0) {}
		
		bool isPrime() const;
		bool isPrime(const int &) const;
};

#endif
	