#include "middle_list.h"
void itc_pos_neg_analysis_lst(const vector <int> &lst) {
    setlocale(LC_ALL, "rus");
    vector <int> lst1, lst2, lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst2, lst3);
    cout << "Положительные:" << '\t' << '\t' << "Отрицательные:" << endl;
    cout << "Количество чисел: " << lst1.size() << "," << '\t' << '\t' << "Количество чисел: " << lst2.size() << endl;
    cout << "Максимальная цифра: " << itc_max_lst(lst1) << "," << '\t' << '\t' << "Максимальная цифра: " << itc_max_lst(lst2) <<"," << endl;
    cout << "Минимальная цифра: " << itc_min_lst(lst1) << "," << '\t' <<'\t' << "Минимальная цифра: " << itc_min_lst(lst2)<<"," << endl;
    cout << "Сумма чисел: " << itc_sumlst(lst1) << "," << '\t' <<'\t' << "Сумма чисел: "  << itc_sumlst(lst2)<<"," << endl;
    cout << "Среднее значение: " << (itc_sumlst(lst1) / lst1.size()) << "," << '\t' << '\t' << "Среднее значение: " << (itc_sumlst(lst2) / lst2.size()) << "," << endl;
    cout << endl;
    cout << "Количество нулей: " << lst3.size() << endl;}
