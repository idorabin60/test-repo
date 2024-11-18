#include <iostream>

class Foo
{
private:
	int *p;
	int size;

public:
	Foo(int s, int f)
	{
		size = s;
		p = new int[size];

		for (int i = 0; i < size; i++)
		{
			p[i] = f;
		}
	}
	~Foo()
	{
		delete[] p;
		// this is just a comment
	}
	// Copy constructor
	Foo(const Foo &other)
	{
		size = other.size;
		p = new int[size];

		for (int i = 0; i < size; i++)
		{
			p[i] = other.p[i];
		}
	}
	// Copy Assignement opertator:
	// Supports f = g;

	Foo &operator=(const Foo &other)
	{
		if (this == &other)
			return *this; // Self-assignment check (optional in this case)

		delete[] p;

		size = other.size;
		p = new int[size];
		for (int i = 0; i < size; i++)
		{
			p[i] = other.p[i];
		}
		return *this;

		// No return here
	}
};

int main()
{

	return 0;
}
