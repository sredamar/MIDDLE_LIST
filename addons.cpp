#include "middle_list.h"
long long itc_len(string str) {
    long long kol = 0;
    for (long long i = 0; str[i] != '\0'; i++) kol++;
    return kol;}
long long itc_min(long long a, long long b) {
    if (a < b) return a;
return b;}
string itc_slice_str(string str, int st, int fin) {
    string res = "";
    for (int i = st; i <= itc_min(fin, itc_len(str) - 1); i++) res += str[i];
    if (fin < st) return str;
return res;}
int itc_find_str(string str1, string str2){
    long long len1 = itc_len(str1), len2 = itc_len(str2), kol = 0, i1 = 0, i2 = 0;
    while (i1 < len1){
        if (str1[i1] == str2[0]) for (i2; i2 < len2; i2++) if (str1[i1 + i2] == str2[i2]) kol++;
        if (kol == len2)
            return i1;
            i1++;}
return -1;}
