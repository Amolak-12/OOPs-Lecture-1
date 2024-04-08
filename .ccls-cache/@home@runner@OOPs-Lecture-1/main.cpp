#include <iostream>
using namespace std;

class Animal{
int weight;
//State or Properties
public:
int age;
string name;

//Default Constructor
Animal()
{
  this->weight = 0;
  this->age = 0;
  this->name = "";
  cout << "Constructor called!!!" << endl;
}

//Parameterized Constructor 1
Animal(int age)
{
  this->age = age;
  cout << "Parameterized Constructor 1 called!!!" << endl;
}

//Parameterized Constructor 2
Animal(int age,int weight)
{
  this->age = age;
  this->weight = weight;
  cout << "Parameterized Constructor 2 called!!!" << endl;
}
//Parameterized Constructor 3
Animal(int age,int weight,string name)
{
  this->age = age;
  this->weight = weight;
  this->name = name;
  cout << "Parameterized Constructor 3 called!!!" << endl;
}

//Copy Constructor
Animal(Animal &obj)
{
  this->age = obj.age;
  this->weight = obj.weight;
  this->name = obj.name;
  cout << "Copy Constructor  called!!!" << endl;
}

//Methods / Functions / Behaviour

void eat()
{
  cout << "Eating" << endl;
  
}

void sleep()
{
  cout << "Sleep after 2 hours. " << endl;
}

int getWeight()
{
  return weight;
}
void setWeight(int weight)
{
  //(this->) is a pointer to current object(Animal)
  //used for getting away from confusion
  this->weight = weight;
}
~Animal()
{
  cout << "Calling Destructor" << endl;
}
};

int main() {

  // //
  // //Static Memory Allocation (Stack (a small storage))
  // //
  
  // //Giving name to the class
  // Animal ramesh;

  // //Inserting values in the States (line 8,9)
  // ramesh.age = 15;
  // ramesh.name = "Tiger";

  // //Printing values
  // cout << "Ramesh's Age : " << ramesh.age << endl;
  // cout << "Ramesh's Name : " << ramesh.name << endl;
  // ramesh.eat();
  // ramesh.sleep();

  // //Setting and Getting the values of a private variable
  // ramesh.setWeight(100);
  // cout << "Ramesh's Weight : " << ramesh.getWeight() << endl;


  // //Dynamic Memory Allocation (Heap(a very large storage))

  // Animal* suresh = new Animal;

  // //1st option
  // (*suresh).age = 13;
  // (*suresh).name = "Horse";
  // //2nd option
  // suresh->age = 17;
  // suresh->name = "Buffalo";

  // suresh->eat();
  // suresh->sleep();

  // //Calliing Default Constructor
  // Animal a;
  // Animal* b = new Animal();
  // b->name = "Cow";

  // //Calling Parameterized Constructor 1
  // Animal c(10);
  // Animal* d = new Animal(20);
  //  d->name = "Cow";

  // //Calling Parameterized Constructor 2
  // Animal e(30,50);
  // Animal* f = new Animal(40,60);
  //  f->name = "Cow";

  // //Calling Parameterized Constructor 3
  // Animal g(50,70,"Monkey");
  // Animal* h = new Animal(60,80,"Monkey");
  //  h->name = "Cow";

  // // Caling copy Constructor
  // Animal c(10,20,"Monkey");
  // Animal i(c);

  //Destructor

  // Automatically called in static memory allocation
  Animal amolak;

  //Manually called in dynamically memory allocation
  Animal *amolaki = new Animal;
  amolaki->name = "Amolak";
  delete amolaki;
  
}