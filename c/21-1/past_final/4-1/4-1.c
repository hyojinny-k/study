void changeToDigitEncode(char s[], char e[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		e[i] = s[i] - 16;
	e[i] = '\0';
}