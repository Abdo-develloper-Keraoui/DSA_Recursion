//Calculate Odd numbers from 0 to n

#include <stdio.h>
#include <stdlib.h>


int Nomb_Imp_Iter(int n)
{
                int i, Nimp = 0;
                for(i=0;i<=n;i++)
                {
                                if(i%2 != 0)
                                                Nimp++;
                }
                return Nimp;
}

int Nomb_Imp_Recu1(int n, int i, int Nimp)//i = 0 && Nimp = 0 at the call
{
                if(i>n)
                                return Nimp;
                else if (i>=0 && i<=n)
                {
                                if(i%2 != 0)
                                                Nimp++;
                                return Nomb_Imp_Recu1(n,i+1,Nimp);
                }
}
int Nomb_Imp_Recu2(int n, int i, int Nimp)//i = n && Nimp = 0 at the call
{
                if(i<0)
                                return Nimp;
                else if (i>=0 && i<=n)
                {
                                if(i%2 != 0)
                                                Nimp++;
                                return Nomb_Imp_Recu2(n,i-1,Nimp);
                }
}

int main()
{
                int n = 100,X;
                X = Nomb_Imp_Iter(n);
                //X = Nomb_Imp_Recu1(n,0,0);
                //X = Nomb_Imp_Recu2(n,n,0);
                printf("%d", X);
}
