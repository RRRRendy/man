// force to use c++11
#if __cplusplus < 201103
#error "Require c++11 or later"
#endif

#include <string>

class string

// returns substr [pos, pos + count)
// if count is too large, returns [pos, size()).
string substr(size_type pos=0, size_type count=npos) const;

// enable conversion to int
operator int() const { ... }

#include <iostream>
#include <gmpxx.h> // -lgmpxx -lgmp
using namespace std;

int main()
{
	mpz_class a, b, c;
	a = 1234;
	b = "-5678";
	c = a + b;
	cout << "sum is " << c << "\n";
	cout << "absolute value is " << abs(c) << "\n";
	return 0;
}

// fast read
inline int read()
{
	int x = 0, sgn = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			sgn = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * sgn;
}
