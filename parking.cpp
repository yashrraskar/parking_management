#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

const int parkingbike = 26;
const int parkingcar = 14;
int carCount = 0;
int bikeCount = 0;

class cardetails{
    string vehicletype,numberplate;
    public:

    void getinfo(){     // GETS INFO TO CONFIRM IF ITS A CAR OR BIKE 
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

    void park(){    //PARKS THE VEHICLE IF AVAILABLE 
        if (vehicletype == "car") {
            if (carCount < parkingcar){
                cout << "THANKYOU !!"<<endl<<"Your parking slot number is - "<<carCount<<endl<<endl;
                carCount++;
            }else cout<<"SORRY NO PARKING SPOT AVAILABLE FOR CAR :("<<endl<<endl;
        }
        else if (vehicletype == "bike") {
            if (bikeCount < parkingbike){
                cout << "THANKYOU !!"<<endl<<"Your parking slot number is - "<<bikeCount<<endl<<endl;
                bikeCount++;
            }else cout<<"SORRY NO PARKING SPOT AVAILABLE FOR BIKE :("<<endl<<endl;
        }
        else {
        cout << "Invalid Vehicle Type!"<<endl<<endl;
        }
    }

    void unpark(){   // UNPARKS THE VEHICLE 
        if (vehicletype == "car") {
            if (carCount > 0){
                cout  <<"CAR UNPARKED "<< endl << "THANK YOU !! for parking here." << endl<<endl;
                carCount--;
            }else cout << "CAR Parking is already empty" << endl<<endl;
        }

        else if (vehicletype == "bike") {
            if (bikeCount > 0){
                cout << "BIKE UNPARKED "<< endl<<"THANKYOU !! for parking here."<<endl<<endl;
                bikeCount--;
            }else cout << "BIKE Parking is already empty" << endl<<endl;
        }
        else {
        cout << "Invalid Vehicle Type!"<<endl<<endl;
        }
    }


};

int main() {
cout<<"\n========== PARKING MANAGEMENT SYSTEM ========== \n\n";

class cardetails c1,c2,c3;
c1.getinfo();
c1.park();
c2.getinfo();
c2.park();
c3.getinfo();
c3.park();
c2.unpark();
c2.unpark();

return 0;
}