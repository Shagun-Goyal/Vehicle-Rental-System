#include <iostream>
#include <vector>
#include <string>
#include "Data.h"

// Implementation of puttingData
puttingData::puttingData(std::string name, std::string phoneNo, std::string mailId, std::string password) {
    userinfo temp;
    temp.name = name;
    temp.phoneNo = phoneNo;
    temp.mailId = mailId;
    temp.password = password;
    users.push_back(temp);

    displayData();
}

void puttingData::displayData() {
    if (users.empty()) {
        std::cout << "\n--- User List is empty ---\n";
        return;
    }
    std::cout << "\n--- User List ---\n";
    std::cout << "Name: " << users[0].name << std::endl;
    std::cout << "Phone: " << users[0].phoneNo << std::endl;
    std::cout << "Mail: " << users[0].mailId << std::endl;
    std::cout << "Password: " << users[0].password << std::endl;
    std::cout << "-------------------\n";
}

// In-memory booking storage
namespace {
    static std::vector<Booking> g_bookings;
}

void BookingManager::addBooking(const std::string &userName,
                                const std::string &phoneNo,
                                const std::string &carName,
                                const std::string &date,
                                const std::string &time) {
    Booking b;
    b.userName = userName;
    b.phoneNo = phoneNo;
    b.carName = carName;
    b.date = date;
    b.time = time;
    g_bookings.push_back(b);
}

std::vector<Booking> BookingManager::getAllBookings() {
    return g_bookings;
}

void BookingManager::displayAllBookings() {
    if (g_bookings.empty()) {
        std::cout << "\nNo bookings found.\n";
        return;
    }
    std::cout << "\n===== All Bookings =====\n";
    for (size_t i = 0; i < g_bookings.size(); ++i) {
        const Booking &b = g_bookings[i];
        std::cout << "Booking #" << (i+1) << "\n";
        std::cout << "  User: " << b.userName << "\n";
        std::cout << "  Phone: " << b.phoneNo << "\n";
        std::cout << "  Car: " << b.carName << "\n";
        std::cout << "  Date: " << b.date << "\n";
        std::cout << "  Time: " << b.time << "\n";
        std::cout << "---------------------------\n";
    }
}
