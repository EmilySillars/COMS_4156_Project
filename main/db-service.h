#ifndef DB_SERVICE_H_
#define DB_SERVICE_H_

#include <string>
#include <vector>

struct Player {
    std::string player_email;

    std::string toString()
    {
        return "Player: player_email = " + player_email;
    }
};

struct Developer {
    std::string developer_email;
    std::string developer_password;

    std::string toString()
    {
        return "Developer: developer_email = " + developer_email + ", developer_password = " + developer_password;
    }
};

struct Game_Details {
    int game_id;
    std::string game_name;

    std::string game_parameter1_name;
    float game_parameter1_weight;

    std::string game_parameter2_name;
    float game_parameter2_weight;

    std::string game_parameter3_name;
    float game_parameter3_weight;

    std::string game_parameter4_name;
    float game_parameter4_weight;

    std::string category;
    int player_per_team;
    int teams_per_team;
};

struct Joined_Developer_Games {
    std::string developer_email;
    std::string game_name;

    std::string game_parameter1_name;
    float game_parameter1_weight;

    std::string game_parameter2_name;
    float game_parameter2_weight;

    std::string game_parameter3_name;
    float game_parameter3_weight;

    std::string game_parameter4_name;
    float game_parameter4_weight;

    std::string category;
    int player_per_team;
    int teams_per_team;
};

struct Player_Game_Ratings {
    std::string player_email;
    int game_id;

    std::string game_parameter1_value;
    std::string game_parameter2_value;
    std::string game_parameter3_value;
    std::string game_parameter4_value;
};

struct Joined_Player_Game_Ratings {
    std::string player_email;
    int game_id;
    std::string game_name;

    std::string game_parameter1_name;
    float game_parameter1_weight;
    std::string game_parameter1_value;

    std::string game_parameter2_name;
    float game_parameter2_weight;
    std::string game_parameter2_value;

    std::string game_parameter3_name;
    float game_parameter3_weight;
    std::string game_parameter3_value;

    std::string game_parameter4_name;
    float game_parameter4_weight;
    std::string game_parameter4_value;
    
    std::string category;
    int player_per_team;
    int teams_per_team;
};

std::vector<Player> get_all_players();
std::vector<Developer> get_all_developers();
std::vector<Game_Details> get_all_games();

Developer add_developer(Developer D);
Player add_player(Player P);
Game_Details add_game_details(Game_Details GD);
Player_Game_Ratings add_player_rating(Player_Game_Ratings PGR);

std::vector<Joined_Developer_Games> join_developer_games(std::string developer_email);
std::vector<Joined_Player_Game_Ratings> join_player_game_ratings_for_game(int game_id);

#endif