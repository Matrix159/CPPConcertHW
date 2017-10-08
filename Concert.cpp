
#include "Concert.h"

Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date) {
    this->concertName = concertName;
    this->friends = friends;
    this->desire = desire;
    this->date = date;
}

Concert::Concert() {
    std::vector<std::string> friends;
    tm date;
    date.tm_year = 1970;
    date.tm_mon = 0;
    date.tm_mday = 1;
    this->friends = friends;
    this->desire = 0;
    this->date = date;
}

const std::vector<std::string> &Concert::getFriends() const {
    return friends;
}

void Concert::setFriends(const std::vector<std::string> &friends) {
    Concert::friends = friends;
}

int Concert::getDesire() const {
    return desire;
}

void Concert::setDesire(int desire) {
    Concert::desire = desire;
}

const tm &Concert::getDate() const {
    return date;
}

void Concert::setDate(const tm &date) {
    Concert::date = date;
}

const std::string &Concert::getConcertName() const {
    return concertName;
}

void Concert::setConcertName(const std::string &concertName) {
    Concert::concertName = concertName;
}

bool Concert::operator<(const Concert &other) const {

    tm thisDateCopy = this->date;
    tm otherDateCopy = other.date;
    tm *pDate1 = &thisDateCopy;
    tm *pDate2 = &otherDateCopy;
    time_t thisTime = mktime(pDate1);
    time_t otherTime = mktime(pDate2);
    if (thisTime < otherTime) {
        return true;
    } else if (thisTime > otherTime) {
        return false;
    } else {
        return this->desire > other.desire;
    }
}

std::ostream &operator<<(std::ostream &outputStream, const Concert &c) {
    return outputStream << c.getConcertName();
}



