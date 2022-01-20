#include "middle_list.h"
string itc_join(vector <char> lst, string sep) {
    if (lst.size() != 0) {
    string n = "";
    for (long long i = 0; i < lst.size() - 1; i++) {
        n += lst[i];
        n += sep;}
    n += lst[lst.size() - 1];
    return n;}
}
