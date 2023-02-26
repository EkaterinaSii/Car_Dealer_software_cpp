#include<iostream>
using namespace std;

class Car {
    private:

        string manufacturer;
        string model;
        float price;
        char isLoanAvailable;
        string condition;
        int manufacturerYear;
        string color;
        string carEquipmentType;
        string transmission;
        string powertrainLayout;
        string size;
        int enginePower;
        int engineVolume;
        string engineType;
        int fuelTankVolume;
        float accelerationSpeed;
        float fuelConsumption;
        char soldOrNot;
        string employee;
        static int carNum;


    public:
        Car(string man, string model, int price, char loan, string cond, int year, string color, string equip, string trans, string powertrain, string sizeCar, int power, int engVolume, string engType, int tankVolume, float accSpeed, float fuelCon, string employee ):Car(){
            setManufacturer(man);
            setModel(model);
            setPrice(price);
            setIsLoanAvailable(loan);
            setCondition(cond);
            setManufacturerYear(year);
            setColor(color);
            setCarEquipmentType(equip);
            setTransmission(trans);
            setPowertrainLayout(powertrain);
            setSize(sizeCar);
            setEnginePower(power);
            setEngineVolume(engVolume);
            setEngineType(engType);
            setFuelTankVolume(tankVolume);
            setAccelerationSpeed(accSpeed);
            setFuelConsumption(fuelCon);
            setEmployee(employee);

        }

        Car(){
            setSoldOrNot('N');
            carNum++;
            cout << "Car ID: " << carNum << endl;
        }

        void setManufacturer(string m){
            manufacturer = m;
        };

        string getManufacturer() const{
            return manufacturer;
        };

        void setModel(string m){
            model = m;
        };

        string getModel() const{
            return model;
        };

        void setPrice(float p){
            price = p;
        };

        float getPrice() const{
            return price;
        };

        void setIsLoanAvailable(char l){
            isLoanAvailable = l;
        };

        char getIsLoanAvaibale() const{
            return isLoanAvailable;
        };

        void setCondition(string c){
            condition = c;
        };

        string getCondition() const{
            return condition;
        };

        void setManufacturerYear(int y){
            manufacturerYear = y;
        };

        int getManufacturerYear() const{
            return manufacturerYear;
        };

        void setColor(string c){
            color = c;
        };

        string getColor() const{
            return color;
        };

        void setCarEquipmentType(string t){
            carEquipmentType = t;
        };

        string getCarEquipmentType() const{
            return carEquipmentType;
        };

        void setTransmission(string tr){
            transmission = tr;
        };

        string getTransmission() const{
            return transmission;
        };

        void setPowertrainLayout(string p){
            powertrainLayout = p;
        };

        string getPowertrainLayout() const{
            return powertrainLayout;
        };

        void setSize(string s){
            size = s;
        };

        string getSize() const{
            return size;
        };

        void setEnginePower(int p){
            enginePower = p;
        };

        int getEnginePower() const{
            return enginePower;
        };

        void setEngineVolume(int e){
            engineVolume = e;
        };

        int getEngineVolume() const{
            return engineVolume;
        };

        void setEngineType(string t){
            engineType = t;
        };

        string getEngineType() const{
            return engineType;
        };

        void setFuelTankVolume(int v){
            fuelTankVolume = v;
        };

        int getFuelTankVolume() const{
            return fuelTankVolume;
        };

        void setAccelerationSpeed(float a){
            accelerationSpeed = a;
        };

        float getAccelerationSpeed() const{
            return accelerationSpeed;
        };

        void setFuelConsumption(float f){
            fuelConsumption = f;
        };

        float getFuelConsumption() const{
            return fuelConsumption;
        };

        void setSoldOrNot(char w){
            soldOrNot = w;
        };

        char geteSoldOrNot() const{
            return soldOrNot;
        };

        void setEmployee(string e){
            employee = e;
        };

        string getEmployee() const{
            return employee;
        };

        int getCarNum() const{
            return carNum;
        };

        void display_info(){
            cout << "Manufacturer: " << getManufacturer() << endl;
            cout << "Model: " << getModel() << endl;
            cout << "Price: " << getPrice() << endl;
            cout << "Is loan available: " << getIsLoanAvaibale() << endl;
            cout << "Condition: " << getCondition() << endl;
            cout << "Manufacturer year: " << getManufacturerYear() << endl;
            cout << "Color: " << getColor() << endl;
            cout << "Car equipment type: " << getCarEquipmentType() << endl;
            cout << "Transmission: " << getTransmission() << endl;
            cout << "Powertrain layout: " << getPowertrainLayout() << endl;
            cout << "Size: " << getSize() << endl;
            cout << "Engine power: " << getEnginePower() << endl;
            cout << "Engine volume: " << getEngineVolume() << endl;
            cout << "Engine type: " << getEngineType() << endl;
            cout << "Fuel tank volume: " << getFuelTankVolume() << endl;
            cout << "Acceleration speed: " << getAccelerationSpeed() << endl;
            cout << "Fuel consumption: " << getFuelConsumption() << endl;
            cout << "Sold or not: " << geteSoldOrNot() << endl;
            cout << "Employee responsible: " << getEmployee() << endl;
        };

        void mark_as_sold(){
            setSoldOrNot('Y');
            cout << "The car is sold now!" << endl;
        };








};