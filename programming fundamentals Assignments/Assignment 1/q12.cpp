/*Name: Abdullah Qamar 
 BS (SE) 1A
 Programming Fundamentals Assignment.2
 Question.12*/

#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;
int main() 
{
    string connectionDate = "28 Dec 11";
    string billMonth = "Oct 21";
    string readingDate = "02-Nov-21";
    string issueDate = "03-Nov-21";
    string dueDate = "17-Nov-21";
    string tariff = "A-1a(01)";
    string division = "Westridge";
    string subDivision = "Tarnol pesh RD";
    string feederName = "Nust Road";
    int meterNo = 123456;
    int previous = 9742;
    int present = 9942;
    int MF = 1;
    int load = 2;
    int oldAccount = 0;
    int ED = 0;
    int fuelPriceAdj = 700;
    int fcSurcharge = 90;
    int qtrTariff = -14;
    int tvFee = 35;
    int GST = 800;
    int GSTonFPA = 108;
    int totalFPA = 700;
    int LPSurcharge = 400;
    double unitCost = 20.0;
    string firstName, lastName;
    string street, city;
    long long dateofbirth;  
    string rollNo;           
    string referenceNo;      
    int units;           
    cout << "Enter your first name (one word): " << endl;
    cin >> firstName;
    cout << "Enter your last name (one word): " << endl;
    cin >> lastName;
    cout << "Enter your street (one word): " << endl;
    cin >> street;
    cout << "Enter your city (one word): " << endl;
    cin >> city;
    cout << "Enter your date of birth as DDMMYYYY (example 20072003): " << endl;
    cin >> dateofbirth;
    cout << "Enter your roll number (example 23i1234): " << endl;
    cin >> rollNo;
    cout << "Enter your reference number (example 23M1234): " << endl;
    cin >> referenceNo;
    cout << "Enter last four digits of your roll number (for units): " << endl;
    cin >> units;
    double costOfElectricity = units * unitCost;
    double total1 = costOfElectricity + fuelPriceAdj + fcSurcharge + qtrTariff;
    double total2 = tvFee + GST + GSTonFPA;
    double currentBill = total1 + total2;
    double payableWithinDue = currentBill + totalFPA;
    double payableAfterDue = payableWithinDue + LPSurcharge;
    cout << fixed << setprecision(30);
    cout << left << setw(30) << "IESCO ELECTRIC BILL" << endl;
    cout << left << setw(30) << "Connection Date:" << connectionDate << endl;
    cout << left << setw(30) << "Bill Month:" << billMonth << endl;
    cout << left << setw(30) << "Reading Date:" << readingDate << endl;
    cout << left << setw(30) << "Issue Date:" << issueDate << endl;
    cout << left << setw(30) << "Due Date:" << dueDate << endl;
    cout << left << setw(30) << "Consumer ID:" << dateofbirth << endl;
    cout << left << setw(30) << "Tariff:" << tariff << endl;
    cout << left << setw(30) << "Load:" << load << endl;
    cout << left << setw(30) << "Old Account No:" << oldAccount << endl;
    cout << left << setw(30) << "Division:" << division << endl;
    cout << left << setw(30) << "Sub Division:" << subDivision << endl;
    cout << left << setw(30) << "Feeder Name:" << feederName << endl;
    cout << left << setw(30) << "Reference No:" << referenceNo << endl;
    cout << left << setw(30) << "Name & Address:" << firstName << " " << lastName << ", " << street << ", " << city << endl;
    cout << left << setw(30) << "Meter No:" << meterNo << endl;
    cout << left << setw(30) << "Previous:" << previous << endl;
    cout << left << setw(30) << "Present:" << present << endl;
    cout << left << setw(30) << "MF:" << MF << endl;
    cout << left << setw(30) << "Units Consumed:" << units << endl;
    cout << left << setw(30) << "Cost of Electricity:" << costOfElectricity << endl;
    cout << left << setw(30) << "Fuel Price Adjustment:" << fuelPriceAdj << endl;
    cout << left << setw(30) << "F.C Surcharge:" << fcSurcharge << endl;
    cout << left << setw(30) << "QTR Tariff Adj:" << qtrTariff << endl;
    cout << left << setw(30) << "Total 1:" << total1 << endl;
    cout << left << setw(30) << "TV Fee:" << tvFee << endl;
    cout << left << setw(30) << "GST:" << GST << endl;
    cout << left << setw(30) << "GST on FPA:" << GSTonFPA << endl;
    cout << left << setw(30) << "Total 2:" << total2 << endl;
    cout << left << setw(30) << "Current Bill:" << currentBill << endl;
    cout << left << setw(30) << "Total FPA:" << totalFPA << endl;
    cout << left << setw(30) << "Payable within due date:" << payableWithinDue << endl;
    cout << left << setw(30) << "L.P Surcharge:" << LPSurcharge << endl;
    cout << left << setw(30) << "Payable after due date:" << payableAfterDue << endl;
    system("pause");
    return 0;
}


