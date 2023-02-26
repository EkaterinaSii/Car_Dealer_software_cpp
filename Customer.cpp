#include<iostream>
#include<ctime>
#include"Person.cpp"
using namespace std;

class Customer: public Person{

    private:
        string name;
        string email;
        string phone;
        string address;
        string registeredAt;
        string purchasingHistory;
        string customerStatus;
        static int customerNum;

    public:

        Customer(string name, string email, string phone, string address):Customer(){
            Person::setName(name);
            Person::setEmail(email);
            Person::setPhone(phone);
            Person::setAddress(address);
            cout << "New customer is created." << endl;
        }

        Customer(){
            setRegisteredAt();
            setCustomerStatus("Normal");
            customerNum++;
            setPurchasingHistory("No purchasing history");
            cout << "Customer ID: " << customerNum << endl;
        }

        string print_greetings() override{
            return "Hello dear customer, " + Person::getName();
        };

        string setRegisteredAt(){
            time_t now = time(0);
            registeredAt = ctime(&now);
            return registeredAt;
        };

        string getRegisteredAt() const{
            return registeredAt;
        };

        void setPurchasingHistory(string h){
            purchasingHistory = h;
        };

        string getPurchasingHistory() const{
            return purchasingHistory;
        };

        void setCustomerStatus(string s){
            customerStatus = s;
        };

        string getCustomerStatus() const{
            return customerStatus;
        };

        int getCustomerNum() const{
            return customerNum;
        };

        void display_info(){
            cout << "Customer name: " << Person::getName() << endl;
            cout << "Customer email: " << Person::getEmail() << endl;
            cout << "Customer phone: " << Person::getPhone() << endl;
            cout << "Customer address: " << Person::getAddress() << endl;
            cout << "Customer registered " << getRegisteredAt() << endl;
            cout << "Customer's purchasing history: " << getPurchasingHistory() << endl;
            cout << "Customer's status: " << getCustomerStatus() << endl; 
        };

        void mark_as_VIP(){
            setCustomerStatus("VIP");
            cout << "Now customer's status is " << customerStatus << endl;
        };

        void block() {
            setCustomerStatus("Blocked");
            cout << "Now customer's status is " << customerStatus << endl;
        };


};
