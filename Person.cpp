#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;


class Person{
    private:
        string name;
        string email;
        string phone;
        string address;

    public:

        virtual string print_greetings() = 0;

        Person(string name, string email, string phone, string address):Person(){
            setName(name);
            setEmail(email);
            setPhone(phone);
            setAddress(address);
        }

        Person(){
        }

        void setName(string n){
            name = n;
        }

        string getName() const{
            return name;
        }

        void setEmail(string e){
            email = e;
        }

        string getEmail() const{
            return email;
        }

        void setPhone(string p){
            phone = p;
        }

        string getPhone() const{
            return phone;
        };

        void setAddress(string a){
            address = a;
        }

        string getAddress() const{
            return address;
        }
};

#endif
