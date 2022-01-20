 #include "middle_list.h"
 void itc_odd_even_analysis_lst(const vector <int> &lst) {
    setlocale(LC_ALL, "Rus");
    vector <int> lst1, lst2;
    itc_odd_even_separator_lst(lst, lst1, lst2);
    cout << "Àíàëèç ñïèñêà:" << endl;
    cout << "Êîëè÷åñòâî ÷åòíûõ ÷èñåë: " << lst1.size() << "," << '\t' << '\t' << "Êîëè÷åñòâî íå÷åòíûõ ÷èñåë: " << lst2.size() << endl;
    cout << "Ìàêñèìàëüíàÿ ÷åòíàÿ öèôðà: " << itc_max_lst(lst1) << "," << '\t' << '\t' << "Ìàêñèìàëüíàÿ íå÷åòíàÿ öèôðà: " << itc_max_lst(lst2) <<"," << endl;
    cout << "Ìèíèìàëüíàÿ ÷åòíàÿ öèôðà: " << itc_min_lst(lst1) << "," << '\t' <<'\t' << "Ìèíèìàëüíàÿ íå÷åòíàÿ öèôðà: " << itc_min_lst(lst2)<<"," << endl;
    cout << "Ñóììà ÷åòíûõ ÷èñåë: " << itc_sumlst(lst1) << "," << '\t' <<'\t' << "Ñóììà íå÷åòíûõ ÷èñåë: "  << itc_sumlst(lst2)<<"," << endl;}
