#include "middle_list.h"
long itc_sumlst(const vector <int> &lst) {
    if (lst.size() != 0) {
    long sum = 0;
    for (int i = 0; i < lst.size(); i++) sum += lst[i];
    return sum;}
return 0;}
