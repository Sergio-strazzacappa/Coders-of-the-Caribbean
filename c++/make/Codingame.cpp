#include <string>
#include <array>
#include <iostream>
#include <vector>
using namespace std;


class Point
{
    int x;
    int y;

    public:
        Point();
        Point(int x, int y);
        int get_x();
        int get_y();
        string debug();
};


Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}
        
int Point::get_x()
{
    return this->x;
}

int Point::get_y()
{
    return this->y;
}

string Point::debug()
{
    return "(" + to_string(this->x) + ", " + to_string(this->y) + ")"; 
}



class Entity
{
    protected:
        int id;
        string type;
        Point coordinate;

    public:
        Entity();
        Entity(int id, string type, Point coordinate);
        int get_id();
        string get_type();
        Point get_coordinate();
        void set_id(int id);
        void set_type(string type);
        void set_coordinate(Point coordinate);
        string debug();
};



// Constructors
Entity::Entity()
{
    this->id = 0;
    this->type = "";
    this->coordinate;
}

Entity::Entity(int id, string type, Point coordinate)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
}

// Getters
int Entity::get_id()
{
    return this->id;
}

string Entity::get_type()
{
    return this->type;
}

Point Entity::get_coordinate()
{
    return this->coordinate;
}

// Setters
void Entity::set_id(int id)
{
    this->id = id;
}

void Entity::set_type(string type)
{
    this->type = type;
}

void Entity::set_coordinate(Point coordinate)
{
    this->coordinate = coordinate;
}

string Entity::debug()
{
    return "Entity: { " + to_string(this->id) + ", " + this->type + ", " + this->coordinate.debug() + " }"; 
}



class Barrel : public Entity
{
    int quantity;

    public:
        Barrel();
        Barrel(int id, string type, Point coordinate, int quantity);
        int get_quantity();
        void set_quantity(int quantity);
        string debug();
};



// Constructors
Barrel::Barrel()
{
    this->id = 0;
    this->type = "";
    this->coordinate;
    this->quantity = 0;
}

Barrel::Barrel(int id, string type, Point coordinate, int quantity)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
    this->quantity = quantity;
}

// Getters
int Barrel::get_quantity()
{
    return this->quantity;
}

// Setters
void Barrel::set_quantity(int quantity)
{
    this->quantity = quantity;
}

string Barrel::debug()
{
    return "Barrel: { " + to_string(this->id) + ", " + this->type + ", " + this->coordinate.debug() + ", " + to_string(this->quantity) + " }";
}



class Ship : public Entity
{
    int orientation;
    int speed;
    int remaining_rum;
    int owner;

    public:
        Ship();
        Ship(int id, string type, Point coordinate, int orientation, int speed, int remaining_rum, int owner);
        int get_orientation();
        int get_speed();
        int get_remaining_rum();
        int get_owner();
        void set_orientation(int orientation);
        void set_speed(int speed);
        void set_remaining_rum(int remaining_rum);
        void set_owner(int owner);
        string debug();
};



// Constructors
Ship::Ship()
{
    this->id = 0;
    this->type = "";
    this->coordinate;
    this-> orientation = 0;
    this->speed = 0;
    this->remaining_rum = 0;
    this->owner = 0;
}

Ship::Ship(int id, string type, Point coordinate, int orientation, int speed, int remaining_rum, int owner)
{
    this->id = id;
    this->type = type;
    this->coordinate = coordinate;
    this->orientation = orientation;
    this->speed = speed;
    this->remaining_rum = remaining_rum;
    this->owner = owner;
}

// Getters
int Ship::get_orientation()
{
    return this->orientation;
}

int Ship::get_speed()
{
    return this->speed;
}

int Ship::get_remaining_rum()
{
    return this->remaining_rum;
}

int Ship::get_owner()
{
    return this->owner;
}

// Setters
void Ship::set_orientation(int orientation)
{
    this->orientation = orientation;
}

void Ship::set_speed(int speed)
{
    this->speed = speed;
}

void Ship::set_remaining_rum(int remaining_rum)
{
    this->remaining_rum = remaining_rum;
}

void Ship::set_owner(int owner)
{
    this->owner = owner;
}

string Ship::debug()
{
    return "Ship: { " + to_string(this->id) + ", " + this->type + ", " + this->coordinate.debug() + ", " + to_string(this->orientation) + ", " + to_string(this->speed) + ", " + to_string(this->remaining_rum) + ", " + to_string(this->owner) + " }";
}



class Player
{
    int ship_count;
    vector<Ship> ships;

    public:
        Player();
        Player(int ship_count, vector<Ship> ships);
        int get_ship_count();
        vector<Ship> get_ships();
        void set_ship_count(int ship_count);
        void set_ships(vector<Ship>);
        void add_ship(Ship ship);
        string debug();
};



// Constructors
Player::Player()
{
    this->ship_count = 0;
    this->ships;
}

Player::Player(int ship_count, vector<Ship> ships)
{
    this->ship_count = ship_count;
    this->ships = ships;
}

// Getters
int Player::get_ship_count()
{
    return this->ship_count;
}

vector<Ship> Player::get_ships()
{
    return this->ships;
}

// Setters
void Player::set_ship_count(int ship_count)
{
    this->ship_count = ship_count;
}

void Player::set_ships(vector<Ship> ships)
{
    this->ships = ships;
}

void Player::add_ship(Ship ship)
{
    this->ships.push_back(ship);
    cerr << "Agregando barco" << endl;
}

string Player::debug()
{
    string output = "Player: { "  + to_string(this->ship_count);
    for(int i = 0; i < ship_count; i++)
    {
        output += ", " + this->ships[i].get_coordinate().debug();
    }
    output += " } ";
    return output;
}



class Game
{
    int entity_count;
    vector<Player> players;
    vector<Barrel> barrels;

    public:
        Game();
        int get_entity_count();
        Player get_player1();
        Player get_player2();
        void add_ship(int indice, Ship ship);
        void set_entity_count(int entity_count);
        string debug();
};



// Constructors
Game::Game()
{
    this->entity_count = 0;
    Player p1;
    Player p2;
    this->players.push_back(p1);
    this->players.push_back(p2);
    this->barrels;
}

// Getters

int Game::get_entity_count()
{
    return this->entity_count;
}

Player Game::get_player1()
{
    return this->players[0];
}

Player Game::get_player2()
{
    return this->players[1];
}

// Setters

void Game::set_entity_count(int entity_count)
{
    this->entity_count = entity_count;
}

void Game::add_ship(int index, Ship ship)
{
    this->players[index].add_ship(ship);
    cerr << this->players[index].debug() << endl;
}

string Game::debug()
{
    string output = "Game: { " + to_string(this->entity_count);
    Player p1 = this->players[0];
    output += ", Player 1: ";
    for(int i = 0; i < p1.get_ship_count(); i++)
    {
        output += this->players[0].get_ships()[i].debug() + " - ";
    }
    Player p2 = this->players[1];
    output += ", Player 2: ";
    for(int i = 0; i < p2.get_ship_count(); i++)
    {
        output += this->players[1].get_ships()[i].debug() + " - ";
    }
    output += ", Barrels: ";
    for(int i = 0; i < this->barrels.size(); i++)
    {
        output += barrels[i].get_coordinate().debug() + " - ";
    }
    output += " }";
    return output;
}



class Io
{
    public:
        static Game read_turn();
};



Game Io::read_turn()
{
    Game game;
    
    int ship_count;
    int entity_count;

    cin >> ship_count;
    cin.ignore();
    cin >> entity_count;
    cin.ignore();
    game.set_entity_count(entity_count);
    Player player1();
    Player player2();
    game.get_player1().set_ship_count(ship_count);
    game.get_player2().set_ship_count(ship_count);
    cerr << game.get_player1().debug() << endl;

    for(int i = 0; i < entity_count; i++)
    {
        int entity_id;
        string entity_type;
        int x;
        int y;
        int arg1;
        int arg2;
        int arg3;
        int arg4;

        cin >> entity_id >> entity_type >> x >> y >> arg1 >> arg2 >> arg3 >> arg4;
        cin.ignore();

        if(entity_type == "SHIP")
        {
            Ship ship(entity_id, entity_type, Point(x, y), arg1, arg2, arg3, arg4);
            if(arg4 == 0)
            {
                // The ship is controlled by my opponent
                game.add_ship(1, ship);
            }
            else
            {
                // The ship is controlled by me
                game.add_ship(0, ship);
            }
        }
    }
    return game;   
}


/*
const int X = 23;
const int Y = 21;

array<array<Point, X>, Y> map;
const string ACTIONS[] =
{

};

void print_map()
{
    for(auto y : map)
    {
        for(auto x : y)
        {
            cerr << x.debug() + ' ';
        }
        cerr << endl;
    }
}

void print_ships()
{
    cerr << "List of ships: " << endl;
    for(auto s : ships)
    {
        cerr << s.debug() << endl;
    }
}

void print_barrels()
{
    cerr << "List of barrels: " << endl;
    for(auto b : barrel)
    {
        cerr << b.debug() << endl;
    }
}

void reset()
{
    ships.clear();
    barrel.clear();
}
*/

int main()
{
    while(true)
    {
        Game game = Io::read_turn();
        cerr << game.debug() << endl;
        cerr << game.get_player1().get_ships().size() << endl;
    }
    return 0;
}
        
 /* 
            if(entity_type == "SHIP")
            {
                // Ship
                Ship s(entity_id, entity_type, Point(x, y), arg1, arg2, arg3, arg4);
                ships.push_back(s);
            }
            else if(entity_type == "BARREL")
            {
                // Barrel
                Barrel b(entity_id, entity_type, Point(x, y), arg1);
                barrel.push_back(b);
            }
        }
        print_ships();
        print_barrels();
        cout << "WAIT" << endl;
    }
*/
