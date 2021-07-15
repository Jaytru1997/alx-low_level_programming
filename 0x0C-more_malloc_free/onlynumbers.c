/**
 * onlyNumbers - determines if string has only numbers
 * @c: input string
 * Return: 0 if false, 1 if true
 */
int onlyNumbers(char *c)
{
        while (*c)
        {
                if (*c < '0' || *c > '9')
                        return (0);
                c++;
        }
        return (1);
}
