#include <iostream>
class Automobile {
    private:
        std::string name;
        int maxSpeed;
    public:
        Automobile() {
            name = "BMW";
            maxSpeed = 100;
        }
        Automobile(std::string n, int s) {
            name = n;
            maxSpeed = s;
        }
        ~Automobile(){

        }
        virtual int cost() {
           int cost = maxSpeed*100;
           return cost;
        }
        virtual void upgrade() {
           maxSpeed += 10;
        }
        void information() {
            std::cout << "Car Name: " << name;
            std::cout << " | maxSpeed: " << maxSpeed;
            std::cout << " | Car Cost: " << cost() << std::endl;
        }
        friend class OtherMobile;
};
class OtherMobile : public Automobile {
    public:
        OtherMobile(std::string n, int s) : Automobile(n,s) {

        }
        int cost() override {
            int cost = maxSpeed*250;
            return cost;
        }
        void upgrade() override {
            maxSpeed += 5;
        }
};

int main() {
    std::cout << "Car 1:" << std::endl;
    Automobile car1("Audi", 140);
    car1.information();

    std::cout << "Car 2:" << std:: endl;
    OtherMobile car2("BMW", 160);
    car2.information();

    std::cout << "Cars upgrading..." << std::endl;
    car1.upgrade();
    car2.upgrade();

    std::cout << "Cars After The Upgrade: " << std::endl;
    std::cout << "Car 1:" << std::endl;
    car1.information();

    std::cout << "Car 2:" << std:: endl;
    car2.information();
    return 0;
}
