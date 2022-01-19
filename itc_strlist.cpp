#include "middle_list.h"

vector <char> ft_strtlist(string str) {
    vector <char> mass;
    for (long long i = 0; str[i] != '\0'; i++) mass.push_back(str[i]);
    return mass;}
