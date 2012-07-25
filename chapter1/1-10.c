#include<stdio.h>

main()
{
        int c; //nb, nt, nl;

        //nb = nt = nl = 0;
        while ((c = getchar()) != EOF) {
                if (c == '\t')
                        printf("\\t");
                if (c == '\b')
                        printf("\\b");
                if (c == '\\')
                        printf("\\\\");
		if (c != '\b')
			if (c != '\t')
				if (c != '\\')
					putchar(c);
        }
}
