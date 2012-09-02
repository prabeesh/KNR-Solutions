/* converts characters like newline and tab into visible escape sequences like  \n and \t as it copies to the string t to s */

void escape(char s[], char t[])
{

	int i,j;

	for (i = j = 0; t[i] != '\0'; i++)
		switch (t[i]):
		case '\n':
			s[j++] = '\n';
			break;
		case '\t':
			s[j++] = '\t';
			break;
		default:
			s[j++] = t[i];
			break;
		}
	s[j] = '\0';
}
