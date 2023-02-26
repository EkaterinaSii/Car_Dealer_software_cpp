#include<iostream>
using namespace std;

class Purchases{

    private:
        string date;
        string car;
        int price;
        string customer;
        char loan;
        string process;
        static int purchaseNum;

    public:

        Purchases(string car, float price, string customer, char loan): Purchases(){
            setCar(car);
            setPrice(price);
            setCustomer(customer);
            setLoan(loan);

        }

        Purchases(){
            setDate();
            setProcess("Waiting for payment");
            purchaseNum++;
            cout << "Purchase ID: " << purchaseNum << endl;
        }

        

        string setDate(){
            time_t now = time(0);
            date = ctime(&now);
            return date;
        };

        string getDate() const{
            return date;
        };

        void setCar(string c){
            car = c;
        };

        string getCar() const{
            return car;
        };

        void setPrice(float p){
            price = p;
        };

        int getPrice() const{
            return price;
        };

        void setCustomer(string c){
            customer = c;
        };

        string getCustomer() const{
            return customer;
        };

        void setLoan(char l){
            loan = l;
        };

        char getLoan() const{
            return loan;
        };

        void setProcess(string p){
            process = p;
        };

        string getProcess() const{
            return process;
        };

        int getPurchaseNum() const{
            return purchaseNum;
        };

        void display_info(){
            cout << "Purchase ID: " << purchaseNum << endl;
            cout << "Date: " << getDate() << endl;
            cout << "Car: " << getCar() << endl;
            cout << "Price: " << getPrice() << endl;
            cout << "Customer: " << getCustomer() << endl;
            cout << "Loan: " << getLoan() << endl;
            cout << "Process: " << getProcess()<< endl;
        };




};