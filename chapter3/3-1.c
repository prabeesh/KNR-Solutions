/* binsearch: find x in v[0], <= v[1] <= ... <= v[n-1] */
int binsearch (int x, int v[], int n)
{

	int low, high, mid;
	
	low = 0;
	high = n - 1;
	mid = (low+high) / 2;
	while (low <= high) {
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		mid = (low+high) / 2;
	}
	if (x == v[mid])
		return mid;
	else
		return -1; /*  no match */
}
