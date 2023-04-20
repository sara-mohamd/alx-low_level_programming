/**
* _attoi - changes a string to an int
* @ss: the string to be changed
*
* Return: the converted int
*/
int _aatoi(char *ss)
{
int ii = 1;
unsigned int nuum = 0;
do {
if (*ss == '-')
ii *= -1;
else if (*ss >= '0' && *ss <= '9')
nuum = nuum * 10 + (*ss - '0');
else if (nuum > 0)
break;
} while (*ss++);
return (nuum *ii);
}
