#include <iostream>
#include <stdlib.h>
#include <pthread.h>
#include <vector>
#include <math.h>
#include <mysql/mysql.h>

using namespace std;

struct City
{
    string strEnglishName;
    string strGermanName;
    int iCityUID;
    vector<int> linkedCities; //could probably get away for a singly linked list for efficiency, but vectors sound cooler.
};

int* getCitiesWithAirports()
{
    return 0;
}

vector<int> findShortestRoute(City ctyStartingCity, vector<int> vCitiesVisited)
{
    vector<int> iPlacesToGo;
    if (iPlacesToGo == vCitiesVisited) 
    {
	return vCitiesVisited; //return the current list of places we've been.
    }
    else
    {
	//find the next city's shortest route.
    }
}


int main(int argc, char **argv) 
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
