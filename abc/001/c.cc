#include <cmath>
#include <iostream>

static const char *
dir(int deg)
{
	static const char *dirTab[] = {
		"N", "NNE", "NE", "ENE",
		"E", "ESE", "SE", "SSE",
		"S", "SSW", "SW", "WSW",
		"W", "WNW", "NW", "NNW", "N"
	};

	deg *= 10;
	deg += 1125;
	deg /= 2250;

	return dirTab[deg];
}

static int
w(int dis)
{
	const double wTab[] = {
		0.2, 1.5, 3.3, 5.4, 7.9,
		10.7, 13.8, 17.1, 20.7, 24.4,
		28.4, 32.6,
	};
	double mps;

	mps = std::round(dis / 6.0) / 10.0;
	for (int i = 0; i < sizeof(wTab)/sizeof(wTab[0]); i++)
		if (mps <= wTab[i])
			return i;

	return sizeof(wTab)/sizeof(wTab[0]);
}

int
main(void)
{
	int deg, dis;
	std::cin >> deg >> dis;

	std::cout << (w(dis) ? dir(deg) : "C") << " " << w(dis) << std::endl;

	return 0;
}
