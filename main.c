#include <stdio.h>
#include <stdlib.h>


int square(int a)
{
    a=a*a;
}


int main(int argc, char *argv[]) {
    
    int a=2;
    a=square(a);
    printf("a=%i\n",a);
    
    system("PAUSE");
    return 0;
}
    
