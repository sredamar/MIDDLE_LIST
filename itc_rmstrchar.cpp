#include "middle_list.h"
string itc_rmstrchar(string str, string l) {
    string n = "";
    int t = itc_len(l);
        for (int i = 0; str[i] != '\0'; i++) if (itc_slice_str(str, i, i + t - 1) != l) n += str[i];
            else i += t - 1;
return n;}
