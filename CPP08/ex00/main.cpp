#include "easyfind.hpp"
#include <vector>
#include <list>


int main()
{
    int arr[]= {0, -1, 4,4, 6, 152035, -10, 42};
    std::vector<int>vectorArr(arr, arr + sizeof(arr)/sizeof(arr[0]));
    std::list<int>listArr(arr, arr + sizeof(arr)/sizeof(arr[0]));
    
    std::cout<<"***  VECTOR TEST   ***"<<std::endl;
    std::cout<<std::endl;
    try
    {
        easyfind(vectorArr,152035);
        easyfind(vectorArr, -10);
        easyfind(vectorArr, 41);
    }
    catch(const std::exception &e)
    {
        std::cerr<<e.what()<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"***  LIST TEST   ***"<<std::endl;
    try
    {
        easyfind(listArr,42);
        easyfind(listArr,-1);
        easyfind(listArr,54);
    }
    catch(const std::exception &e)
    {
        std::cerr<<e.what()<<std::endl;
    }
}