#pragma once
#include<iostream>

class Truth {
private:
    bool p = false, q = false, r = false;

    bool implication(bool a, bool b);
    bool disjunction(bool a, bool b);

public:
    void Display();

    Truth();
    Truth(bool p, bool q, bool r);

    bool getFormula();
};
