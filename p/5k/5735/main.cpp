/*
Ten cuidado!!!
the inputs could be floating points
*/
#include <bits/stdc++.h>

using namespace std;

struct Point {
	public:
		double x;
		double y;
};

double dis(Point a, Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main()
{
	Point a, b, c;
	double ans = 0;
	scanf("%lf %lf", &a.x, &a.y);
	scanf("%lf %lf", &b.x, &b.y);
	scanf("%lf %lf", &c.x, &c.y);
	ans += dis(a, b);
	ans += dis(b, c);
	ans += dis(a, c);
	printf("%.2f\n", ans);
	return 0;
}
