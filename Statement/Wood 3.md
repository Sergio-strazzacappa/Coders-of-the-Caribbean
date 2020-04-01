__This is a league based puzzle.__

For this puzzle, multiple versions of the same game are available. Once you have proven your skills on this first version, you will access a higher league and extra rules will be unlocked.

# The Goal
In this game, you are in command of pirate ships and your goal is to avoid running out of rum. If all the rum dries up on a given ship, your crew will go mad and you will lose the ship. Barrels of rum are placed randomly across the map. You must control the movements of your ship in order to collect the barrels of rum before your opponent does.

## Rules
The game is played on a hexagonal grid __23__ cells wide and __21__ high.

Both players have __one__ ship (and up to __3__ in later leagues). Every ship is __3__ cells long and __1__ cell wide.

On the grid you will find barrels of rum __(BARREL)__. The barrels contain between __10__ and __20__ units of rum. Each ship can carry a maximum of __100__ units of rum (surplus will be lost).

Each turn, the players can decide to move their ship towards the cell of their choice using the __MOVE__ command. Ships can gain speed, slow down, turn left (port) or right (starboard). The __MOVE__ action uses a very simplified algorithm to reach the destination.

_Note: you may choose to use the __WAIT__ command, in which case your boat will retain the direction and speed it had last turn. Using the __SLOWER__ command will slow your ship down._

## Game turns:

One game turn is computed as follows:

- The amount of rum each ship is carrying is decreased by 1 unit.
- The players' commands are applied.
- Ships move forward by the same number of cells as their speed.
- Ships turn.
- Elimination of ships with no more rum.

If at any point during its movement a ship shares a cell with a barrel of rum, the ship collects that rum.

## The grid:

The (0,0) coordinate is at the top left corner of the grid. The game's grid is made up of hexagonal cells but, for this league, you don't need to worry too much about it. Simply use the __MOVE__ command to move around: that's as easy as moving on a normal grid. More information about the nuts and bolts of an hex grid will be provided in the next leagues.

## The ships:

A ship's position in the grid is represented by the coordinates of its center and its direction. The direction is a number between __0__ and __5__.

# Victory Conditions
- Your opponent runs out of rum.
- After 200 turns, you have more rum in total than your opponent.

# Expert Rules

## Collisions

You don't need to worry about the collisions in this league. The collision mechanism will be explained in the next leagues.

## Source code:

The source code of the game is available on our Github at this address: [https://github.com/CodinGame/coders-of-the-caribbean/](https://github.com/CodinGame/coders-of-the-caribbean/).


# Game Input

## Input for one game turn
__Line 1__: __myShipCount__, an integer for the number of ships you control.  
__Line 2__: __entityCount__, an integer for the number of entities on the grid.  
__The next entityCount lines__: an integer __entityId__, a string __entityType__, two integers __x__ and __y__ for the coordinates of the entity, then 4 integers __arg1__, __arg2__, __arg3__ and __arg4__.  

If __entityType__ equals __SHIP__, then the integers represent:
- __arg1__: the ship's rotation orientation (between 0 and 5)
- __arg2__: the ship's speed (between 0 and 2)
- __arg3__: the ship's stock of rum units
- __arg4__: 1 if the ship is controlled by you, 0 otherwise

If __entityType__ equals __BARREL__, then the integers represent:
- __arg1__: the amount of rum in this barrel

## Output for one game turn
For each one of your ships, one of the following commands:
- __MOVE x y__: move automatically towards the specified coordinate.
- __SLOWER__: speed the ship down.
- __WAIT__: perform no action.

# Constraints
__myShipCount__ = 1  
10 ≤ __rumBarrelCount__ ≤ 26  
0 ≤ __x__ ≤ 22  
0 ≤ __y__ ≤ 20  
0 ≤ __shipSpeed__ ≤ 2  
__Response time for first turn__ ≤ 1000ms  
__Response time for one turn__ ≤ 50ms  


__What is in store for me in the higher leagues?__

The extra rules available in higher leagues are:
- Shoot cannon balls at your opponent and place mines on the map.
- Control up to 3 ships at once.
- Steer the ships manually for more precise control. The ships can go twice as fast.