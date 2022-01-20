#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
#include <locale.h>
using namespace std;
vector <char> itc_strtlist(string str); //1 finished
string itc_join(vector <char> lst, string sep); //2 finished
string itc_rmstrspc(string str); //3 finished
string itc_rmstrchar(string str, string less); //4 finished
long itc_sumlst(const vector <int> &lst); //5 finished
long itc_sum_even_lst(const vector <int> &lst); //6 finished
long itc_sum_even_part_lst(const vector <int> &lst); //7 finished
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2); //8 finished
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3); //9 finished
void itc_odd_even_analysis_lst(const vector <int> &lst); //10 not finished
void itc_pos_neg_analysis_lst(const vector <int> &lst); //11 not finished
long long itc_len(string str);
long long itc_min(long long a, long long b);
string itc_slice_str(string str, int st, int fin);
int itc_find_str(string str1, string str2);
int itc_max_lst(const vector <int> &lst);
int itc_min_lst(const vector <int> &lst);
#endif // MIDDLE_LIST_H_INCLUDED
