#ifndef DATA_H
#define DATA_H

#include <string>
#include <vector>

struct userinfo {
	std::string name;
	std::string mailId;
	std::string password;
	std::string phoneNo;
};

class puttingData {
	std::vector<userinfo> users;
public:
	puttingData(std::string name, std::string phoneNo, std::string mailId, std::string password);
	void displayData();
};

// A simple booking record used by the admin view
struct Booking {
	std::string userName;
	std::string phoneNo;
	std::string carName;
	std::string date;    // e.g. 2025-10-23
	std::string time;    // e.g. 09:30
};

// BookingManager maintains an in-memory list of bookings for the running program.
// It's intentionally simple: static methods operate on an internal static vector.
class BookingManager {
public:
	static void addBooking(const std::string &userName,
						   const std::string &phoneNo,
						   const std::string &carName,
						   const std::string &date,
						   const std::string &time);

	static std::vector<Booking> getAllBookings();
	static void displayAllBookings();
};

#endif // DATA_H

