// Copyright [2022] RaisingCanesFanClub

#ifndef API_ENDPOINTS_API_ENDPOINTS_LIB_H_
#define API_ENDPOINTS_API_ENDPOINTS_LIB_H_

#include <jsoncpp/json/json.h>  // JsonCpp header file
#include <cstdlib>      // EXIT_FAILURE
#include <string>
#include <iostream>
#include <sstream>      // std::stringstream
#include <fstream>
#include <utility>      // std::pair, std::make_pair
#include "crow/crow_all.h"
#include "main/db-service.h"

class APIEndPoints {
 private:
// Checks whether supplied token is valid for client
// helper for all API calls (other than login)
// that require authentication of a token before proceeding
std::pair<bool, std::string> authenticateToken(const crow::request& req);

 public:
// Take in a crow request and return a pair of (int, string)
// Crow routes initialized in our main function wrap calls to these methods
// Input: takes in a crow request
// On success, returns a pair of (200, reponseBody),
//    where responseBody = JSON string
// On failure, returns a pair of (400 or 401, failResponseBody)
//    where failResponseBody = empty string "" or error message

// Gets all client's games
// Response Body Details:
// Games [Array<Game>]
// Where a Game object looks as such
// game.id [String]
// game.name [String]
// game.category [String]
// game.parameters [Array<String>]
// game.weights [Array<Float>]
// game.teamsPerMatch [Integer]
// game.minPlayersPerTeam [Integer]
// game.maxPlayersPerTeam [Integer]
std::pair <int, std::string> getGames(const crow::request& req);

// Adds a game to client's account
// Request Parameters:
// Name [String] REQUIRED
// Parameters [Array<String>] REQUIRED
// Parameter-weights [Array<Integer>] REQUIRED
// Min-players-per-team [Integer] REQUIRED
// Max-players-per-team [Integer] REQUIRED
// Category [String] OPTIONAL
std::pair <int, std::string> postGames(const crow::request& req);

};
#endif  // API_ENDPOINTS_API_ENDPOINTS_LIB_H_
