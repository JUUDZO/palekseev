#include <stdio.h>
#define Pi 3.1415592654 // задаем значение пи
#define accuracy 0.0000000001 // задаем точность вычислений
double modul(double z) {
	if (z >= 0)
	return z;
	else return z * (-1);
}
int factorial(int n) {
	int i;
	for (i = 1; i < n; i++)
	n *= i;
return n;
}
double expon(double c, int n) {
if (n == 0)
return 1;
else if (n > 0)
return c * expon(c, n - 1);
else return 1 / expon(c, n + 1);
}
double sin(double c) {
double y = c;
double s = -1;
for (int i = 3, n; i <= 100; i += 2) {
y += s * (expon(c, i) / factorial(n));
s *= -1;
} return y;
}
int main() {
double e = 0.001, sin_;
double test[5] = { 0,1,0,-1,0 };
int a = 0, b = 5, code;
while (a < b)
{
sin_ = sin(e);
if (modul(sin - test[a]) < e)
code = 0;
else code = 1;
} return code;
}