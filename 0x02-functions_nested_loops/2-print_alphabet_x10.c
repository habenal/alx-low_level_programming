#include "main.h"
/**
*print_alphabet_x10-repeatstheprint_alphabet10times.
*Return:Nothing.
*/
voidprint_alphabet_x10(void)
{
inti;
charc;

for(i=0;i<10;++i)
{
for(c='a';c<='z';c++)
{
_putchar(c);
}
_putchar('\n');
}
}
