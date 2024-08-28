#include "paymentMngr_class.hpp"

PaymentMngr* PaymentMngr::Instance = nullptr;

PaymentMngr* PaymentMngr::getInstance(){
    if(Instance == nullptr){
        Instance = new PaymentMngr();       
    }
    return Instance;
}

bool PaymentMngr::makePayment(){
    if(strategy->pay()){
        cout<<" Successful payment🥳 !\n";
        return true;
    }
    else {
        cout<<" Payment Failed😞  \n";
        return false;
    }
}

void PaymentMngr::setStrategy(PaymentStrategy* str){
    strategy = str;
}