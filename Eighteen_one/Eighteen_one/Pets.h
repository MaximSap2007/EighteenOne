#pragma once
#include <iostream>
#include <string>
#include<fstream>

class Pets {
public:
    std::string pet;

    Pets(std::string& pet) : pet(pet) {
        std::cout << "\nChoose dog, cat, or parrot: ";
        std::cin >> this->pet;
    }
};

class Dogs : public Pets {
public:
    Dogs(std::string& pet) : Pets(pet) 
    {
        std::string name;
        std::string breed;
        int age;
        std::string file = "AboutMyPet.txt";
        
        std::cout << "\nGood choice!\n";
        std::cout << "\nPress the name of your pet:"; std::cin >> name;
        std::cout << "\nWhat's your pet age?:"; std::cin >> age;

        std::cout << "\nInput your dogs breed(Labrador Retriever ,German Shepherd ,Golden Retriever ,Bulldog ,Beagle ,Poodle ,Rottweiler ,Siberian Husky , Dachshund or Great Daneetc etc.):"; std::cin >> breed;
        
        if(breed == "Labrador Retriever")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file); 
            std::cout << "Your data was saved into file("<<file<<")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl <<"Age:"<<age;
            FILE.close();

        }
        else if(breed == "German Shepherd")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        else if (breed == "Golden Retriever")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        else if (breed == "Bulldog")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        
        else if (breed == "Beagle")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        else if (breed == "Poodle")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        else if (breed == "Rottweiler")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        else if (breed == "Siberian Husky")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        else if (breed == "Dachshund")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
        else if(breed == "Great Daneetc")
        {
            std::cout << "Ok, your pet`s name is" << name << "and it`s breed is" << breed;
            std::ofstream FILE(file);
            std::cout << "Your data was saved into file(" << file << ")";
            FILE << "Name:" << std::endl << "Breed:" << std::endl << "Age:" << age;
            FILE.close();
        }
    }
};

/*class Cats : public Pets {
public:
    Cats(std::string& pet) : Pets(pet) 
    {
        std::string name;
        std::string breed;

        std::cout << "Good choice!\n";
        std::cout << "Press the name of your pet:"; std::cin >> name;
        std::cout << "Input your cats breed(Persian,Maine Coon,Siamese,Ragdoll,Bengal,Sphynx,British Shorthair,Abyssinian or Scottish Fold etc.):"; cin >> breed;

        if () {}
        else if () {}
        else if () {}
        else if () {}

        else if () {}
        else if () {}
        else if () {}

        else if () {}
        else if () {}

        else if () {}

        else() {}
    }
};

class Parrots : public Pets {
public:
    Parrots(std::string& pet) : Pets(pet) {}
};
*/