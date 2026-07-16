// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    switch(a)
    {
        case 'A' ... 'Z' :printf("Uppercase");
        break;
        case 'a' ... 'z' :printf("lowercase");
        break;
        case '0' ... '9' :printf("number");
    }

    return 0;
}