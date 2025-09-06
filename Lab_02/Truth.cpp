#include "Truth.h"
using namespace std;

bool Truth::checkImplication(bool a, bool b) {
    return !a || b;
};

bool Truth::checkDisjunction(bool a, bool b) {
    return a || b;
}

bool Truth::getFormula() {
    return checkImplication(this->p, checkDisjunction(this->q, this->r));
}

void Truth::Display() {
    cout << "_______________________________________" << endl;
    cout << "|   |   |   |          |              |" << endl;
    cout << "| p | q | r | (q OR r) | p -> (q V r) |" << endl;
    cout << "|___|___|___|__________|______________|" << endl;

    for (int i = 7; i >= 0; i--) {
        this->p = i & 4;
        this->q = i & 2;
        this->r = i & 1;

        bool disj = checkDisjunction(q, r);
        bool result = checkImplication(p, disj);
        cout << "|   |   |   |          |              |" << endl;
        cout << "| " << p << " | " << q << " | " << r << " |";
        cout << "    " << disj << "     |       " << result << "      |" << endl;
        cout << "|___|___|___|__________|______________|" << endl;
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
