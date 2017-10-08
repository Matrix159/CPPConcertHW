
#include <iostream>
#include "Concert.h"
#include <iomanip>
#include <sstream>
#include <algorithm>


/**
 * Main function, this will setup all the times and concert objects and put them into a Vector and compare them.
 * @return 0 if successful
 */
int main() {

    // Create all of the tm structs using streams
    std::istringstream ss1("06/01/1997");
    auto *tm1 = new tm();
    ss1 >> std::get_time(tm1, "%m/%d/%Y");

    std::istringstream ss2("06/02/1997");
    auto *tm2 = new tm();
    ss2 >> std::get_time(tm2, "%m/%d/%Y");

    std::istringstream ss3("06/04/1997");
    auto *tm3 = new tm();
    ss3 >> std::get_time(tm3, "%m/%d/%Y");

    std::istringstream ss4("06/03/1997");
    auto *tm4 = new tm();
    ss4 >> std::get_time(tm4, "%m/%d/%Y");

    std::istringstream ss5("06/05/1997");
    auto *tm5 = new tm();
    ss5 >> std::get_time(tm5, "%m/%d/%Y");

    std::istringstream ss6("06/06/1997");
    auto *tm6 = new tm();
    ss6 >> std::get_time(tm6, "%m/%d/%Y");

    std::istringstream ss7("06/09/1997");
    auto *tm7 = new tm();
    ss7 >> std::get_time(tm7, "%m/%d/%Y");

    std::istringstream ss8("06/07/1997");
    auto *tm8 = new tm();
    ss8 >> std::get_time(tm8, "%m/%d/%Y");

    std::istringstream ss9("06/08/1997");
    auto *tm9 = new tm();
    ss9 >> std::get_time(tm9, "%m/%d/%Y");

    std::istringstream ss10("06/08/1997");
    auto *tm10 = new tm();
    ss10 >> std::get_time(tm10, "%m/%d/%Y");

    std::vector<std::string> friends;
    std::vector<Concert> concertVector(10);

    // Create all of the concert objects
    Concert *concert1 = new Concert("Concert A", friends, 5, (*tm1));
    concertVector[0] = *concert1;

    Concert *concert2 = new Concert("Concert B", friends, 5, (*tm2));
    concertVector[1] = *concert2;

    Concert *concert3 = new Concert("Concert C", friends, 5, (*tm3));
    concertVector[2] = *concert3;

    Concert *concert4 = new Concert("Concert D", friends, 5, (*tm4));
    concertVector[3] = *concert4;

    Concert *concert5 = new Concert("Concert E", friends, 5, (*tm5));
    concertVector[4] = *concert5;

    Concert *concert6 = new Concert("Concert F", friends, 5, (*tm6));
    concertVector[5] = *concert6;

    Concert *concert7 = new Concert("Concert G", friends, 5, (*tm7));
    concertVector[6] = *concert7;

    Concert *concert8 = new Concert("Concert H", friends, 5, (*tm8));
    concertVector[7] = *concert8;

    Concert *concert9 = new Concert("Concert I", friends, 5, (*tm9));
    concertVector[8] = *concert9;

    Concert *concert10 = new Concert("Concert J", friends, 10, (*tm10));
    concertVector[9] = *concert10;

    // Sorting the concert vector
    std::sort(concertVector.begin(), concertVector.end());
    for (const auto &i : concertVector) {
        std::cout << i << std::endl;
    }

    // Memory cleanup
    delete tm1;
    delete tm2;
    delete tm3;
    delete tm4;
    delete tm5;
    delete tm6;
    delete tm7;
    delete tm8;
    delete tm9;
    delete tm10;
    delete concert1;
    delete concert2;
    delete concert3;
    delete concert4;
    delete concert5;
    delete concert6;
    delete concert7;
    delete concert8;
    delete concert9;
    delete concert10;

    return 0;
}