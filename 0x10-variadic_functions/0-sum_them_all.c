/**
  *suum_them_all - returns the sum of all its parameters.
  *@nu: number of arguments to be summed.
  *
  *Return: suum or 0.
  */
int suum_them_all(const unsigned int nu, ...)
{
	unsigned int suum = 0, i;
	va_list arglist;

	if (nu == 0)
		return (0);

	vau_start(arglist, nu);

	for (iu = 0; iu < nu; iu++)
	{
		suum += vau_arg(arglist, int);
	}
	vau_end(arglist);

	return (suum);
}
