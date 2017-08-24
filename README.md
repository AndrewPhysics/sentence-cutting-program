# sentence-cutting-program
This program will read sentences from consol window, then cut it to separate words using pointer arithmetic procedure.

1. get sentences from consol window by using get_s() C function:

1.1 - infinite while loop will read from consol window, and will put character string to (char src[100];) src string array.
    - the src string array is long enough to accept a sentence
    - gets_s() function will put a 0 to end of the string

1.2 - strcat() function will put src[] to dest[] char array

1.3 - strcat() function will put a space to the end of dest[] array.


2. Cut the sentence to words by pointer arithmetic

2.1 We need to store the address of the words first letter in a pointer array

char* szavak_elejet_tartalmazo_pointer_tomb[1000];
char* p1 = &dest[0];

	int i = 0;
	bool flag = true;
	while (*p1 != 0)
	{
		if (*p1 == ' ')
		{
			flag = true;
			*p1 = 0;
		}
		else if (flag)
		{
			szavak_elejet_tartalmazo_pointer_tomb[i] = p1;
			flag = false;
			i++;
		}
		else
		{
			flag = false;
		}
		p1++;
	}
