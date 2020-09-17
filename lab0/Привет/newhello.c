Задание №2



#include <iostream>

#include <cmath>

using namespace std;


template<typename T>

void print(T Number)

{

cout << "unsigned hex: " << hex << (unsigned short)Number << endl << "unsigned dec: " << dec << (unsigned short)Number << endl;

cout << "signed dec: " << dec << (short)Number << endl << "binary: " << bitset<16>(Number) << endl;}


int main()

{

int x = -2;

int y = pow(2, 14) + 1;

cout << "-2: \n";

print(x);

cout << "\n2^14 + 1: \n";

print(y);


return 0;


}



x = -2:

unsigned hex: fffe

unsigned dec: 65534

signed dec: -2

binary: 1111111111111110



x = 2^14 + 1:

unsigned hex: 4001

unsigned dec: 16385

signed dec: 16385

binary: 0100000000000001



Задание №3


#include <iostream>

#include <bitset>

#include <climits>

using namespace std;



template<typename T>

void print(T Number)

{

cout << "unsigned hex: " << hex << (unsigned short)Number << endl << "unsigned dec: " << dec << (unsigned short)Number << endl;

cout << "signed dec: " << dec << (short)Number << endl << "binary: " << bitset<16>(Number) << endl;

}

int main()

{

cout << "USHRT_MAX: \n";

print(USHRT_MAX);

cout << "UINT_MIN: \n";

print(0);

cout << "INT_MAX: \n";

print(SHRT_MAX);

cout << "INT_MIN: \n";

print(SHRT_MIN);


return 0;


}



USHRT_MAX:

unsigned hex: ffff

unsigned dec: 65535

signed dec: -1

binary: 1111111111111111

USHRT_MIN:

unsigned hex: 0

unsigned dec: 0

signed dec: 0

binary: 0000000000000000

SHRT_MAX:

unsigned hex: 7fff

unsigned dec: 32767

signed dec: 32767

binary: 0111111111111111

SHRT_MIN:

unsigned hex: 8000

unsigned dec: 32768

signed dec: -32768

binary: 1000000000000000

Задание №4 -5



#include <iostream>

#include <bitset>

#include <cmath>

using namespace std;

template <typename T>

void Show(T x, T y)

{

cout << "System 1: " << "hex : "<< hex << (T)x << "\t" << "dec : " << dec << (T)x << endl;

cout << "System 2: " << "hex : "<< hex << (T)y << "\t" << "dec : " << dec << (T)y << endl;

cout << "----------" << endl;

}

template <typename T>

T Conjunction(T x,T y)

{

return (x&y);

}

template <typename T>

T Disjunction(T x,T y)

{

return (x|y);

}

template <typename T>

T Not(T x)

{

return ~x;

}



template <typename T>

void print(T x,T y)

{

cout <<"Unary operations:\n" << "\nNegation:\n" << endl;

cout << "~x:" << "\tDec: " << dec << T(~x) << "\tHex: " << hex << T(~x) << endl;

cout << "neg(x)" << "\tDec: " << dec << T(-x) << "\tHex: " << hex << T(-x)<< endl;

cout << "\nLogic operations:\n" << "\nLog left:\n";

cout << "x<<y:" << "\tDec: " << dec << T(x<<y) << "\tHex: " << hex << T(x<<y) << endl;

cout << "Log right:\n";

cout << "x>>y:" << "\tDec: " << dec << T(x>>y) << "\tHex: " << hex << T(x>>y) << endl << endl;

}



template<typename T>

T Xor(T x, T y)

{

return x^y;

}



int main()

{

cout << "--------------Unsigned-------------------" << endl;

unsigned short int xu1, yu1, xu2, yu2;

xu1 = 0x8008;

yu1 = 0x1111;

xu2 = 0x0005;

yu2 = 0x0002;

cout << "Binary operations: " << endl;

cout <<"Conjunction: " << endl;

Show(Conjunction(xu1,yu1),Conjunction(xu2,yu2));

cout <<"Disjunction: " << endl;

Show(Disjunction(xu1,yu1),Disjunction(xu2,yu2));

cout <<"Sum2: " << endl;

Show(Xor(xu1,yu1),Xor(xu2,yu2));

cout << "System 1: " << endl << endl;

print(xu1,yu1);

cout << "System 2: " << endl << endl;

print(xu2,yu2);



cout << "---------------Signed--------------------" << endl;

signed short int x1, y1, x2, y2;

x1 = 0x8008;

y1 = 0x1111;

