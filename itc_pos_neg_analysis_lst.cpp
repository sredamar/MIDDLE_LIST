#include "middle_list.h"
void itc_pos_neg_analysis_lst(const vector <int> &lst) {
    setlocale(LC_ALL, "rus");
    vector <int> lst1, lst2, lst3;
    itc_pos_neg_separator_lst(lst, lst1, lst2, lst3);
    cout << "Ïîëîæèòåëüíûå:" << '\t' << '\t' << "Îòðèöàòåëüíûå:" << endl;
    cout << "Êîëè÷åñòâî ÷èñåë: " << lst1.size() << "," << '\t' << '\t' << "Êîëè÷åñòâî ÷èñåë: " << lst2.size() << endl;
    cout << "Ìàêñèìàëüíàÿ öèôðà: " << itc_max_lst(lst1) << "," << '\t' << '\t' << "Ìàêñèìàëüíàÿ öèôðà: " << itc_max_lst(lst2) <<"," << endl;
    cout << "Ìèíèìàëüíàÿ öèôðà: " << itc_min_lst(lst1) << "," << '\t' <<'\t' << "Ìèíèìàëüíàÿ öèôðà: " << itc_min_lst(lst2)<<"," << endl;
    cout << "Ñóììà ÷èñåë: " << itc_sumlst(lst1) << "," << '\t' <<'\t' << "Ñóììà ÷èñåë: "  << itc_sumlst(lst2)<<"," << endl;
    cout << "Ñðåäíåå çíà÷åíèå: " << (itc_sumlst(lst1) / lst1.size()) << "," << '\t' << '\t' << "Ñðåäíåå çíà÷åíèå: " << (itc_sumlst(lst2) / lst2.size()) << "," << endl;
    cout << endl;
    cout << "Êîëè÷åñòâî íóëåé: " << lst3.size() << endl;}
