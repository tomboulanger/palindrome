/*
** EPITECH PROJECT, 2021
** palindrome.h
** File description:
** palindrome
*/

#ifndef palindrome
#define palindrome

typedef struct v_variable
{
    char *nb;
    int imin;
    int imax;
    int base;
    int iterations;
    int status_imin;
    int status_imax;
    int no_solution;
    char *convert;
    int nb1;
    int nb2;
    int calcul;
} v_var;


int main(int ac, char **av);
int check_if_palindrome(v_var *a, char **av);
int check_if_number(char *str);
int which_flag(v_var *a, char **av);
void print_result_n(v_var *a, char *str);
void flag_n(v_var *a, char **av);
void print_result(v_var *a, int nb);
char *base10_convert(int nbr, int base);
void special_case(v_var *a, int nb);
void init_struct(v_var *a, char **av, int ac);
void flag_p(v_var *a, char **av);
void print_no_solution(v_var *a);
void print_special_case(v_var *a, int nb);
void my_usage(void);
int gest_print_flagp(v_var *a, char *str, int nb);
void print_flag_n(v_var *a, char *str);
int error_gestion(int ac, char **av);
int second_errorgestion(int ac, char **av);
int convert_base_to_ten(char *str, int base);
void print_result_n2(v_var *a, char *str);
void print_result_p2(v_var *a, int nb);
void calcul_str_and_revstr(char *str, char *str2, v_var *a);

#endif /* !palindrome */