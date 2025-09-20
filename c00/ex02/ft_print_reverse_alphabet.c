void ft_print_reverse_alphabet(void){
    char c;

    for(c = 'a'; c <= 'z'; ++c)
        printf("%c ", c);
}

int main(void){
    ft_print_reverse_alphabet();
    return(0);
}