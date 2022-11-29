#include <stdio.h>
using namespace std;

void update(int *a,int *b, int *c, int *d) {
    // Complete this function
    if (*a<*b)
    {
        (*c)=(*a)+(*b);
        (*d)=(*b)-(*a);
    }
    else
    {
        (*c)=(*a)+(*b);
        (*d)=(*a)-(*b);
    }
}

int main() {
    int a, b,c,d;
    int *pa = &a, *pb = &b, *pc = &c, *pd = &d;

    scanf("%d %d", &a, &b);
    update(pa, pb,pc , pd);
    printf("%d\n%d", c, d);

    return 0;
}
