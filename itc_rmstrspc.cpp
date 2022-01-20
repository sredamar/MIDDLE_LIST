#include "middle_list.h"
string itc_rmstrspc(string str){
    string n = "";
    for(long long i = 0; i < itc_len(str); i++) if (str[i] != 32) n += str[i];
return n;}
