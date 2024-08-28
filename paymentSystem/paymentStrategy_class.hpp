#include "bank_class.hpp"

class PaymentStrategy{
    protected: 
        Bank* bank;
    public:
        PaymentStrategy()
        {
            bank  = new Bank("SBI", "Gadag");
        }
        virtual bool pay() = 0;
};

class UPIpay: public PaymentStrategy{
    public:
        bool pay(){
            cout<<" User Chose UPI Payment\n";
            cout<<" Enter UPI ID : ";
            string id;
            cin>>id;
            return bank->isPaymentSuccessful();
        }
};

class NetBanking: public PaymentStrategy{
    public:
        bool pay(){
            cout<<" User Chose NetBanking Payment\n";
            cout<<" Enter Bank ID : ";
            string id;
            cin>>id;
            return bank->isPaymentSuccessful();
        }
};

class CreditCardpay: public PaymentStrategy{
    public:
        bool pay(){
            cout<<" User Chose CreditCardpay Payment\n";
            cout<<" Enter card details : ";
            string id;
            cin>>id;
            return bank->isPaymentSuccessful();
        }
};

class Walletpay: public PaymentStrategy{
    public:
        bool pay(){
            cout<<" User Chose Walletpay Payment\n";
            cout<<" Enter wallet details : ";
            string id;
            cin>>id;
            return bank->isPaymentSuccessful();
        }
};