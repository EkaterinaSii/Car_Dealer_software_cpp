#include <iostream>
#include<vector>
#include"Person.cpp"
#include"Customer.cpp"
#include"Worker.cpp"
#include"Car.cpp"
#include"Equipment.cpp"
#include"Purchases.cpp"
using namespace std;

// Inheritance Done (Class Person -> Class Customer, Class Worker)
// Polymorphism Done (display_info() in Class Customer, Class Worker)
// Abstract Class Done (Class Person virtual string print_greetings() -> Class Customer, Class Worker override string print_greetings())
// Needed functions Done (buy car,show customer and employee data)
// Works in main() Done

int ask_main_fun;
string ask_name;
string ask_email;
string ask_phone;
string ask_address;
string ask_purchases;
int ask_car_num;
int customer_num;
int ask_customer_num;
char ask_loan;
int ask_worker_num;

int Purchases::purchaseNum = -1;
int Customer::customerNum = -1;
int Car::carNum = -1;
int Worker::workerNum = -1;

int buy_car(int car_num, int customer_num, vector<Customer>& customers, vector<Purchases>& purchases, vector<Car>& cars, vector<Equipment>& equipments, vector<Worker>& workers){
    cout << customers[customer_num].print_greetings() << endl;
    cout << "Would you like to pay with a loan? (Y/N)" << endl;
    cin >> ask_loan;

    while (true)
    {
        if (car_num == 1){
            cout << "You have bought: \n" << endl;
            cout << "Car model: " << cars[0].getModel() << endl;
            cout << "Price: " << cars[0].getPrice() << endl;
            cout << "Is loan availabale? "<< cars[0].getIsLoanAvaibale() << endl;
            cout << "Condition: " << cars[0].getCondition() << endl;
            cout << "Manufacture year: " << cars[0].getManufacturerYear() << endl;
            cout << "Color: " << cars[0].getColor() << endl;
            cout << "Car Equipment Type: " << cars[0].getCarEquipmentType() << endl;
            cout << "Transmussion: " << cars[0].getTransmission() << endl;
            cout << "Powertrain layout: " << cars[0].getPowertrainLayout() << endl;
            cout << "Car's cize: " << cars[0].getSize() << endl;
            cout << "Engine Power: " << cars[0].getEnginePower() << endl;
            cout << "Engine Volume: " << cars[0].getEngineVolume() << endl;
            cout << "Engine Type: " << cars[0].getEngineType() << endl;
            cout << "Tank Volume: " << cars[0].getFuelTankVolume() << endl;
            cout << "Acceleration Speed: " << cars[0].getAccelerationSpeed() << endl;
            cout << "Fuel Consumprtion: " << cars[0].getFuelConsumption() << endl;
            cout << "Car's number: " << cars[0].getCarNum() << endl;
            cout << "Employee responsible: " << cars[0].getEmployee() << endl;
            cout << "\nThank you for your purchase!\n" << endl;

            Purchases purchase1{cars[0].getModel(), cars[0].getPrice(), customers[customer_num].getName(), ask_loan};
            purchases.push_back(purchase1);
            customers[customer_num].setPurchasingHistory(cars[0].getModel());

            return 0;
            break;
        }
        else if (car_num == 2){

            if (ask_loan == 'Y' || ask_loan == 'y'){
                cout << "\nSorry, loan is not available for this car." << endl;
                cout << "Choose another car or pay with cash.\n" << endl;
                return 0;
                break;

            } else {
                cout << "You have bought: \n" << endl;
                cout << "Car model: " << cars[1].getModel() << endl;
                cout << "Price: " << cars[1].getPrice() << endl;
                cout << "Is loan availabale? "<< cars[1].getIsLoanAvaibale() << endl;
                cout << "Condition: " << cars[1].getCondition() << endl;
                cout << "Manufacture year: " << cars[1].getManufacturerYear() << endl;
                cout << "Color: " << cars[1].getColor() << endl;
                cout << "Car Equipment Type: " << cars[1].getCarEquipmentType() << endl;
                cout << "Transmussion: " << cars[1].getTransmission() << endl;
                cout << "Powertrain layout: " << cars[1].getPowertrainLayout() << endl;
                cout << "Car's cize: " << cars[1].getSize() << endl;
                cout << "Engine Power: " << cars[1].getEnginePower() << endl;
                cout << "Engine Volume: " << cars[1].getEngineVolume() << endl;
                cout << "Engine Type: " << cars[1].getEngineType() << endl;
                cout << "Tank Volume: " << cars[1].getFuelTankVolume() << endl;
                cout << "Acceleration Speed: " << cars[1].getAccelerationSpeed() << endl;
                cout << "Fuel Consumprtion: " << cars[1].getFuelConsumption() << endl;
                cout << "Car's number: " << cars[1].getCarNum() << endl;
                cout << "Employee responsible: " << cars[1].getEmployee() << endl;
                cout << "\nThank you for your purchase!\n" << endl;
                

                Purchases purchase1{cars[1].getModel(), cars[1].getPrice(), customers[customer_num].getName(), ask_loan};
                purchases.push_back(purchase1);
                customers[customer_num].setPurchasingHistory(cars[0].getModel());

                return 0;
                break;

            }

        }
        else if (car_num == 3){
            cout << "You have bought: \n" << endl;
            cout << "Car model: " << cars[2].getModel() << endl;
            cout << "Price: " << cars[2].getPrice() << endl;
            cout << "Is loan availabale? "<< cars[2].getIsLoanAvaibale() << endl;
            cout << "Condition: " << cars[2].getCondition() << endl;
            cout << "Manufacture year: " << cars[2].getManufacturerYear() << endl;
            cout << "Color: " << cars[2].getColor() << endl;
            cout << "Car Equipment Type: " << cars[2].getCarEquipmentType() << endl;
            cout << "Transmussion: " << cars[2].getTransmission() << endl;
            cout << "Powertrain layout: " << cars[2].getPowertrainLayout() << endl;
            cout << "Car's cize: " << cars[2].getSize() << endl;
            cout << "Engine Power: " << cars[2].getEnginePower() << endl;
            cout << "Engine Volume: " << cars[2].getEngineVolume() << endl;
            cout << "Engine Type: " << cars[2].getEngineType() << endl;
            cout << "Tank Volume: " << cars[2].getFuelTankVolume() << endl;
            cout << "Acceleration Speed: " << cars[2].getAccelerationSpeed() << endl;
            cout << "Fuel Consumprtion: " << cars[2].getFuelConsumption() << endl;
            cout << "Car's number: " << cars[2].getCarNum() << endl;
            cout << "Employee responsible: " << cars[2].getEmployee() << endl;
            cout << "\nThank you for your purchase!\n" << endl;
            

            Purchases purchase1{cars[2].getModel(), cars[2].getPrice(), customers[customer_num].getName(), ask_loan};
            purchases.push_back(purchase1);
            customers[customer_num].setPurchasingHistory(cars[2].getModel());

            return 0;
            break;
        }
        else{
            cout << "There is no such car number. Please try again." << endl;
            return 0;
            break;
        }
        
    }
    return 0;
};



int ask_customer_info(vector<Customer>& customers,vector<Purchases>& purchases, vector<Car>& cars, vector<Equipment>& equipments, vector<Worker>& workers ){

    cout << "Welcome!" << endl;
    cout << "Please enter your name: ";
    cin >> ask_name;
    cout << "Please enter your email: ";
    cin >> ask_email;
    cout << "Please enter your phone number: ";
    cin >> ask_phone;
    cout << "Please enter your address: ";
    cin >> ask_address;
    cout << "Please enter car number you would like to buy: ";
    cin >> ask_car_num;

    
    Customer customer1{ask_name, ask_email, ask_phone, ask_address}; // creating a customer
    customers.push_back(customer1); // adding customer to vector

    buy_car(ask_car_num, customer_num, customers, purchases, cars, equipments,workers); // calling a function to buy a car
    return 0;
};


int show_customer_info(vector<Customer>& customers,int customer_num){

    for(int i=0; i < customers.size(); i++){
        if (i == customer_num){
            cout << customers[i].print_greetings() << endl;
            cout << "Customer info: " << endl;
            cout << "Customer number: " << customer_num << endl;
            cout << "Name: " << customers[i].getName() << endl;
            cout << "Email: " << customers[i].getEmail() << endl;
            cout << "Phone number: " << customers[i].getPhone() << endl;
            cout << "Address: " << customers[i].getAddress() << endl;
            cout << "Purchasing history: " << customers[i].getPurchasingHistory() << endl;
            cout << "Customer status: " << customers[i].getCustomerStatus() << endl;
        }
    }

    return 0;
};

int show_worker_info(vector<Worker>& workers){

    cout << "Enter number of worker you would like to see: " << endl;
    cin >> ask_worker_num;

    for(int i=0; i < workers.size(); i++){
        if (i == ask_worker_num){
            cout << workers[i].print_greetings() << endl;
            cout << "Worker info: " << endl;
            cout << "Worker number: " << ask_worker_num << endl;
            cout << "Name: " << workers[i].getName() << endl;
            cout << "Email: " << workers[i].getEmail() << endl;
            cout << "Phone number: " << workers[i].getPhone() << endl;
            cout << "Address: " << workers[i].getAddress() << endl;
            cout << "Department: " << workers[i].getDepartment() << endl;
            cout << "Start work at: " << workers[i].getStartWorkAt() << endl;
            
        }
    }

    return 0;
};

int main() {

    vector<Customer> customers; // making a vector of customers
    vector<Purchases> purchases;
    vector<Worker> workers;
    vector<Car> cars;
    vector<Equipment> equipments;

    Worker worker1{"Kata","Sales","kata@cats.com","123456789","Cats street"};
    workers.push_back(worker1);
    Worker worker2{"SooHyuk","Marketing","soohyuk@cats.com","987654321","Cats street 2"};
    workers.push_back(worker2);
    Worker worker3{"BangChan","Director","bangchan@cats.com","123456789","Cats street 3"};
    workers.push_back(worker3);

    Equipment equipment1{"Premium",'Y','Y','Y','Y','Y','Y','Y','Y','Y','Y'};
    equipments.push_back(equipment1);
    Equipment equipment2{"Standard",'N','Y','N','Y','N','Y','N','Y','N','Y'};
    equipments.push_back(equipment2);
    Equipment equipment3{"Upgraded",'Y','Y','N','Y','Y','Y','N','Y','Y','Y'};
    equipments.push_back(equipment3);

    Car car1{"KIA","Soul",80000,'Y',"New",2021,"white,red",equipment1.getType(),"Automatic","Front","4195x1800x1610",110,2,"Petrol",54,10.2,10.8,worker1.getName()};
    cars.push_back(car1);
    Car car2{"Car2","Soul2",40000,'N',"Used",2021,"black",equipment2.getType(),"Automatic","Front","4100x1700x1510",100,2,"Petrol",50,7.2,9.8,worker2.getName()};
    cars.push_back(car2);
    Car car3{"Car3","Soul3",60000,'Y',"New",2021,"white",equipment3.getType(),"Automatic","Front","4195x1800x1610",110,2,"Petrol",54,10.2,10.8, worker3.getName()};
    cars.push_back(car3);

    while (true)
    {
        cout << "Would you like to: 1 = buy car, 2 = show custumer info, 3 = show worker info, 4 = exit)" << endl;
        cin >> ask_main_fun;


        if (ask_main_fun == 1)
        {
            ask_customer_info(customers, purchases, cars, equipments, workers);
        }
        else if (ask_main_fun == 2)
        {
            cout << "Please enter customer number: " << endl;
            cin >> customer_num;
            show_customer_info(customers, customer_num);
        }
        else if (ask_main_fun == 3)
        {
            show_worker_info(workers);
        }
        else if (ask_main_fun == 4)
        {
            cout << "Thank you for visiting our website!" << endl;
            return 0;
            break;
        }
        else
        {
            cout << "Please enter 1, 2 or 3"  << endl;
        }
        
    }
    
}








