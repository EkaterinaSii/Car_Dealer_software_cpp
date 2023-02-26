#include<iostream>
#include<ctime>
//#include"Person.cpp"
#include"Person.cpp"

using namespace std;

class Worker:public Person{ 
    private:
        string name;
        string email;
        string phone;
        string address;
        string startWorkAt;
        string department;
        static int workerNum;

    public:

        Worker(string name,string department, string email, string phone, string address):Worker(){
            Person::setName(name);
            Person::setEmail(email);
            Person::setPhone(phone);
            Person::setAddress(address);
            setDepartment(department);
            cout << "New worker is created." << endl;

        }

        Worker(){
            setStartWorkAt();
            workerNum++;
            cout << "Worker ID: " << workerNum << endl;
        }

        string print_greetings() override{
            return "Hello dear worker, " + Person::getName();
        };

        void setStartWorkAt(){
            time_t now = time(0);
            char* dt = ctime(&now);
            startWorkAt = dt;
        }

        string getStartWorkAt() const{
            return startWorkAt;
        }

        void setDepartment(string d){
            department = d;
        }

        string getDepartment() const{
            return department;
        }

        int getWorkerNum() const{
            return workerNum;
        }

        void display_info() const{
            cout << "Worker ID: " << workerNum << endl;
            cout << "Name: " << Person::getName() << endl;
            cout << "Email: " << Person::getEmail() << endl;
            cout << "Phone: " << Person::getPhone() << endl;
            cout << "Address: " << Person::getAddress() << endl;
            cout << "Start work at: " << getStartWorkAt() << endl;
            cout << "Department: " << getDepartment() << endl;

        }
};