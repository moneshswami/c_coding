#include <stdio.h>
int main ()
{
int a,b,c;
clrscr ();
printf ("Enter 3 numbers");
scanf ("%d%d%d", &a, &b, &c);
if (a<b && a<c)
printf ("small =%d", a);
else if (b<c)
printf ("small= %d", b);
else
printf ("small= %d",c);
getch ();
}