#include <stdio.h>
#include <stdbool.h>

bool is_even(int number) ;
bool is_odd(int number) ;







int main(void)
{
    int number = 12;


    if  (is_even(number))
     printf("number is even\n");
     
    else if (is_odd(number))
     printf("number is odd\n");
    {
    
    }
    return 0;
    
}





bool is_even(int number)
{
    if (number % 2 == 0) return true;
    else return false;

}

bool is_odd(int number)
{
    if (number % 2 == 1 ) return true;
    else return false;

}










