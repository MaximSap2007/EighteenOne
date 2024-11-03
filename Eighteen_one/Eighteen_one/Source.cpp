#include<iostream>
#include <string>
#include<fstream>

class Home_pet
{
public:
    std::string pet;

    Home_pet(std::string& pet) : pet(pet)
    {
        std::cout << "Let us go to the next step!\n";
    }
};
//вигадати як зберегти дані про творин у файл!
class Dogs : public Home_pet
{
public:
    std::string file = "AboutMyDog.txt";
    Dogs(std::string& pet, std::string& name ,std::string& breed, std::string& breedTwo , int& age) : Home_pet(pet)
    {
       
        

        std::cout << "\nGood choice!\n";
        std::cout << "\nPress the name of your pet:"; std::cin >> name;
        std::cout << "\nWhat's your pet age?:"; std::cin >> age;

        if( 0 < age < 20)
        {
            std::cout << "Dogs:\n";
            std::cout << "\nInput your dogs breed(Labrador Retriever ,German Shepherd ,Golden Retriever ,Bulldog ,Beagle ,Poodle ,Rottweiler ,Siberian Husky , Dachshund or Great Daneetc etc.):"; std::cin >> breed;

            if (breed == "Labrador" || breedTwo == "Retriever")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nFriendly, outgoing, and high-energy. Great with families.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Friendly, outgoing, and high-energy. Great with families.";
                FILE.close();

            }
            else if (breed == "German" || breedTwo == "Shepherd")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nIntelligent, versatile, and loyal. Often used in police and military roles.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Intelligent, versatile, and loyal. Often used in police and military roles.";
                FILE.close();
            }
            else if (breed == "Golden" || breedTwo == "Retriever")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nAffectionate, intelligent, and friendly. Excellent companions.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Affectionate, intelligent, and friendly. Excellent companions.";
                FILE.close();
            }
            else if (breed == "Bulldog")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nCalm, courageous, and friendly. Known for their wrinkled face and distinctive pushed-in nose.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Calm, courageous, and friendly. Known for their wrinkled face and distinctive pushed-in nose.";
                FILE.close();
            }

            else if (breed == "Beagle")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nCurious, friendly, and merry. Excellent scent hounds.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Curious, friendly, and merry. Excellent scent hounds.";
                FILE.close();
            }
            else if (breed == "Poodle")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nIntelligent, active, and trainable. Comes in standard, miniature, and toy sizes.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Intelligent, active, and trainable. Comes in standard, miniature, and toy sizes.";
                FILE.close();
            }
            else if (breed == "Rottweiler")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nConfident, fearless, and good-natured. Strong and robust, often used as guard dogs.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Confident, fearless, and good-natured. Strong and robust, often used as guard dogs.";
                FILE.close();
            }
            else if (breed == "Siberian" || breedTwo == "Husky")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nEnergetic, friendly, and gentle. Known for their striking blue eyes and stamina.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Energetic, friendly, and gentle. Known for their striking blue eyes and stamina.";
                FILE.close();
            }
            else if (breed == "Dachshund")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nClever, lively, and courageous. Short-legged, long-bodied, great for burrowing.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Clever, lively, and courageous.Short - legged, long - bodied, great for burrowing.";
                FILE.close();
            }
            else if (breed == "Great" || breedTwo == "Daneetc")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nGentle, affectionate, and friendly. Known for their towering height.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Gentle, affectionate, and friendly. Known for their towering height.";
                FILE.close();
            }
        }
        else
        {
            std::cout << "Sorry, but we got some error! Please restart your program!";
        }
    }
};

class Cats : public Home_pet 
{
public:
    
    std::string file = "AboutMyCat.txt";
    
    Cats(std::string& pet, std::string& name, std::string& breed, std::string& breedTwo, int& age) : Home_pet(pet)
    {



        std::cout << "\nGood choice!\n";
        std::cout << "\nPress the name of your pet:"; std::cin >> name;
        std::cout << "\nWhat's your pet age?:"; std::cin >> age;
        if (0 < age < 15)
        {
            std::cout << "Cats:\n";
            std::cout << "\nInput your cats breed(Persian ,Maine Coon ,Siamese ,Ragdoll ,Bengal ,Sphynx ,British Shorthair , Abyssinian or Scottish Fold etc.):"; std::cin >> breed;

            if (breed == "Persian")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nKnown for their long, luxurious fur and flat faces. They are quiet, gentle, and affectionate.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << breedTwo << ";" << std::endl << "Age:" << age << ";"
                    << std::endl << "Known for their long, luxurious fur and flat faces. They are quiet, gentle, and affectionate.";
                FILE.close();

            }
            else if (breed == "Maine" || breedTwo == "Coon")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nOne of the largest domestic cat breeds with tufted ears and bushy tails. They are friendly, playful, and intelligent.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " "
                    << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "One of the largest domestic cat breeds with tufted ears and bushy tails. They are friendly, playful, and intelligent.";
                FILE.close();
            }
            else if (breed == "Siamese")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nSlim, elegant cats with striking blue almond-shaped eyes and short coats. They are vocal, social, and affectionate.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Slim, elegant cats with striking blue almond-shaped eyes and short coats. They are vocal, social, and affectionate.";
                FILE.close();
            }
            else if (breed == "Ragdoll")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nLarge, soft cats known for their striking blue eyes and docile nature. They are gentle, friendly, and love to be held.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Large, soft cats known for their striking blue eyes and docile nature. They are gentle, friendly, and love to be held.";
                FILE.close();
            }
            else if (breed == "Bengal")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nKnown for their wild, leopard-like appearance. They are active, intelligent, and love to climb and play.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Known for their wild, leopard-like appearance. They are active, intelligent, and love to climb and play.";
                FILE.close();
            }
            else if (breed == "Sphynx")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nHairless cats with wrinkled skin and large ears. They are affectionate, playful, and love human attention.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Hairless cats with wrinkled skin and large ears. They are affectionate, playful, and love human attention.";
                FILE.close();
            }
            else if (breed == "British" || breedTwo == "Shorthair")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nSturdy cats with round faces and dense coats. They are calm, easygoing, and make great companions.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Sturdy cats with round faces and dense coats. They are calm, easygoing, and make great companions.";
                FILE.close();
            }
            else if (breed == "Abyssinian")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nSleek, athletic cats with ticked coats. They are curious, active, and love to explore.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Sleek, athletic cats with ticked coats. They are curious, active, and love to explore.";
                FILE.close();
            }
            else if (breed == "Scottish" || breedTwo == "Fold")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nKnown for their unique folded ears. They are gentle, affectionate, and get along well with children and other pets.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Known for their unique folded ears. They are gentle, affectionate, and get along well with children and other pets.";
                FILE.close();
            }
        }
        else
        {
            std::cout << "Sorry, but we got some error! Please restart your program!";
        }
    }
};

class Parrots : public Home_pet 
{
public:

    std::string file = "AboutMyParrot.txt";
    
    Parrots(std::string& pet, std::string& name, std::string& breed, std::string& breedTwo, int& age) : Home_pet(pet)
    {
        std::cout << "\nGood choice!\n";
        std::cout << "\nPress the name of your pet:"; std::cin >> name;
        std::cout << "\nWhat's your pet age?:"; std::cin >> age;

        if( 0 < age < 60)
        {
            std::cout << "Parrots:\n";
            std::cout << "\nInput your parrots breed(African Grey ,Macaw ,Cockatiel ,Amazon Parrot ,Budgerigar (Budgie) ,Cockatoo ,Lovebird ,Eclectus Parrot , Quaker Parrot or Conure etc.):"; std::cin >> breed;

            if (breed == "African" || breedTwo == "Grey")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nHighly intelligent and excellent talkers. Known for their problem-solving skills and empathetic nature.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Highly intelligent and excellent talkers. Known for their problem-solving skills and empathetic nature.";
                FILE.close();

            }
            else if (breed == "Macaw")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nLarge and colorful, with long tails and striking appearances. They are social, playful, and quite loud.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Large and colorful, with long tails and striking appearances. They are social, playful, and quite loud.";
                FILE.close();
            }
            else if (breed == "Cockatiel")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nFriendly and affectionate with a distinctive crest on their heads. They are good whistlers and can mimic sounds.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Friendly and affectionate with a distinctive crest on their heads. They are good whistlers and can mimic sounds.";
                FILE.close();
            }
            else if (breed == "Amazon" || breedTwo == "Parrot")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nVibrant green feathers with touches of red and yellow. They are good talkers, playful, and curious.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Vibrant green feathers with touches of red and yellow. They are good talkers, playful, and curious.";
                FILE.close();
            }
            else if (breed == "Budgerigar" || breedTwo == " Budgie")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nSmall, with a variety of color mutations. They are easy to train, social, and have a sweet chirp.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Small, with a variety of color mutations. They are easy to train, social, and have a sweet chirp.";;
                FILE.close();
            }
            else if (breed == "Cockatoo")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nRecognizable by their impressive crests. They are affectionate, social, and can be quite loud.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Recognizable by their impressive crests. They are affectionate, social, and can be quite loud.";
                FILE.close();
            }
            else if (breed == "Lovebird")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nSmall and colorful, often kept in pairs. They are affectionate, social, and energetic.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Small and colorful, often kept in pairs. They are affectionate, social, and energetic.";
                FILE.close();
            }
            else if (breed == "Eclectus" || breedTwo == "Parrot")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nSexually dimorphic, meaning males are bright green while females are red and purple. They are intelligent, calm, and social.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Sexually dimorphic, meaning males are bright green while females are red and purple. They are intelligent, calm, and social.";
                FILE.close();
            }
            else if (breed == "Quaker Parrot")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed;
                std::cout << "\nSmall to medium-sized with green and grey feathers. They are good talkers, social, and can be quite bold.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << ";" << std::endl << "Age:" << age << ";" << std::endl << "Small to medium-sized with green and grey feathers. They are good talkers, social, and can be quite bold.";
                FILE.close();
            }
            else if (breed == "Conure")
            {
                std::cout << "\nOk, your pet`s name is " << name << " and it`s breed is\n" << breed << " " << breedTwo;
                std::cout << "\nMedium-sized with a variety of colors. They are playful, social, and can be loud and active.";
                std::ofstream FILE(file);
                std::cout << "\nYour data was saved into file(" << file << ")";
                FILE << "Name:" << name << ";" << std::endl << "Breed:" << breed << " " << breedTwo << ";" << std::endl << "Age:" << age << ";" << std::endl << "Medium-sized with a variety of colors. They are playful, social, and can be loud and active.";
                FILE.close();
            }
        }
        else
        {
            std::cout << "Sorry, but we got some error!Please restart your program!";
        }
    }
};

int main()
{
	std::string pet;
    std::string name;
    std::string breed;
    std::string breedTwo;
    int age;
	std::cout << "Start!\n";
    std::cout << "\nChoose dog, cat, or parrot: "; std::cin >> pet;
	Home_pet pets(pet);
	if (pet == "dog")
	{
		std::cout << "Your answear is:" << pet;
		Dogs dog(pet,name,breed,breedTwo, age);
	}

	else if (pet == "cat")
	{
		std::cout << "Your answear is:" << pet;
		Cats cat(pet, name, breed, breedTwo, age);
	}

	else if (pet == "parrot")
	{
		std::cout << "Your answear is:" << pet;
		Parrots parrot(pet, name, breed, breedTwo, age);
	}
	else
	{
		std::cout << "Error!";
	};
}