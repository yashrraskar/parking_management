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
    int choice;
    cardetails c1;

    while (true) {

        cout << "\n========== PARKING MANAGEMENT SYSTEM ==========\n\n";
        cout << "1. PARK VEHICLE\n";
        cout << "2. UNPARK VEHICLE\n";
        cout << "3. CHECK AVAILABILITY\n";
        cout << "4. EXIT\n";
        cout << "Select one choice : ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                c1.getinfo();
                c1.park();
                break;

            case 2:
                c1.getinfo();
                c1.unpark();
                break;

            case 3:
                cout << "Cars Available : " << parkingcar - carCount << endl;
                cout << "Bikes Available : " << parkingbike - bikeCount << endl;
                break;

            case 4:
                cout << "Thank you for using the Parking Management System!" << endl;
                return 0;

            default:
                cout << "Invalid Choice!" << endl;
        }
    }
}