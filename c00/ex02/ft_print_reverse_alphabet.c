#include <stdio.h>

void ft_print_reverse_alphabet(void){
    char c;

    for(c = 'z'; c >= 'a'; --c)
        printf("%c ", c);
}

int main(void){
    ft_print_reverse_alphabet();
    return(0);
}