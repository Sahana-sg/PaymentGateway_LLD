#include "paymentStrategy_class.hpp"

class PaymentMngr{
    private:
        PaymentStrategy* strategy;
        static PaymentMngr* Instance;
        PaymentMngr(){}
    
    public:
        static PaymentMngr* getInstance();
        void setStrategy(PaymentStrategy* str);
        bool makePayment();
};