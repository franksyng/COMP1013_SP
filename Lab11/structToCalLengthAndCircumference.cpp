#include<stdio.h>
#include<math.h>

struct point{
    double x, y;
};
struct point p;

struct line{
    struct point p1, p2;
};
struct line l;

struct triangle{
    struct point p1, p2, p3;
};
struct triangle t;

int main(void){

    double L, C, TL1, TL2, TL3;

    l.p1.x = 2;
    l.p1.y = 7;
    l.p2.x = 10;
    l.p2.y = 9;

    L = sqrt(((l.p1.x - l.p2.x) * (l.p1.x - l.p2.x)) + ((l.p1.y - l.p2.y) * (l.p1.y - l.p2.y)));

    t.p1.x = 2;
    t.p1.y = 0;
    t.p2.x = 6;
    t.p2.y = 5;
    t.p3.x = 8;
    t.p3.y = 3;

    TL1 = sqrt(((t.p1.x - t.p2.x) * (t.p1.x - t.p2.x)) + ((t.p1.y - t.p2.y) * (t.p1.y - t.p2.y)));
    TL2 = sqrt(((t.p1.x - t.p3.x) * (t.p1.x - t.p3.x)) + ((t.p1.y - t.p3.y) * (t.p1.y - t.p3.y)));
    TL3 = sqrt(((t.p2.x - t.p3.x) * (t.p2.x - t.p3.x)) + ((t.p2.y - t.p3.y) * (t.p2.y - t.p3.y)));

    C = TL1 + TL2 + TL3;

    printf("The length of L1 is %lf\nThe circumference of T1 is %lf\n", L, C);

    return 0;

}