#include <iostream>
#include "Nthabiseng.h"

using namespace std;

int main()
{
//Create a new pointer of type hellolib
    string nam;
    int x, y, z;
    cout << "Enter name: ";
    cin >> nam;
    cout << "Enter age: ";
    cin >> x;
    cout << "Enter Level: ";
    cin >> y;
    cout << "Enter Subjects: ";
    cin >> z;

    Nthabiseng * nt = new Nthabiseng();
    nt->set_name(nam);
    nt->set_age(x);
    nt->set_level(y);
    nt->set_subjects(z);

    cout << "The average of all the marks is: " << nt->set_marks() << endl;
    cout << nt->get_Option() << endl;


    delete nt;
    return 0;
}
