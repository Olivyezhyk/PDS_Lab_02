#include "Truth.h"
using namespace std;

bool Truth::implication(bool a, bool b) {
    return !a || b;
}

bool Truth::disjunction(bool a, bool b) {
    return a || b;
}

bool Truth::getFormula() {
    return implication(this->p, disjunction(this->q, this->r));
}

void Truth::Display() {
    cout << "____________________________________________________" << endl;
    cout << "|   |   |   |          |                           |" << endl;
    cout << "| p | q | r | (q OR r) |       p -> (q OR r)       |" << endl;
    cout << "|___|___|___|__________|___________________________|" << endl;

    for (int i = 7; i >= 0; i--) {
        this->p = i & 4;
        this->q = i & 2;
        this->r = i & 1;

        bool disj = disjunction(q, r);
        bool result = implication(p, disj);

    cout << "|   |   |   |          |                           |" << endl;
        cout << "| " << p << " | " << q << " | " << r
            << " |    " << disj << "     |             " << result << "             |" << endl;
        cout << "|___|___|___|__________|___________________________|" << endl;
    }
}

Truth::Truth() {
    Display();
}

Truth::Truth(bool p, bool q, bool r) {
    this->p = p;
    this->q = q;
    this->r = r;
}
