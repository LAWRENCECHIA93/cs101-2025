#include <iostream>
#include <string.h>
using namespace std;

class Car {
    protected:
        string m_DriveMode = "No-wheel";
        
    private:
        int m_MaxSeating;
        int m_price;
        void m_UpDatePrice(int base = 500000){
            m_price = base * m_MaxSeating;
        }
        
    public:
        string m_brand, m_model;
        int m_year;
    
    
    Car (string x, string y, int z, int s){
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        m_UpDatePrice();
    }
    
    int get_MaxSeating(){
        return m_MaxSeating;
    }
    
    int get_Price(){
        return m_price;
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
    
};

class BMW_Car : public Car{
    
    public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s){
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Rear-wheel";
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class AUDI_Car : public Car{
    
    public:
    AUDI_Car(string y, int z, int s) : Car("Audi", y, z, s){
        cout << "Constructing AUDI_Car\n";
        m_DriveMode = "Front-wheel";
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class BENZ_Car : public Car{
    
    public:
    BENZ_Car(string y, int z, int s) : Car("Benz", y, z, s){
        cout << "Constructing Benz_Car\n";
        m_DriveMode = "Front-wheel";
    }
    
    string get_DriveMode(){
        return m_DriveMode;
    }
};



int main(){
    
    BMW_Car car_1("X5", 2023, 6);
    cout << car_1.m_brand;
    cout << " Drive Mode = " << car_1.get_DriveMode() << endl;
    
    AUDI_Car car_2("A1", 2023, 5);
    cout << car_2.m_brand;
    cout << " Drive Mode = " << car_2.get_DriveMode() << endl;
    
    BENZ_Car car_3("X8", 2024, 8);
    cout << car_3.m_brand;
    cout << " Drive Mode = " << car_3.get_DriveMode() << endl;
    
    return 0;
}
