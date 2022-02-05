#include <iostream>
#include <string>
using namespace std;

int main() {
	const float CHILD_COST = 10.95;
	const float ADULT_COST = 19.99;
	const float SENIOR_COST = 18.99;
	const float VIP_COST = 7.99;
	float threeDayTotal = 0;
	char userInput;
	cout << "Welcome to Fun Park Menu System !!\n";
	for (int i = 1; i <= 3; i++) {
		cout << "Starting day " << i << endl;
		int childCount = 0;
		int adultCount = 0;
		int seniorCount = 0;
		int vipCount = 0;
		float dailyTotal = 0;
		{
			do {
				int temporaryTicketCount = 0;
				cout << endl;
				cout << "Enter (C)hild, (A)dult, (S)enior, (V)IP or (Q)uit: ";
				cin >> userInput;
				userInput = toupper(userInput);
				if (userInput == 'Q')
					break;
				else
				{
					switch (userInput)
					{
					case 'C':
						cout << "How many children?: ";
						cin >> temporaryTicketCount;
						childCount += temporaryTicketCount;
						dailyTotal += childCount * CHILD_COST;
						break;
					case 'A':
						cout << "How many adults?: ";
						cin >> temporaryTicketCount;
						adultCount += temporaryTicketCount;
						dailyTotal += adultCount * ADULT_COST;
						break;
					case 'S':
						cout << "How many seniors?: ";
						cin >> temporaryTicketCount;
						seniorCount += temporaryTicketCount;
						dailyTotal += seniorCount * SENIOR_COST;
						break;
					case 'V':
						cout << "How many VIPs?: ";
						cin >> temporaryTicketCount;
						vipCount += temporaryTicketCount;
						dailyTotal += vipCount * VIP_COST;
						break;
					default:
						cout << "That is not a valid option, please select another option.";
						break;
					}
				}
			} while (userInput != 'Q');
			cout << endl;
			cout << "Children: " << childCount << " @ " << CHILD_COST << " = " << fixed << setprecision(2) << (childCount * CHILD_COST) << endl;
			cout << "Children: " << adultCount << " @ " << ADULT_COST << " = " << fixed << setprecision(2) << (adultCount * ADULT_COST) << endl;
			cout << "Children: " << seniorCount << " @ " << SENIOR_COST << " = " << fixed << setprecision(2) << (seniorCount * SENIOR_COST) << endl;
			cout << "Children: " << vipCount << " @ " << VIP_COST << " = " << fixed << setprecision(2) << (vipCount * VIP_COST) << endl << endl;;
			cout << "Total = " << dailyTotal;
			threeDayTotal += dailyTotal;
		}
	}
	cout << endl << endl << endl << "The total for all days is " << threeDayTotal << endl;
}