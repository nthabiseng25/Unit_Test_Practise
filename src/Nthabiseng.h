#ifndef _NTHABISENG_
#define _NTHABISENG_

#include <iostream>

using namespace std;

class Nthabiseng{
    private:
        string name, Option;
        int age, level_of_study, number_of_subjects, arr[10];
        float sum_numbers = 0.0, avg = 0.0;
    public:
        Nthabiseng();
        ~Nthabiseng();
        void set_name(string n);
        string get_name();
        void set_age(int a);
        int get_age();
        void set_level(int l);
        int get_level();
        void set_subjects(int s);
        int get_subjects();
        void set_Option(string O);
        float set_marks();
        string get_Option();

};
#endif

