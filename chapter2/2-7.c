unsigned inverter (unsigned x, int p, int n)
{

	return x ^ (~(~0 << n) << (p+1-n));
}

