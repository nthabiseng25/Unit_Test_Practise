#include "Nthabiseng.h"


Nthabiseng::Nthabiseng(){}
Nthabiseng::~Nthabiseng(){}

void Nthabiseng::set_name(string n){
    name = n;
}
string Nthabiseng::get_name(){
    return name;
}
void Nthabiseng::set_age(int a){
    age = a;
}
int Nthabiseng::get_age(){
    return age;
}
void Nthabiseng::set_level(int l){
    level_of_study = l;
}
int Nthabiseng::get_level(){
    return level_of_study;
}
void Nthabiseng::set_subjects(int s){
    number_of_subjects = s;
}
int Nthabiseng::get_subjects(){
    return number_of_subjects;
}
void Nthabiseng::set_Option(string O){
    Option = O;
}

float Nthabiseng::set_marks(){
    cout << "Enter the marks:" << endl;
    for (int i = 0; i < number_of_subjects; i++){
        cin >> arr[i];
        sum_numbers = sum_numbers + arr[i];
    }
    avg = sum_numbers/number_of_subjects;
    return avg;
}
string Nthabiseng::get_Option(){
    if (avg >= 80){
        Option = "Distinction";
    }
    else if(avg < 80 && avg > 50){
        Option = "Pass";
    }
    else {
        Option = "Fail";
    }
    return Option;

}

