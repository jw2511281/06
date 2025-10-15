#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int res=1;
    int i;
    for(i=1;i<=n;i++)
       res*=i;
    return res;
}

int combination(int n, int r)
{
    return(factorial(n)/(factorial(n-r)*factorial(r)));
}


int main(int argc, char *argv[]) {
    int n, r;
    int res;
    
    printf("Enter n, r: ");
    scanf("%i, %i",&n, &r);
    
    res=combination(n, r);
    
    printf("Combination result is %i", res);
    
    system("PAUSE");
    return 0;
}
    
