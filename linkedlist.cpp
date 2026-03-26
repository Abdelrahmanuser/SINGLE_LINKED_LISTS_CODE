#include <iostream> 
#include <string> 
using namespace std ; 
enum  class ModeofTransport 
{
    Car , 
    Bus ,
    Bicycle ,
    Walking
};
struct Node 
{
    string ResidentId  ;
    int Age ; 
    ModeofTransport transport ; 
    int DailyDistance ; 
    double CarbonEmissionFactor  ;  // The unit is Kg CO ? / Km per kelimoter 
    int  AverageDayPerMonth ; // refers to the reported number of days in which the person reported using that mode of transport 


    Node* next ; // next is the address of the next node 
};

class LinkedList 
{
    public :
    Node* Head ; 
};

int main () 
{
    
     
}