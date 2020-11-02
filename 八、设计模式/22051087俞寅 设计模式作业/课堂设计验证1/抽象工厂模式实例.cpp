#include<iostream>

using namespace std;

class Hardware_Product{
    public:
        virtual void show() = 0;
};

class Hardware_Product_Printer : public Hardware_Product{
    public:
        void show(){
            cout<<"我是 打印机"<<endl;
        }
};

class Hardware_Product_Copier : public Hardware_Product{
    public:
        void show(){
            cout<<"我是 复印机"<<endl;
        }
};

class Software_Product{
    public:
        virtual void show() = 0;
};

class Software_Product_BankCardSystem : public Software_Product{
    public:
        void show(){
            cout<<"我是 银行卡识别系统"<<endl;
        }
};

class Software_Product_IDCardSystem : public Software_Product{
    public:
        void show(){
            cout<<"我是 身份证识别系统"<<endl;
        }
};

class Software_Product_DriverCardSystem : public Software_Product{
    public:
        void show(){
            cout<<"我是 驾照识别系统"<<endl;
        }
};

class Abstract_Factory{
    public:
        virtual Hardware_Product *CreatePrinter() = 0;
        virtual Hardware_Product *CreateCopier() = 0;
        virtual Software_Product *CreateBankCardSystem() = 0;
        virtual Software_Product *CreateIDCardSystem() = 0;
        virtual Software_Product *CreateDriverCardSystem() = 0;
};

class Hardware_Factory : public Abstract_Factory{
    Hardware_Product *CreatePrinter(){
        return new Hardware_Product_Printer();
    }
    Hardware_Product *CreateCopier(){
        return new Hardware_Product_Copier();
    }
    Software_Product *CreateBankCardSystem(){
        cout<<"无法生产"<<endl;
        return NULL;
    }
    Software_Product *CreateIDCardSystem(){
        cout<<"无法生产"<<endl;
        return NULL;
    }
    Software_Product *CreateDriverCardSystem(){
        cout<<"无法生产"<<endl;
        return NULL;
    }
};

class Software_Factory : public Abstract_Factory{
    Hardware_Product *CreatePrinter(){
        cout<<"无法生产"<<endl;
        return NULL;
    }
    Hardware_Product *CreateCopier(){
        cout<<"无法生产"<<endl;
        return NULL;
    }
    Software_Product *CreateBankCardSystem(){
        return new Software_Product_BankCardSystem();
    }
    Software_Product *CreateIDCardSystem(){
        return new Software_Product_IDCardSystem();
    }
    Software_Product *CreateDriverCardSystem(){
        return new Software_Product_DriverCardSystem();
    }
};

int main(){
    Abstract_Factory *factory1 = new Hardware_Factory();
    Hardware_Product *printer = factory1->CreatePrinter();
    Hardware_Product *copier = factory1->CreateCopier();
    printer->show();
    copier->show();

    Abstract_Factory *factory2 = new Software_Factory();
    Software_Product *bankcardsystem = factory2->CreateBankCardSystem();
    Software_Product *idcardsystem = factory2->CreateIDCardSystem();
    Software_Product *drivercardsystem = factory2->CreateDriverCardSystem();
    bankcardsystem->show();
    idcardsystem->show();
    drivercardsystem->show();
    
    return 0;
}