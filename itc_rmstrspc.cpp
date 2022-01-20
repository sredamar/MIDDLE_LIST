#include "middle_list.h"
string itc_rmstrspc(string str) {
    if (itc_len(str) != 0) {
    string n = "";
    for (int i = 0; str[i] != '\0'; i++) if (str[i] != 32) n += str[i];
return n;}
}
