// Calculate the sum of integers in the interval [a, b];
#include <stdio.h>
#include <stdlib.h>

int Sum_iter(int a, int b)
{
                int i, sum = 0;
                for(i=a;i<=b;i++)
                                sum += i;
                return sum;
}

int Sum_recu1(int a, int b, int sum, int i)
{
                if(i>b)
                                return sum;
                else if ((i >= a) && (i <= b))
                {
                                sum += i;
                                return Sum_recu1(a,b,sum,i+1);
                }
}

int Sum_recu2(int a, int b, int sum, int i)
{
                if(i<a)
                                return sum;
                else if ((i >= a) && (i <= b))
                {
                                sum += i;
                                return Sum_recu2(a,b,sum,i-1);
                }
}

int main()
{
                int a = 5, b = 10, X;
                X = Sum_iter(a,b);
                //X = Sum_recu1(a,b,0,a);
                //X = Sum_recu2(a,b,0,b);
                printf("%d \t", X);
}
