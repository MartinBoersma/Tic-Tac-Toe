#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

std::string speler_rondje;
std::string speler_kruisje;
std::string wieBegint = speler_rondje;
int maxAantal;
bool turn;

void spelersnamen()
{
	bool name_check = false;

	std::cout << "Vul naam in voor speler 1: \n";
	std::cin >> speler_rondje;

	std::cout << "Vul naam in voor speler 2: \n";
	std::cin >> speler_kruisje;

	if(speler_rondje == speler_kruisje)
	{
		name_check = true;
		std::cout << "Namen kunnen niet hetzelfde zijn, probeer opnieuw.\n";
		spelersnamen();
	}
	else
	{
		std::cout << "Speler 1: " << speler_rondje << "\n";
		std::cout << "Speler 2: " << speler_kruisje << "\n";
    }

}

int i,j;
char arr[3][3] = {
	{'1', '2', '3'},
	{'4', '5', '6'},
	{'7', '8', '9'}
	};

void start_spel()
{
	system("pause >> null");
	system("CLS");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   std::cout << "\t"<<arr[i][j];
		}
		std::cout << "\n\n";
	}
}

void winner_check()
{
	if (true)
	{
	if (arr[0] [0] == arr[0] [1] && arr[0] [1] == arr[0] [2])
	{
		if (turn == true)
		{
			std::cout << speler_rondje << " heeft gewonnen!\n";
            system("pause >> null");
			abort();
			return;
		}
		else
		{
			std::cout << speler_kruisje << " heeft gewonnen!\n";
			system("pause >> null");
			abort();
			return;
		}
	}

	if (arr[0] [0] == arr[1] [0] && arr[1] [0] == arr[2] [0])
	{
		if (turn == true)
		{
			std::cout << speler_rondje << " heeft gewonnen!\n";
			system("pause >> null");
			abort();
			return;
		}
		else
		{
			std::cout << speler_kruisje << " heeft gewonnen!\n";
			system("pause >> null");
			abort();
            return;
        }
    }

	if (arr[1] [0] == arr[1] [1] && arr[1] [1] == arr[1] [2])
		{
		if (turn == true)
			{
				std::cout << speler_rondje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		else
			{
				std::cout << speler_kruisje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		}

	if (arr[2] [0] == arr[2] [1] && arr[2] [1] == arr[2] [2])
		{
		if (turn == true)
			{
				std::cout << speler_rondje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		else
			{
				std::cout << speler_kruisje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		}

	if (arr[0] [0] == arr[1] [1] && arr[1] [1] == arr[2] [2])
		{
		if (turn == true)
			{
				std::cout << speler_rondje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		else
			{
				std::cout << speler_kruisje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		}

	if (arr[0] [1] == arr[1] [1] && arr[1] [1] == arr[2] [1])
		{
		if (turn == true)
			{
				std::cout << speler_rondje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		else
			{
				std::cout << speler_kruisje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		}

	if (arr[0] [2] == arr[1] [2] && arr[1] [2] == arr[2] [2])
		{
		if (turn == true)
			{
				std::cout << speler_rondje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		else
			{
				std::cout << speler_kruisje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		}

	if (arr[0] [2] == arr[1] [2] && arr[1] [2] == arr[2] [2])
		{
		if (turn == true)
			{
				std::cout << speler_rondje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		else
			{
				std::cout << speler_kruisje << " heeft gewonnen!\n";
				system("pause >> null");
				abort();
				return;
			}
		}
	}

//	else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3'
//		&& arr[4] != '4' && arr[5] != '5' && arr[6] != '6'
//		&& arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
//		return 0;
//
//	else
//		return -1;




	if (maxAantal >= 9)
	{
		std::cout << "Gelijkspel, druk op een toets om het spel af te sluiten.";
		system("pause >> null");
		return;
	}


}

void invoer_kruisje();

void invoer_rondje()
{
	turn = true;
	int plek;
	std::cout << speler_rondje << ", Jouw beurt.\n";
	std::cout << "Welke plek?\n";
	std::cin >> plek;



	if (plek > 9 || plek < 0)
	{
		std::cout << "Ongeldige invoer, probeer het nog eens.\n";
		invoer_rondje();
	}

	switch (plek) {
	  case 1:
		if (arr[0] [0] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
		   arr[0] [0] = 'O';
		}
		break;
	  case 2:
		if (arr[0] [1] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[0] [1] = 'O';
		}
		break;
	  case 3:
		if (arr[0] [2] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[0] [2] = 'O';
		}
		break;
	  case 4:
		if (arr[1] [0] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[1] [0] = 'O';
		}
		break;
	  case 5:
		if (arr[1] [1] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[1] [1] = 'O';
		}
		break;
	  case 6:
		if (arr[1] [2] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[1] [2] = 'O';
		}
		break;
	  case 7:
		if (arr[2] [0] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[2] [0] = 'O';
		}
		break;
	  case 8:
		if (arr[2] [1] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[2] [1] = 'O';
		}
		break;
	  case 9:
		if (arr[2] [2] == 'X')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_rondje();
		}
		else
		{
			arr[2] [2] = 'O';
		}
		break;
		maxAantal++;

}

	system("CLS");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   std::cout << "\t"<<arr[i][j];
		}
		std::cout << "\n\n";
	}

	winner_check();
	maxAantal++;
	if (maxAantal < 9)
	{
		invoer_kruisje();
    }
}


void invoer_kruisje()
{
	turn = false;
	int plek;
	std::cout << speler_kruisje << ", Jouw beurt.\n";
	std::cout << "Welke plek?\n";
	std::cin >> plek;


	if (plek > 9 || plek < 0)
	{
		std::cout << "Ongeldige invoer, probeer het nog eens.\n";
		invoer_kruisje();
	}

	switch (plek) {
	  case 1:
		if (arr[0] [0] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
		   arr[0] [0] = 'X';
		}
		break;
	  case 2:
		if (arr[0] [1] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[0] [1] = 'X';
		}
		break;
	  case 3:
		if (arr[0] [2] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[0] [2] = 'X';
		}
		break;
	  case 4:
		if (arr[1] [0] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[1] [0] = 'X';
		}
		break;
	  case 5:
		if (arr[1] [1] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[1] [1] = 'X';
		}
		break;
	  case 6:
		if (arr[1] [2] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[1] [2] = 'X';
		}
		break;
	  case 7:
		if (arr[2] [0] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[2] [0] = 'X';
		}
		break;
	  case 8:
		if (arr[2] [1] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[2] [1] = 'X';
		}
		break;
	  case 9:
		if (arr[2] [2] == 'O')
		{
			std::cout << "Dit veld is al gevuld, probeer een andere plek.\n";
			invoer_kruisje();
		}
		else
		{
			arr[2] [2] = 'X';
		}
		break;
        winner_check();
}

	system("CLS");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   std::cout << "\t"<<arr[i][j];
		}
		std::cout << "\n\n";
	}

	maxAantal++;
}




void data()
{

}

std::string end_game()
{

}

int main()
{
	bool wie_begint = 0;

	spelersnamen();
	start_spel();

	for (maxAantal = 0; maxAantal < 9;)
	{
		invoer_rondje();
        winner_check();
	}




	system("pause >> null");
	return 0;
}
