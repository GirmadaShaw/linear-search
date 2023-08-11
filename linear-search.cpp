#include <iostream>

int main()
{
    int arr[5] = {45,76,23,67,45} ;
    int size = sizeof(arr)/sizeof(int) ;

    int search_element = 45 ; 

    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == search_element )
        {
            std::cout << "Found at position: " << i+1 << std::endl;
        }
    } 


}