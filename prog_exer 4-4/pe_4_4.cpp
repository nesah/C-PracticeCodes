#include <iostream>
using namespace std;

struct Jedi_Master{
    int height, age;
    bool citizen = 1, recommendee = 1;
};

int main(void){

    Jedi_Master Applicant;

    cout << "Welcome to Jedi Knight Academy" << endl << endl;
    cout << "Recommendee of the Jedi Master Obi Wan? ";
    cin >> Applicant.recommendee;

    if(Applicant.recommendee){
        cout << "\nYou are accepted. Best of luck.";
    }

    else{
        cout << "\nFill out the following: " << endl;
        cout << "Height: ";
        cin >> Applicant.height;
        cout << "Age: ";
        cin >> Applicant.age;
        cout << "Citizen of Planet Endor? (Yes = 1/No = 0): ";
        cin >> Applicant.citizen;

        if(Applicant.height >= 200){
            if (Applicant.age >= 21 && Applicant.age <= 25){
                if(Applicant.citizen){
                    cout << "\nYou are accepted. Best of luck.";
                }
            }
        }

        else{
            cout << "\n!! REJECTED !!";
        }
    }
}