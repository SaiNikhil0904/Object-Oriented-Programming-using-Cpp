#include<iostream>
using namespace std;

void stringReverse(char strArray[]);

int main(void)
{
    char strArray[] = "Sai Nikhil.";
    stringReverse(strArray);
    putchar('\n');
    return 0;
}
void stringReverse(char strArray[])
{
    if (*strArray != '\0')
    {
        stringReverse(strArray + 1);
        putchar(*strArray);
    }
}