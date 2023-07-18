#include "main.h"
/**
*_islower-testswhetheracharacterisa
*lowercaseletterfromtheEnglishalphabet.
*@c:charactertotest.
*Return:1ifitisalowercaseletter,0ifitisnotalowercaseletter.
*/
int_islower(intc)
{
if(c>='a'&&c<='z')
return(1);
else
return(0);

}
