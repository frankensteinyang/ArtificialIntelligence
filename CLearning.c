#include <stdio.h>
void test() {
	enum Season {Spring, Summer, Autumn, Winter};
	enum Season s = Winter;
}

void test1() {
	enum Season {Spring, Summer, Autumn, Winter};
}

// extern
// int a;
extern int a;
void test2();
int main(int argc, char const *argv[])
{
	a = 10;
	test2();
	return 0;
}

int a;

void test2() {
	printf("a = %d", a);
}