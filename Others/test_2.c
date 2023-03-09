#include <stdio.h>
int main()
{
    int x[5] = {2, 4, 6, 8, 10}, *p, **pp;
    
    p = x;
    pp = &p;
    printf("%d," , *(++p));
    printf("%d\n" , (**pp)+1);
    
    return 0;
}