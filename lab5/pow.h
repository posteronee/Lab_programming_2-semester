#ifndef LAB5_POW_H
#define LAB5_POW_H

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class BaseException: public std::exception {
public:
    BaseException(const std::string &mess = "") {
        cerr << mess;
    }
};
    class WrongPowException : public BaseException{
    public:
        WrongPowException(const int &n)
                : BaseException("Negative pow " + std::to_string(n))
        {}
    };

    template<class T>
    T powN(const T &a, const int &n) {
        if (n < 0) {
            throw WrongPowException(n);
        } else if (n == 0) {
            return 1;
        } else if (n > 0) {
            T ans = a;
            for (int i = 0; i < n-1; i++) {
                ans *= a;
            }
            return ans;
        }
    }

#endif //LAB5_POW_H
