 #include "middle_list.h"
 void itc_odd_even_analysis_lst(const vector <int> &lst) {
    setlocale(LC_ALL, "rus");
    vector <int> lst1, lst2;
    itc_odd_even_separator_lst(lst, lst1, lst2);
    cout << "������ ������:" << endl;
    cout << "���������� ������ �����: " << lst1.size() << "," << '\t' << '\t' << "���������� �������� �����: " << lst2.size() << endl;
    cout << "������������ ������ �����: " << itc_max_lst(lst1) << "," << '\t' << '\t' << "������������ �������� �����: " << itc_max_lst(lst2) <<"," << endl;
    cout << "����������� ������ �����: " << itc_min_lst(lst1) << "," << '\t' <<'\t' << "����������� �������� �����: " << itc_min_lst(lst2)<<"," << endl;
    cout << "����� ������ �����: " << itc_sumlst(lst1) << "," << '\t' <<'\t' << "����� �������� �����: "  << itc_sumlst(lst2)<<"," << endl;}
