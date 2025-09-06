#pragma once
#include<iostream>

class Truth {
private:
    bool p = false, q = false, r = false;

    bool checkImplication(bool a, bool b);
    bool checkDisjunction(bool a, bool b);

public:
    void Display();

    Truth();
    Truth(bool p, bool q, bool r);

    bool getFormula();
};
