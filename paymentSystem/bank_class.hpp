#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;

class Bank{
    private:
        string name;
        string location;
    public:
        Bank(string name, string loc) : name(name), location(loc) {}
        bool isPaymentSuccessful(){
            return (rand() % 2);
        }
};
