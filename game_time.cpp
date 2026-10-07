#include <iostream>

int main()
{
    int level_one_minutes = 78; //Declares level 1 time
    int level_two_minutes = 144; //Declares level 2 time

    int level_one_hours = level_one_minutes / 60; //Calculates hours
    int level_one_remaining_minutes = level_one_minutes % 60; //Calculates remainder
    int level_two_hours = level_two_minutes / 60;
    int level_two_remaining_minutes = level_two_minutes % 60;
    int difference_minutes = level_two_minutes - level_one_minutes; //Calculates difference
    int difference_hours = difference_minutes / 60; //Calculates difference in hours
    int difference_remaining_minutes = difference_minutes % 60; //Calculates remainder in minutes

    std::cout<<"Level 1 time: "<<level_one_hours<<"h "<<level_one_remaining_minutes<<"m"<<std::endl;
    std::cout<<"Level 2 time: "<<level_two_hours<<"h "<<level_two_remaining_minutes<<"m"<<std::endl;
    std::cout<<"Difference: "<<difference_hours<<"h "<<difference_remaining_minutes<<"m"; //Displays level 1, level 2, and the difference

    return 0;
}