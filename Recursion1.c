#include <stdio.h>
#include <stdlib.h>


void Sum_DigitsRecu(int n, int sum)
{
                if(n == 0)//Base case
                                printf("%d \t", sum);
                else
                {
                                sum += n%10;
                                Sum_DigitsRecu(n/10,sum);//Recursive call
                }
}




int main()
{
                int n = 12345789;
                Sum_DigitsRecu(n,0);
}
