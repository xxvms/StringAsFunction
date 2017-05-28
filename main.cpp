#include <iostream>

void dispStr(char* ps); //this is prototype


int main()
{
    char str[] {"Idle people have the least leisure"};
    
    dispStr(str);       // display the string
    
    system("pause");
    return 0;
}
void dispStr(char* ps)
{
    while (*ps)     //until null character
    {
        std::cout << *ps++; //print characters
        //std::cout << std::endl;
    }
}
