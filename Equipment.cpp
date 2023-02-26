#include<iostream>
using namespace std;

class Equipment{
    private:
        string type;
        char HAC;
        char AutomaticDoorLocker;
        char ABS;
        char ParkingSensors;
        char TPMS;
        char BAS;
        char AirBags;
        char RearArmrestwithCupholders;
        char LuggageShelf;
        char Bluetooth;

    public:

        Equipment(string t, char h, char ad, char abs, char p, char t1, char b, char ab, char ra, char l, char bl):Equipment(){
            setType(t);
            setHAC(h);
            setAutomaticDoorLocker(ad);
            setABS(abs);
            setParkingSensors(p);
            setTPMS(t1);
            setBAS(b);
            setAirBags(ab);
            setRearArmrestwithCupholders(ra);
            setLuggageShelf(l);
            setBluetooth(bl);
        };

        Equipment(){
            cout << "Equipment is created." << endl;
        };

        void setType(string t){
            type = t;
        };

        string getType()const{
            return type;
        };

        void setHAC(char h){
            HAC = h;
        };

        char getHAC()const{
            return HAC;
        };

        void setAutomaticDoorLocker(char d){
            AutomaticDoorLocker = d;
        };

        char getAutomaticDoorLocker()const{
            return AutomaticDoorLocker;
        };

        void setABS(char a){
            ABS = a;
        };

        char getABS() const{
            return ABS;
        };

        void setParkingSensors(char p){
            ParkingSensors = p;
        };

        char getParkingSensors()const{
            return ParkingSensors;
        };

        void setTPMS(char t){
            TPMS = t;
        };

        char getTPMS()const{
            return TPMS;
        };

        void setBAS(char b){
            BAS = b;
        };

        char getBAS()const{
            return BAS;
        };

        void setAirBags(char a){
            AirBags = a;
        };

        char getAirBags()const{
            return AirBags;
        };

        void setRearArmrestwithCupholders(char c){
            RearArmrestwithCupholders = c;
        };

        char getRearArmrestwithCupholders()const{
            return RearArmrestwithCupholders;
        };

        void setLuggageShelf(char l){
            LuggageShelf = l;
        };

        char getLuggageShelf() const{
            return LuggageShelf;
        };

        void setBluetooth(char b){
            Bluetooth = b;
        };

        char getBluetooth()const{
            return Bluetooth;
        };

        void display_info(){
            cout << "Equipment Type: " << getType() << endl;
            cout << "HAC: " << getHAC() << endl;
            cout << "Automatic Door Locker: " << getAutomaticDoorLocker() << endl;
            cout << "ABS: " << getABS() << endl;
            cout << "Parking Sensors: " << getParkingSensors() << endl;
            cout << "TPMS: " << getTPMS() << endl;
            cout << "BAS: " << getBAS() << endl;
            cout << "Air Bags: " << getAirBags() << endl;
            cout << "Rear Armrest with Cupholders: " << getRearArmrestwithCupholders() << endl;
            cout << "Luggage Shelf: " << getLuggageShelf() << endl;
            cout << "Bluetooth: " << getBluetooth() << endl;
        }






};