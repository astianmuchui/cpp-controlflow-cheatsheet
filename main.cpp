#include <iostream>
using namespace std;
enum eyecolor{brown,blue,green,gray,other};
float sum(float a,float b);
//Default value on the second parameter in the below function meaning an argument does not have to be provided when invoking the function
void celebrateBirthday(int* age);
void introduceMe(string name,int age=15);

//object oriented programming
class Car{
//    by default acess modifier is private
// public is accesible anywhere
// protected is accesible in child classes
protected:
    string Name;
    string colour;
    double Price;
    bool Broken;
// In cpp , a constructor has the same name as the class name
public:
    Car(string name, string color, double price,bool broken) {
        Name = name;
        colour = color;
        Price = price;
        Broken = false;
    }

    void getInfo() {
        cout << "Car name: " << Name << endl;
        cout << "Car name: " << colour << endl;
        cout << "Car name: " << Price << endl;

    }
    void crashcar(){
       cout<<Name<<" crashed"<<endl;
       Broken = true;
    }
    void repair(){
        cout<<Name<<" fixed"<<endl;
        Broken = false;
    }
    void move(){
        if(Broken){
            cout<<"car is broken \n";
        }else{
            cout<<"car is moving \n";
        }
    }
};
// inheritance
class FlyingCar:public Car{
    // inherit constructor
public:
    FlyingCar(string name,string color,double price,bool broken):Car(name,color,price,broken){

    }
    void move(){
        if(Broken){
            cout<<"car is broken \n";
        }else{
            cout<<"car is flying \n";
        }
    }
};
//polymorphism
class UnderwaterCar:public Car{
    // inherit constructor
public:
    UnderwaterCar(string name,string color,double price,bool broken):Car(name,color,price,broken){

    }
    void move(){
        if(Broken){
            cout<<"car is broken \n";
        }else{
            cout<<"car is diving \n";
        }
    }


};
int main(){
    int ag = 25;
    //re-declare variable
    ag = 26;
    float weight = 74.8;
    double balance = 12345.67;
    char gender = 'f';
    string username = "shadow walker";

    bool weekend = true;
    //Arrays
    string fruits[10] = {"cherry","mango","orange"};
    fruits[3] = "pear";

    // Conditionals
    bool cool = true;
    if(cool&&weekend){
       cout<<"cool and weekend"<<endl;
    }else if(cool && !weekend){
        cout<<"cool but not weekend"<<endl;
    }else{
        cout<<"Go somewhere";
    }

//        Conditionals can be nested

    //short hand syntax
//    cool? cout<<"cool" : cout<<"not cool";


    //Switch and case
    eyecolor eycl = brown;
    switch(eycl){
        case brown: cout<<"Brown color";break;
        case blue: cout<<"blue color";break;
        case green: cout<<"green color";break;
        case gray: cout<<"gray color";break;
        case other: cout<<"other color";break;
        default:cout<<"Not valid eye color";break;

    }


    //Loops
    //while loops
    int counter = 1;
    cout<<"while loop \n";
    while(counter<=10){
        cout<<counter<<endl;
        counter++;
    }
    // do while loop
    cout<<"do while loop \n";
    int dowhilecounter = 0;
    do{
        cout<<dowhilecounter<<endl;
        dowhilecounter++;
    }while(dowhilecounter<=10);
    //  for loop
    string names[4] = {"jill","bill","mill","john"};
    for(int i = 0; i<4; i++) {
        cout<<names[i]<<endl;
    }
    //functions
    cout<<sum(2.2,2.5)<<endl;
    introduceMe("Algosmith",25);

    //pointers
    int myAge = 24;
    cout<<"Before function, my age was "<<myAge<<endl;
    celebrateBirthday(&myAge);
    cout<<"After function, my age is "<<myAge<<endl;


    // pointers with arrays
    int nums[5] = {1,2,3,4,5};
    int* pointer = nums;
    cout<<"Pointing to "<<pointer<<", value: "<<*pointer<<endl;
    pointer++;
    cout<<"Pointing to "<<pointer<<", value: "<<*pointer<<endl;
    // Implementation of OOP
    Car myCar;
    myCar.Name = "Tesla";
    myCar.colour = "White";
    myCar.Price = 25000000;
    cout<<"Car name: "<<myCar.Name<<endl;

    // method 2 of implementing

    Car newCar("Ford","red",500000,false);
    cout<<"Car name: "<<newCar.Name<<endl;
    cout<<"Car name: "<<newCar.colour<<endl;
    cout<<"Car name: "<<newCar.Price<<endl;


    //call class method
    newCar.getInfo();
    newCar.move();
    //Encapsulation
    newCar.crashcar();
    newCar.move();

    FlyingCar skyfury("sky fury","black",5000,false);
    skyfury.getInfo();
    skyfury.move();
    UnderwaterCar seafury("sea fury","black",50000,false);
    seafury.move();
    // Applying pointers in oop polymorphism
    Car* car1 = &skyfury;
    Car* car2 = &seafury;

    car1->crashcar();
    car2->crashcar();

    system("pause>0");
}
//Functions
float sum(float a,float b){
    return a+b;
};
void introduceMe(string name, int age){
    cout<<"my name is "<<name<<" and i am "<<age<<" years old"<<endl;
}
//the * is for adresses and pointers
void celebrateBirthday(int* age){
    (*age)++;

    cout<<"Your "<< *age << "'th birthday"<<endl;
}