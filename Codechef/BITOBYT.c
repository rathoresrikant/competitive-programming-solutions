/*
Question
In the magical land of Byteland, there are three kinds of citizens:

a Bit - 2ms after a Bit appears, it grows up and becomes a Nibble (i.e. it disappears and a Nibble appears)
a Nibble - 8ms after a Nibble appears, it grows up and becomes a Byte
a Byte - 16ms after a Byte appears, it grows up, splits into two Bits and disappears
Chef wants to know the answer to the following question: what would the population of Byteland be immediately before the time Nms if only 1 Bit appeared at time 0ms?

Help him and find the population (number of citizens) of each type.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.


Output
For each test case, print a single line containing three space-separated integers — the number of Bits, Nibbles and Bytes.

*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
      long long int bit=1,nibble=0,byte=0,c=0,t;
        scanf("%lld",&t);
        while(t--)
        {
            if(c==2)
            {
                nibble=bit;
                bit=0;
            }
            if(c==10)
            {
                byte=nibble;
                nibble=0;
            }
            if(c==26)
            {
                bit=byte*2;
                byte=0;
                c=0;
            }
            c++;
        }
        printf("%lld %lld %lld\n",bit,nibble,byte);

    }
    return 0;
}

