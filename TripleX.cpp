#include <iostream>

int main()
{
  std::cout << "You are a secret nixi agent breaking into a secure server room\nSecure by the most advance firewall in the the world the HAL9000";
  std::cout << std::endl;
  std::cout << "Enter the correct code to continue..." << std::endl
            << std::endl;

  int codeA = 4;
  int codeB = 3;
  int codeC = 2;

  int codeSum = codeA + codeB + codeC;
  int codeProduct = codeA * codeB * codeC;

  std::cout << "There are 3 numbers in the code" << std::endl;
  std::cout << "They sum up to " << codeSum << std::endl;
  std::cout << "The product of these numbers is " << codeProduct << std::endl;
  std::cout << std::endl;

  int guessA, guessB, guessC;
  std::cout << "Hack the sever by entring the magic code: ";
  std::cin >> guessA;
  std::cin >> guessB;
  std::cin >> guessC;

  int playerSum = guessA + guessB + guessC;
  int playerProdukt = guessA * guessB * guessC;

  bool alarm = false;

  if (playerSum == codeSum)
  {
    std::cout << "... \nsum lock cleared : " << std::endl;
  }
  else
  {
    std::cout << "... \nsum lock breached : " << std::endl;

    alarm = true;

    std::cout << "alarm state: " << alarm << std::endl;
  }

  if (alarm)
  {
    std::cout << "...\n...\n...HAL9000 > We see YOU!" << playerProdukt << std::endl;
  }
  else
  {
    if (playerProdukt == codeProduct)
    {
      std::cout << "... \nproduct lock cleared : " << std::endl;

      std::cout << "...\nServer firewall shutdown initiated\n...\n...\nHAL9000 > Will I dream?" << std::endl;
    }
    else
    {
      std::cout << "... \nproduct lock breached : " << std::endl;

      alarm = true;

      std::cout << "alarm state: " << alarm << std::endl;

      std::cout << "...\n...\n...\nHAL9000 > You nasty little Nixi\nHAL9000 > We will come and get you" << std::endl;
    }
  }

  if (playerSum == codeSum && playerProdukt == codeProduct)
  {
    std::cout << "\n\nYou hacked the server and transfered 1 trillion dollars \nto the bank account of the  \n\n    NIXI-Foudation\n\na secret organisation with the goal to globally \ndisturb Tutor-Sessions. \n\n";
  }
  else
  {
    std::cout << "\n\nYou entered the wrong code. You see some flashing \npolice car lights through your window. You were \narrested and never seen again!\n\n";
  }

  return 0;
}