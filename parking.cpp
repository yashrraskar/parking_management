#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

const int parkingspots;

class cardetails{
    string vehicletype,numberplate;
    public:
    void getinfo(){
        cout << "Please Enter Your Vehicle Details"<<endl;
        cout << "Enter whether you have a CAR or a BIKE -";
        cin >> vehicletype;

        for (char &c : vehicletype) {
        c = tolower(c);
        }

        cout << "Please Enter Vehicle Number -";
        cin.ignore();
        getline(cin, numberplate);
    }


};

int main() {
cout<<"\n========== PARKING MANAGEMENT SYSTEM ========== \n\n";
class cardetails c1;
c1.getinfo();

    
return 0;
}