//
//  Next.cpp
//  Zoo Project
//
//  Created by Ruby Moeketsi on 2023/10/31.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Animal{
protected:
    string name;

public:
    Animal(const string& name): name(name){}
    virtual void pet()=0;
    
};

class Tiger : public Animal{
public:
    Tiger (const string& tigerName) : Animal(tigerName){}
    void pet() override {
        cout << name << "the tiger purrs happily when you pet it!" <<endl;
        
    }

};

class Elephant : public Animal{
public:
    Elephant (const string& elephantName) : Animal(elephantName){}
    void pet() override {
        cout << name << "the elepant truimps loudly when you pet it!" <<endl;
        
    }

};

class Owl : public Animal{
public:
    Owl (const string& owlName) : Animal(owlName){}
    void pet() override {
        cout << name << "the owl will sit on your shoulder!" <<endl;
        
    }

};

int main() {
    vector<Animal*> zoo;
    
    cout << "Welcome to the Animal Fest!" << endl;
    
    Tiger tiger("Stripey");
    Elephant elephant("Dumbo");
    Owl owl ("MidnightStarring");
    
    string choice, choice2;
    
    while (true){
        cout << "Enter the animal you would like to see (Tiger, Elephant, Owl) or 'exit' to quit:";
        getline(cin, choice);
        
        if (choice == "exit"){
            break;
        }
        cout << "Would you like to pet the animal you have chosen? (Yes or No)";
        getline(cin, choice2);
        
        if (choice2 == "No"){
            break;
        }
        bool animalFound = false;

        for (Animal* animal : zoo){
            
            if (animal->name == choice){
                animal->pet();
                animalFound = true;
                break;
            }
            
            if(!animalFound){
                cout << "Sorry, that animal is not in the zoo" << endl;
            }
            
        }
        
        
    }
    
    return 0;
    
}
