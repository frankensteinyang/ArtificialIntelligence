#include <stdio.h>

void test() {
	enum Season {Spring, Summer, Autumn, Winter};
	enum Season s = Winter;

	typedef int Integer;
	typedef Integer MyInteger;
	typedef unsigned int UInteger;

}

void test1() {
	enum Season {Spring, Summer, Autumn, Winter};

	char *s = "Frankenstein";
	typedef char * String;
	String s = "Frankenstein";
}

// extern
// int a;
extern int a;
void test2();

int main(int argc, char const *argv[])
{
	a = 10;
	test2();
	printf("\n");
	printf("a = %d", a);
	printf("a = %d.\n", a);

	int b = 10;
	Integer c = 9;
	UInteger d = 8;

	return 0;
}

int a;

void test2() {
	printf("a = %d", a);
}

