
#ifndef BASICC_CONCERT_H
#define BASICC_CONCERT_H

#include <string>
#include <ctime>
#include <vector>

/**
 * Class to represent a Concert
 */
class Concert {

public:

    /**
     * Overloaded constructor
     * @param concertName Name as string
     * @param friends List of friends as strings
     * @param desire int to represent amount of desire
     * @param date Date the concert falls on
     */
    Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date);

    /**
     * Default constructor
     */
    Concert();

    /**
     * Overloaded less than operator for Concert class
     * @param other The other Concert object
     * @return true if this is less than other Concert
     */
    bool operator<(const Concert &other) const;

    /**
     * @return Vector of friends as strings
     */
    const std::vector<std::string> &getFriends() const;

    /**
     * @param friends Vector of friends as strings
     */
    void setFriends(const std::vector<std::string> &friends);

    /**
     * @return The desire
     */
    int getDesire() const;

    /**
     * @param desire Amount of desire for concert
     */
    void setDesire(int desire);

    /**
     * @return The concert date
     */
    const tm &getDate() const;

    /**
     * @param date The concert date
     */
    void setDate(const tm &date);

    /**
     * @return Name of the concert
     */
    const std::string &getConcertName() const;

    /**
     * @param concertName Name of the concert
     */
    void setConcertName(const std::string &concertName);

private:
    std::string concertName;
    std::vector<std::string> friends;
    int desire;
    std::tm date;
};

/**
 * Overloaded output stream operator for printing Concert information
 * @param outputStream
 * @param concert
 * @return The output stream
 */
std::ostream &operator<<(std::ostream &outputStream, const Concert &concert);

#endif //BASICC_CONCERT_H
