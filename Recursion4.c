#include <stdio.h>
#include <stdlib.h>


int pow_iter(int X, int n)
{
                if (n < 0)
                                return -1;
                else
                {
                                int i, pow;
                                pow = X;
                                for(i = 1; i<=n-1;i++)
                                                pow *= X;
                                return pow;
                }
}

int pow_recu(int X, int n, int pow)
{
                if (n < 0)
                                return -1;
                if(n == 0)
                                return pow;
                else
                {
                                pow *= X;
                                return pow_recu(X, n-1,pow);
                }
}

int pow_recu_handeler(int X, int n)
{
                if (n >= 0)
                                return pow_recu(X,n,1);
                else
                                return -1;
}

int main()
{
                int X = pow_recu_handeler(-4,2);
                printf("%d", X);
}
