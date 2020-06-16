#include <iostream>

using namespace std;

class SB{
public:
    string name = "lantianxiang";
    unsigned short int theHeight = 180;
    unsigned short int theWidth = 60;
    unsigned long int theLength = 100;

    void speak(){
        cout<<"my name is "<<name<<"\n";
    }
    void helloDOC_Lan(){
        cout<<name<<":hello lantianxiang"<<"\n";
    }
    SB(){
        cout<<"SB compoleted"<<"\n";
    }
};

int main()
{ ;
    SB chenyan;
    chenyan.name = "chenyan";
    chenyan.helloDOC_Lan();
    SB suntianlong;
    suntianlong.name = "suntianlong";
    suntianlong.helloDOC_Lan();
    return 0;
}
