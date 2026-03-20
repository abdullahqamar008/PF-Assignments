//Abdullah Qamar
//BS SE 1A
// pf assignent 4 
//question 4
#include<iostream>
using namespace std;
int main()
{
	char weather[3][30];
	for(int month=0;month<3;month++)
	{
		for(int day=0;day<30;day++)
		{
			if(day%3==0)
			weather[month][day]='R';
			else if(day%3==1)
			weather[month][day]='C';
			else
			weather[month][day]='S';
		}
	}
	int rainy[3]={0},cloudy[3]={0},sunny[3]={0};
      for(int month = 0; month < 3; month++)
    {
        for(int day = 0; day < 30; day++)
        {
            if(weather[month][day] == 'R')
                rainy[month]++;
            else if(weather[month][day] == 'C')
                cloudy[month]++;
            else if(weather[month][day] == 'S')
                sunny[month]++;
        }
    }
     string monthName[3] = {"June", "July", "August"};
    cout << "WEATHER REPORT"<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout << monthName[i]<<endl;
        cout << " Rainy Days  = "<<rainy[i]<<endl;
        cout << " Cloudy Days = "<<cloudy[i]<<endl;
        cout << " Sunny Days  = "<<sunny[i]<< endl;
    }
    int totalRain = rainy[0] + rainy[1] + rainy[2];
    int totalCloud = cloudy[0] + cloudy[1] + cloudy[2];
    int totalSun = sunny[0] + sunny[1] + sunny[2];
    cout << "TOTAL (June + July + August)"<<endl;
    cout << "Total Rainy Days " << totalRain << endl;
    cout << "Total Cloudy Days " << totalCloud << endl;
    cout << "Total Sunny Days " << totalSun << endl;
    int maxMonth = 0;
    if(rainy[1] > rainy[maxMonth]) maxMonth = 1;
    if(rainy[2] > rainy[maxMonth]) maxMonth = 2;
    cout << "Most Rainy Month "<< monthName[maxMonth] << endl;
    return 0;
}


