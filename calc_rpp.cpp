#include <iostream>

float num1;
float num2;
int choice;

void default_Attribute()
{
    std::cout << "\n" << "num1: "; std::cin >> num1; 
    std::cout << "num2: "; std::cin >> num2; 
}

void plus()
{
    default_Attribute();
    float total = num1 + num2;
    std::cout << "total: " << total << std::endl;
}

void min()
{
    default_Attribute();
    float total = num1 - num2;
    std::cout << "total: " << total << std::endl;
}

void maal()
{
    default_Attribute();
    float total = num1 * num2;
    std::cout << "total: " << total << std::endl;
}

void delen()
{
    default_Attribute();
    float total = num1 / num2;
    std::cout << "total: " << total << std::endl;
}

int main() 
{
    std::cout << "\n" << "1.plus/2.min/3.maal/4.delen: "; std::cin >> choice;
    switch (choice)
    {
	    case 1:
	        plus();
	        break;
	        
	    case 2:
	        min();
	        break;
	        
	    case 3:
	        maal();
	        break;
	    case 4:
	        delen();
	        break;

	    default:
	        break;
    }
    return main();
}
