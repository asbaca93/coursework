create table players														#players holds all the statistics on a certain offensive football player
	(player_ID	numeric(8,0),
	 name		varchar(20)	NOT NULL,							#Not null because every ID must have a name attached to it.
	 team_name	varchar(20),
	 position	char(2)		check (position in ('QB','RB','WR')),		#players can only be WR, RB, and QB
	 touchdowns	numeric(3,0),
	 total_yards	numeric(5,0),
	 salary		numeric(9,0),											
	 primary key (player_ID)											#ID is the primary key so evey id must be attached to a unique player (ie everey ID is unique)
	);
create table games													#games table will hold all statistics about a certain football game being played or that has been played
	(game_ID	numeric(8,0),
	 date		date,
	 stadium	varchar(20),
	 results	char(1)		check (results in ('W','L','T')),			#game can result in a win W, a loss L, or a tie T
	 attendance	numeric(8,0),
	 ticket_revenue	numeric(8,0),
	 primary key (game_ID)													#game_ID is the primary key, meaning every game id is unique to a game
	);
create table play																		#we need the play table to check whuch players played in which games
	(player_ID	numeric(8,0),
	 game_ID	numeric(8,0),
	 foreign key (player_ID) references players(player_ID)
		on delete cascade,
	 foreign key (game_ID) references games(game_ID)
	);