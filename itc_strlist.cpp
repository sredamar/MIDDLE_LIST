#include "middle_list.h"
vector <char> itc_strtlist(string str) {
    if (itc_len(str) != 0) {
    vector <char> mass;
    for (long long i = 0; str[i] != '\0'; i++) mass.push_back(str[i]);
    return mass;}
}
