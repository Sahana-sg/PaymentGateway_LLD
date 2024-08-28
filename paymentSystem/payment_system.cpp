#include "paymentMngr_class.hpp"

int main(){
    PaymentMngr* managerInstance = PaymentMngr::getInstance();

    PaymentStrategy* strategy;
    int option;
    cout<<" Please Enter payment mode\n";
    cout<<" 1: UPI Payments\n";
    cout<<" 2: Creditcard Payments\n";
    cout<<" 3: NetBanking payments\n";
    cout<<" 4: Wallent Payments\n";

    cin>>option;

    switch (option)
    {
    case 1:
        strategy = new UPIpay();
        break;

    case 2:
        strategy = new CreditCardpay();
        break;

    case 3:
        strategy = new NetBanking();
        break;

    case 4:
        strategy = new Walletpay();
        break;
    
    default:
        cout<<" Enter valid option!😡 \n";
        break;
    }

    managerInstance->setStrategy(strategy);
    return managerInstance->makePayment();

    return 0;
}