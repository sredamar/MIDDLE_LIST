#include "middle_list.h"
string itc_join(vector <char> lst, string sep){
    string n ="";
    if(lst.size() > 0){
    for(long long i =0; i < lst.size()-1; i++){
        n += lst[i];
        n += sep;}
    n += lst[lst.size()-1];}
return n;}
