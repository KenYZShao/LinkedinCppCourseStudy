//#include<cstdio>
//#include<new> //Even remove this line, still working
//using namespace std;
//typedef unsigned char points_t;
//typedef unsigned char rank_t;
/* //Practice Chapter 03
struct score {
	points_t p;
	rank_t r;
};

int main()
{
	score s = { 5,1 };
	printf("score s has %d points and rank of %d\n", s.p, s.r);
}
*/
/*// Chapter 4.1
int main()
{
	int x = 5;
	int y = 47;
	int z;
	x = y % x;
	z = +y;
	//z = +z;
	printf("x is %d\n", x);
	printf("y is %d\n", y);
	printf("z is %d\n", z);

	return 0;
}
*/

//Ternary Operator
/*
int main()
{
	int x = 5;
	int y = 42;
	const char* s = x > y ? "yes" : "no";

	puts(s);
	return 0;
}
*/

//New-delete.cpp
/*
using namespace std;

constexpr size_t count = 10240000;

int main() {
	printf("allocate space for %lu long int at *ip with new\n", count);

	//allocate array
	long int* ip;

	try {
		ip = new long int[count];
	}
	catch (std::bad_alloc& ba) {
		fprintf(stderr, "Cannot allocate memory(%s)\n", ba.what());
		return 1;
	}

	//initialize array
	for (long int i = 0; i < count; i++) {
		ip[i] = i;
	}
	//print array
	for (long int i = 0; i < count; ++i)
	{
		printf("%ld\t", ip[i]);
	}
	puts("");

	//deallocate array
	delete[] ip;
	puts("space at *ip deleted");

	return 0;
}
*/

/*
//Size of
int main()
{
	//int x = 500000000000000; //Practice 001
	//size_t y = sizeof x;//Practice 001
	//printf("size of x is %zd\n", sizeof(int));//Practice 001

	struct X {
		//int a;
		int b;
		char c;
		char d;
		//long long int e;
		//long long int f;
	};
	printf("Size of x is %zd\n", sizeof(X)); //int char size 或非线性
}
*/

/**********************************************************************************************/
//If you want to make above code works, you need to uncommend the #include stuffs, because I started a new #include stuffs below.

/*
//
#include<cstdio>
#include<typeinfo>
#include<string>
using namespace std;

struct A { int x; };
struct B { int x; };

A al;
B bl;

int main()
{
	printf("type is %s\n", typeid(string).name());
	if (typeid(bl) == typeid(A)) {
		puts("same");
	}
	else {
		puts("different");
	}
	return 0;
}
*/

/*
//Function
#include<cstdio>
using namespace std;

void func();

int main()
{
	puts("this is main()");
	func();
	return 0;
}

void func()
{
	puts("this is func()");
}
*/

//Test Function
/*
#include<cstdio>
using namespace std;

void func(int i)
{
	i = 73;
	printf("in func() the value is %d\n", i);
}

int main()
{
	int i = 42;
	puts("this is main()");
	func(i);
	printf("after func() i is %d\n", i);
	return 0;
}
*/

/*//Try and Catch
#include<cstdio>
using namespace std;

const char* prompt();
int jump(const char*);

void fa() { puts("this is fa()"); }
void fb() { puts("this is fb()"); }
void fc() { puts("this is fc()"); }
void fd() { puts("this is fd()"); }
void fe() { puts("this is fe()"); }

void (*funcs[])() = { fa,fb,fc,fd,fe };

int main() {
	while (jump(prompt()));
	puts("\nDone.");
	return 0;
}

const char* prompt()
{
	puts("Choose an option:");
	puts("1.Function fa()");
	puts("2.Function fb()");
	puts("3.Function fc()");
	puts("4.Function fd()");
	puts("5.Function fe()");
	puts("Q.Quit.");
	printf(">> ");
	fflush(stdout);

	const int buffsz = 16;
	static char response[buffsz];
	fgets(response, buffsz, stdin);

	return response;
}

int jump(const char* rs) {

	char code = rs[0];
	if (code == 'q' || code == 'Q') return 0;

	//get the length of the funcs array
	int func_length = sizeof(funcs) / sizeof(funcs[0]);

	int i = (int)code - '0';
	if (i<1 || i>func_length) {
		puts("invalid choice");
		return 1;
	}
	else {
		funcs[i - 1]();
		return 1;
	}

}
*/

//recursion
/*
#include<cstdio>
using namespace std;

unsigned long int factorial(unsigned long int n) {
	if (n < 2) return 1;
	return factorial(n - 1) * n;
}

int main() {
	unsigned long int n = 5;
	printf("Factorial of %ld is %ld\n", n, factorial(n));
	return 0;
}
*/

//Defining a class
/*
#include<cstdio>
using namespace std;

// a very simple class
class C1 {
	int i = 0;
public:
	void setvalue(int value);
	int getvalue();
};
	void C1::setvalue(int value) {
		i = value;
	}

	int C1::getvalue() {
		return i;
	}

	int main() {
		int i = 47;
		C1 o1;

		o1.setvalue(i);
		printf("value is %d\n", o1.getvalue());
		return 0;
	}
*/

//Data members
/*
#include <cstdio>
using namespace std;

struct A {
	int ia;
	int ib;
	int ic;
};

int main()
{
	A a = { 1, 2, 3 };
	printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);
	return 0;
}
*/

//Constructor
/*
#include<cstdio>
#include<string>
using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone-";

//--interface--
class Animal {
	string _type = unk;
	string _name = unk;
	string _sound = unk;
public:
	Animal();
	Animal(const string& type, const string& name, const string& sound);
	Animal(const Animal&);
	~Animal();//destructor
	void print() const;
};

//--implementation--
Animal::Animal() {
	puts("default constructor");
}

Animal::Animal(const string& type, const string& name, const string& sound)
	:_type(type), _name(name), _sound(sound) {
	puts("constructor with arguments");
}

Animal::Animal(const Animal& a) {
	puts("copy constructor");
	_name = clone_prefix + a._name;
	_type = a._type;
	_sound = a._sound;
}

Animal::~Animal()
{
	printf("destructor:%s the %s\n", _name.c_str(), _type.c_str());
}

void Animal::print() const {
	printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int main() {
	Animal a;
	a.print();

	const Animal b("goat", "bob", "baah");
	b.print();

	const Animal c = b;
	c.print();

	puts("end of main");
	return 0;
}
*/

//Template
/*
#include<cstdio>
using namespace std;

template<typename T>
T maxof(T a, T b){
	return(a > b ? a : b);
}

int main(int argc, char** argv) {
	int m = maxof<int>(7, 9);
	printf("max is:%d\n", m);
	return 0;
}
*/

/*
// template-class.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-30
#include <iostream>
#include <string>
#include <exception>
using namespace std;

// simple exception class
class E : public std::exception {
	const char* msg;
	E() {};    // no default constructor
public:
	explicit E(const char* s) throw() : msg(s) { }
	const char* what() const throw() { return msg; }
};

// simple fixed-size LIFO stack template
template <typename T>
class bwstack {
private:
	static const int defaultsize = 10;
	static const int maxsize = 1000;
	int _size;
	int _top;
	T* _stkptr;
public:
	explicit bwstack(int s = defaultsize);
	~bwstack() { delete[] _stkptr; }
	T& push(const T&);
	T& pop();
	bool isempty() const { return _top < 0; }
	bool isfull() const { return _top >= _size - 1; }
	int top() const { return _top; }
	int size() const { return _size; }
};

// Stack<T> constructor
template <typename T>
bwstack<T>::bwstack(int s) {
	if (s > maxsize || s < 1) throw E("invalid stack size");
	else _size = s;
	_stkptr = new T[_size];
	_top = -1;
}

template <typename T>
T& bwstack<T>::push(const T& i) {
	if (isfull()) throw E("stack full");
	return _stkptr[++_top] = i;
}

template <typename T>
T& bwstack<T>::pop() {
	if (isempty()) throw E("stack empty");
	return _stkptr[_top--];
}

int main(int argc, char** argv) {
	try {
		bwstack<int> si(5);

		cout << "si size: " << si.size() << endl;
		cout << "si top: " << si.top() << endl;

		for (int i : { 1, 2, 3, 4, 5 }) {
			si.push(i);
		}

		cout << "si top after pushes: " << si.top() << endl;
		cout << "si is " << (si.isfull() ? "" : "not ") << "full" << endl;

		while (!si.isempty()) {
			cout << "popped " << si.pop() << endl;
		}
	}
	catch (E& e) {
		cout << "Stack error: " << e.what() << endl;
	}

	try {
		bwstack<string> ss(5);

		cout << "ss size: " << ss.size() << endl;
		cout << "ss top: " << ss.top() << endl;

		for (const char* s : { "one", "two", "three", "four", "five" }) {
			ss.push(s);
		}

		cout << "ss top after pushes: " << ss.top() << endl;
		cout << "ss is " << (ss.isfull() ? "" : "not ") << "full" << endl;

		while (!ss.isempty()) {
			cout << "popped " << ss.pop() << endl;
		}
	}
	catch (E& e) {
		cout << "Stack error: " << e.what() << endl;
	}

	return 0;
}
*/

/*//C++ Template-class
#include<iostream>
using namespace std;
class CRectangle
{
public:
	int w, h;
	void init(int w_, int _h);
	int area();
	int perimeter();
};

void CRectangle::init(int w_, int h_)
{
	w = w_; h = h_;
}

int CRectangle::area() {
	return w * h;
}

int CRectangle::perimeter()
{
	return (2*(w + h));
}

int main()
{
	int w, h;
	CRectangle r;
	cin >> w >> h;
	r.init(w, h);
	cout << "It's area is " << r.area() << endl;
	cout << "It's perimeter is " << r.perimeter();
	cout << "\n" << endl;
	cout << sizeof(CRectangle) << endl;
	return 0;
}
*/

/*//Reviewing the Class https://www.runoob.com/cplusplus/cpp-classes-objects.html
#include<iostream>

using namespace std;

class Box
{
public:
	double length;
	double breath;
	double height;

	double get(void);
	void set(double len, double bre, double hei);
};

double Box::get(void)
{
	return length * breath * height;
}

void Box::set(double len, double bre, double hei)
{
	length = len;
	breath = bre;
	height = hei;
}

int main()
{
	Box Box1;
	Box Box2;
	Box Box3;
	double volume = 0.0;

	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breath = 7;

	Box2.height = 10;
	Box2.length = 12;
	Box2.breath = 13;

	volume = Box1.height * Box1.length * Box1.breath;
	cout << "Box1 的体积:" << volume << endl;

	volume = Box2.height * Box2.length * Box2.breath;
	cout << "Box2的体积：" << volume << endl;

	Box3.set(16, 8, 12);
	volume = Box3.get();
	cout << "Box3的体积：" << volume << endl;
	return 0;
}
*/

/*
//6.2 Defining a Class
#include<cstdio>
using namespace std;

class C1 {
	int i = 0;
public:
	void setValue(int value);
	int getValue();
};

void C1::setValue(int value) {
	i = value;
}

int C1::getValue() {
	return i;
}
int main()
{
	int i = 54;
	C1 o1;

	o1.setValue(i);
	printf("value is %d\n", o1.getValue());
	return 0;
}
*/

/*
//8.4 File management
#include<cstdio>
using namespace std;

int main()
{
	static const char* fn1 = "file1";
	static const char* fn2 = "file2";
	//FILE* fh = fopen(fn1, "w");
	//fclose(fh);
	rename(fn1, fn2);
	remove(fn2);

	puts("Done.");
	return 0;
}
*/

/*
//8.5Unformatted character
#include<cstdio>
using namespace std;
int main()
{
	const int bufsize = 256;
	static char buf[bufsize];
	fputs("prompt:", stdout);
	fflush(stdout);
	fgets(buf, bufsize,stdin);
	fputs(buf, stdout);
	return 0;
}
*/

//8.6Formatted character I/O
/*
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	int i = 5;
	long int li = 1234567890;
	const char* s = "This is a string.";
	printf("i is %d, li is %ld, s is %s\n", i, li, s);//%zd is for size d.
	fprintf(stdout,"i is %d, li is %ld, s is %s\n", i, li, s);//Outputs the same as above line

}
*/

//8.7 String functions
/*
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	const static size_t maxbuf = 128;
	const char* s1 = "String one";
	const char* s2 = "String two";
	char sd1[maxbuf];
	char sd2[maxbuf];
	int i = 0;
	char c = 0;
	char* cp = nullptr;

    //strncpy--copy a string
	strncpy(sd1, s1,maxbuf);
	printf("sd1 is %s\n", sd1);
	strncpy(sd2, s2, maxbuf);
	printf("sd2 is %s\n", sd2);

	//strncat--concatenate string
	strncat(sd1, "-", maxbuf - strlen(sd1) - 1);
	strncat(sd1, s2, maxbuf - strlen(sd1) - 1);
	printf("sd1 is %s\n", sd1);

	//strnlen--get length of string
	printf("length of sd1 is %zd\n", strnlen(sd1, maxbuf));
	printf("length of sd2 is %zd\n", strnlen(sd2, maxbuf));

}
*/
//8.8.1 Handing System errors
//#include<cstdio>
//#include<cstring>
//#include<cerrno>
//
//int main()
//{
//	printf("errno is:%d\n",errno);
//	printf("Erasing file foo.bar\n");
//	remove("foo.bar");
//	printf("errno is： %d\n", errno);
//	perror("Cannot erase file");
//	
//	return 0;
//}
//8.8.2
//#include<cstdio>
//#include<cstring>
//#include<cerrno>
//
//int main()
//{
//	printf("errno is:%d\n", errno);
//	printf("Erasing file foo.bar\n");
//	remove("foo.bar");
//	printf("errno is： %d\n", errno);
//	//perror("Cannot erase file");
//	const char* errstr = strerror(errno);
//	//printf("The error string is: %s\n", errstr);
//	printf("Tried to erase a file and this happened: %s\n", errstr);
//	return 0;
//}


//9 Standard Template Library STL
/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	cout <<"Vector from initializer list:" << endl;
	vector<int> vil = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "size:" << vil.size() << endl;
	cout << "front:" << vil.front() << endl;
	cout << "back:" << vil.back() << endl;

	//iterator
	cout << endl << "Iterator:" << endl;
	vector<int>::iterator itbegin = vil.begin();
	vector<int>::iterator itend = vil.end();
	for (auto it = itbegin; it < itend; ++it) {
		cout << *it <<'"';
	}
	cout << endl;

	cout << endl << "Index:" << endl;
	cout << "element at 5:" << vil[5] << endl;
	cout << "element at 5:" << vil.at(5) << endl;

	cout << endl << "Range-based for loop:" << endl;
	for (int& i : vil) {
		cout << i << "";
	}
	cout << endl;

	cout << endl << "Insert 42 at begin +5: " << endl;
	vil.insert(vil.begin() + 5, 42);
	cout << "size:" << vil.size() << endl;
	cout << "vil[5]:" << vil[5] << endl;

	cout << "Erase at begin +5:" << endl;
	vil.erase(vil.begin() + 5);
	cout << "size:" << vil.size() << endl;
	cout << "vil[5]:" << vil[5] << endl;

	cout << "push_back 47:" << endl;
	vil.push_back(47);
	cout << "size:" << vil.size() << endl;
	cout << "vil.back()" << vil.back() << endl;

	cout << "Range-based for loop:" << endl;
	for (int& v : vil) {
		cout << v << " ";
	}
}
*/

//9.4 iostream
/*
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	//cout and cin to get a string
	string istr;
	cout << "Prompt: ";
	//cin >> istr;
	char buf[128];
	cin.getline(buf, sizeof(buf));
	//cout << "Input: " << istr << endl;
	cout << "Input: " << buf << endl;

}
*/

//9.5 Handling exceptions
#include<iostream>
#include<exception>
using namespace std;

class E : public exception {
	const char* msg;
	E();
public:
	E(const char * s)throw() : msg(s){}
	const char * what()const throw() { return msg; }
};

const E e_ouch("ouch!");
const E e_bad("bad code!");
const E e_worse("don't do that!");

void broken() {
	cout << "this is a broken function" << endl;
	//throw exception();
	throw E("ouch!");
	throw e_worse;//Only the first throw will be printed
}

int main() {
	cout << "let's have an emergency!" << endl;

	try {
		broken();
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	
	return 0;
}