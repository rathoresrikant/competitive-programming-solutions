#include <cstdio>
int main()
{
 FILE *in=stdin;
 int a,b;
 fscanf(in,"%d %d ",&a,&b);
 fclose(in);
 int rasp=0;
 while(a<=b)
       {
        a*=3;
        b*=2;
        rasp++;
       }
 FILE *out=stdout;
 fprintf(out,"%d\n",rasp);
 fclose(out);
 return 0;
}
