#include<iostream>
using namespace std;

int my_strlen(char *str)
{
    int count = 0;
    while(str[count] != '\0')
        count++;
    return count;
}

void my_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char src[] = "Hello";
    char dest[20];

    my_strcpy(dest, src);

    cout << dest << endl;
    cout << my_strlen(dest);
}