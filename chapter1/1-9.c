#include<stdio.h>

main()
{
        int c, d;

        while ((c = getchar()) != EOF) {	
		if (c != ' ')
			putchar(c);
		if (c == ' ' )
			if (d != ' ')
				putchar(c);
        	d =c;
	}
}

