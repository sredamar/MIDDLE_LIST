#include "middle_list.h"
vector <char> itc_strtlist(string str){
    vector<char> n;
    if (itc_len(str) > 0) for(long long i =0; str[i] != '\0'; i++) n.push_back(str[i]);
return n;}
