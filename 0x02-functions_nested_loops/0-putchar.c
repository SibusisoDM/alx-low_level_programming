#include <main.c>

/**
 * _isupper - - check for upper case character
 * @c: character to be checked
 * Returned: 1 if true , 0 if false
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

return (0);
}
