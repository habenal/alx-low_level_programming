#include"holberton.h"
/**
*main-checkalphabet.
*passparameterintc
*
*Return:Always0.
*/
int_isalpha(intc)
{
    if(( c>= 'a' && c <= 'z') || ( c>= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

