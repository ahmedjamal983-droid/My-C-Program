#include <bits/stdc++.h>


int main(){
std::cout<<"enter day num" ;
int day ; 
std::cin>>day ;
switch (day) 
{
    case 1 :
    std::cout<<"mon\n";
    break ;
    
    case 2 :
    std::cout<<"tue\n";
    break ;

    case 3 :
    std::cout<<"wed\n";
    break ;

    case 4:
    std::cout<<"thu\n" ;
    break ;

    case 5:
    std::cout<<"fri\n";
    break;

    case 6:
    std::cout<<"sat\n" ;
    break;

    case 7:
    std::cout<<"sun\n" ;
    break ;

    default: 
    std::cout<<"invalid\n" ;
    break;
}

    return 0 ;
}