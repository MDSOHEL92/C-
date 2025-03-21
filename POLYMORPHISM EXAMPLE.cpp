#include<iostream>
using namespace std;
// Polymorphism  example

// Base class
class Animal
{
  public:
    void animalSound() 
	{
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal
{
  public:
    void animalSound() 
	{
      cout << "The pig says: wee wee \n";
    }
};
// Derived class
class Dog : public Animal  
 {
  public:
    void animalSound()
	 {
      cout << "The dog says: bow wow \n";
    }
};

int main()
{
	Animal myAnimal;
	Pig myPig;
	Dog myDog;
	
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
}
