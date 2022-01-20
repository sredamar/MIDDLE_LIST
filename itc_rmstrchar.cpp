#include "middle_list.h"
string itc_rmstrchar(string str, string l) {
    string n = "";
    int b  = 0;
    for (long long i = 0; str[i] != '\0'; i++) {
        for(long long j = 0 ; l[j] != '\0'; j++) if (l[j] == str[i]) b  = 1;
    if (b == 0) n += str[i];
    b = 0;}
return n;}
