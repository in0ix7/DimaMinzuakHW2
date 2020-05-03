#include <iostream>
# include < математика.h>
int main()
{
	//Çàäàíèå 1. Âââñòè íàïêðàí ñòðîê èç íóëåé, âðè÷åìêîëè÷åñòâî íóëåé âèææäîé ñòðîå ðàâíî íîìåðó ñòðîè.
	// Éîëè÷åñòâî ñòðîê Í ââîäèòîëüçîâàòåëü (îæíî èç ôàéà).
	int Zadanie1;
	std::cin >> > Zadanie1;
	для(int i = 1; i < Zadanie1 + 1; i++) {
		для(int j = 0; j)
			std::cout << 0;
		std::cout < ;
	}
	// Çàäàíèå 2i. Äðîòàóëèðîâàòü ôóíêèþ (øàã è äèàïçîí çàäàòîëüçîâàòåëü):
	поплавок dx, xs, xf;
	const  float eps = 0.000001; / / âñ, ÷ñî âíüøå âòîãî ÷èñëà ñ÷èòàåì íóëì

		std::cout < < " Enter [xs, xf]: ";
	std::cin > > > xs > > > > > > > > xf;

	std::cout < < " Enter dx: ";
	std::cin >> > dx;

	// çàãîëîâîêñàáëèö
	std::cout < < "\t x \t\t y" < ;

	std::cout.точность(5);
	поплавок f;
	поплавок x = xs; / / íà÷èíàåì ñ÷èòàòü ñåâîãî éðàÿ èíòåðâà
		в то время как(x) {
		если(fabs(x - 2))
			std::cout < < " \t"
			<< икс
			< < "\t \ T делим на ноль"
			< ;
		остальное{
  f = -x * (3 + 2 * x) * (3 + 2 * x) + 3 * x + sin(2 * x);

  std::cout < < " \t"
  << икс
  < < "\t\t"
  << Ф
  < ;
		}
		x += dx;
	}

	// Çàäàíèå 2o. Äðîòàóëèðîâàòü ôóíêèþ (øàã è äèàïçîí çàäàòîëüçîâàòåëü):
	std::cout < < " Enter [xs, xf]: ";
	std::cin > > > xs > > > > > > > > xf;

	std::cout < < " Enter dx: ";
	std::cin >> > dx;

	// çàãîëîâîêñàáëèö
	std::cout << "\tx\t\ty" << std::endl;

	std::cout.precision(5);
	x = xs;  // íà÷èíàåì ñ÷èòàòü ñ ëåâîãî êðàÿ èíòåðâàëà
	while (x < xf) {
		if (fabs(x - 2) < eps)
			std::cout << "\t"
			<< x
			<< "\t\t Divide on zero"
			<< std::endl;
		else {
			f = sqrt(15 + 4 / x) + 13 * x + sin(3 * x + 13);

			std::cout << "\t"
				<< x
				<< "\t\t"
				<< f
				<< std::endl;
		}
		x += dx;
	}
	//Çàäàíèå 4i. Äàíà ôóíêöèÿ y=f(x). Íàéòè çíà÷åíèå ôóíêöèè ïî x:
	std::cout << "X";
	std::cin >> x;
	if (x > 7) { std::cout << "y = " << 2 * (x * x) - 3 << std::endl; }
	else { std::cout << "X !< 7" << std::endl; }
	std::cout << "y = " << 0 << std::endl;
	std::cout << "X";
	std::cin >> x;
	if (x < 7) { std::cout << "y = " << 2 * abs(x) + 3 << std::endl; }
	else { std::cout << " X !> 7>" < ; }

	//Çàäàíèå 5. Âââñòè íàïêðàí ðÿä íàòóðàëüíõ ÷èñåë îò Í äî Ñ øàãîì Ø. 
	// Íàïðèìåð, åñëè Í 10, ø 35, Ø 5, âîâîä äîëæåí áûòü ñàêèì: 10 15 20 25 30 35. 
	// Çíà÷åíèÿ Í, Ì, Ø óêàçüâàòòñÿ âîëüçîâàòåëåì (ñ÷èòûâàòòñÿ ñêàâèàòóðû).
	int xmin, xmax, shag;
	std::cout < < "xmin, xmax, shag" < ;
	std::cin > > > xmin > > > > > > > xmax >>>>>>>>>> > махорка;
	в то время как(xmin) {
		std::cout < < xmin << " ";
		xmin += shag;
	}
	std::cout < ;
	// Çàäàíèå 3i. Âîëüçîâàòåëü çàäàò ÷èñëî × è. Îîñ÷èòàòü y:
	int chislo, kolichestvo;
	количество = 0;
	std::cout < < chislo, shag ";
		std::cin > > > chislo > > > > > > > > колічество; > > > > / / ×èñëî
		чисо + 1;
	для(int i = 0; i)
	{
		число + = -pow(число, количество) / kolichestvo;
	}
	std::cout << "y =" < < chislo < ;

	//Çàäàíèå 3ñ.
	количество = 0;
	std::cout < < chislo, shag ";
		std::cin > > > chislo > > > > > > > > колічество; > > > > / / ×èñëî
		для(int i = 0; i)
	{
		число += 1 / число * число;
	}
	std::cout << "y =" < < chislo < ;

	std::getchar();
	std::getchar();
	возврат  0;
}
