#0x0B. C - more malloc, free

0. allocates memory using malloc. returns pointer to allocated memory. if malloc fails, malloc_checked function should cause normal process termination with a status value of 98
1. concatenates two strings. returned pointer points to newly allocated space in memory which contains s1, followed by first n bytes of s2, and null terminated. if function fails, it returns NULL, if n is greater or equal to the length of s2 then use the entire string s2. if NULL is pass, treat it as empty string
2. allocates memory for an array, using malloc. calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to allocated memory. memory is set to zero. nmemb or size is 0, then calloc returns NULL. if malloc fails, then calloc returns NULL
3. creates an array of integers. array created should contain all values from min to max, ordered from min to max. return pointer to the newly created array. if min > max, return NULL. if malloc fails, return NULL.
