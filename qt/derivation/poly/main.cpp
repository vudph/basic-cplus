#include <QTextStream>
#include "student.h"

static QTextStream cout(stdout);

void finish0(Student student) { //default Copy Constructor will be called
    cout << "\nThe following "
         << student.getClassName()
         << " has applied for graduation.\n "
         << student.toString() << "\n";
}

void finish1(Student* student) {
    cout << "\nThe following "
         << student->getClassName()
         << " has applied for graduation.\n "
         << student->toString() << "\n";
}

void finish2(Student& student) {
    cout << "\nThe following "
         << student.getClassName()
         << " has applied for graduation.\n "
         << student.toString() << "\n";
}

//int main() {
//    Undergrad us("Frodo Baggins", 5562, "Ring Theory", 4, 1220);
//    GradStudent gs("Bilbo Baggins", 3029, "History", 6,
//                    GradStudent::fellowship);
//    cout << "Here is the data for the two students:\n";
//    cout << gs.toString() << endl;
//    cout << us.toString() << endl;
//    cout << "\nHere is what happens when they finish their studies:\n";

//    cout << "=================================== \n";
//    finish0(us); //student object in function finish0(Student student) is not Undergrad due to slicing
//    finish0(gs);

//    cout << "=================================== \n";
//    finish1(&us);
//    finish1(&gs);

//    cout << "=================================== \n";
//    finish2(us);
//    finish2(gs);

//    cout << "=================================== \n";
//    Student s1 = Undergrad("Abc", 123, "Aaaa", 3, 1000);
//    cout << "s1's class: " << s1.getClassName() << "\n";
////    The s1 object isn't a Undergrad, but a Student, because of slicing. So, technically, polymorphism still works, it's just that you no longer have a Undergrad object to talk about.
////    https://www.geeksforgeeks.org/object-slicing-in-c/
////    https://stackoverflow.com/questions/15188894/why-doesnt-polymorphism-work-without-pointers-references

//    Student *s2 = new GradStudent("Vu Dong", 1122, "CS", 5, GradStudent::fellowship);
//    cout << "s2's class: " << s2->getClassName() << "\n";

//    delete s2;
//    return 0;
//}
