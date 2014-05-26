/*
===========================================================================
Copyright (C) 2012-2014 Marcus Collins (mecwerks@gmail.com).

This file is part of Mecwerks Source Code.

Mecwerks Source Code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 3 of the License,
or (at your option) any later version.

Mecwerks Source Code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Mecwerks Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, Mecwerks Source Code is also subject to certain additional terms.
You should have received a copy of these additional terms immediately following
the terms and conditions of the GNU General Public License.  If not, please
request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional
terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc.,
Suite 120, Rockville, Maryland 20850 USA.
===========================================================================
*/

chat "marcus"
{
	#include "teamplay.h"

	type "game_enter"
	{
		HELLO0;
		HELLO1;
		HELLO2;
		HELLO3;
	}

	type "game_exit"
	{
		GOODBYE0;
		GOODBYE1;
		GOODBYE2;
		GOODBYE3;
		GOODBYE4;
	} 

	type "level_start"
	{
		LEVEL_START0;
		LEVEL_START1;
		LEVEL_START2;
		LEVEL_START3;
	}

	type "level_end"
	{
		LEVEL_END0;
		LEVEL_END1;
	} 

	type "level_end_victory"
	{
		LEVEL_END_VICTORY0;
		LEVEL_END_VICTORY1;
	}

	type "level_end_lose"
	{
		LEVEL_END_LOSE0;
		LEVEL_END_LOSE1;
	}

	type "hit_talking"
	{
		DEATH_TALKING;
	}

	type "damaged_nokill"
	{
		D_NOKILL0;
	}

	type "hit_nokill"
	{
		HIT_NOKILL0;
		HIT_NOKILL1;
	}
 
	type "enemy_suicide"
	{
		ENEMY_SUICIDE0;
	} 

	type "death_telefrag"
	{
		DEATH_TELEFRAGGED0;
		DEATH_TELEFRAGGED1;
	}

	type "death_lava"
	{
		DEATH_LAVA0;
		DEATH_LAVA1;
		DEATH_LAVA2;
	}

	type "death_slime"
	{
		DEATH_SLIME0;
		DEATH_SLIME2;
	}

	type "death_drown"
	{
		DEATH_DROWN0;
		DEATH_DROWN1;
		DEATH_DROWN2;
	}

	type "death_suicide"
	{
		DEATH_SUICIDE0;
		DEATH_SUICIDE1;
		DEATH_SUICIDE2;
	}

	type "death_rail"
	{
		DEATH_RAIL0;
		DEATH_RAIL1;
	}

	type "death_bfg"
	{
		DEATH_BFG0;
		DEATH_BFG1;
		DEATH_BFG2;
		DEATH_BFG3;
	}

	type "death_insult"
	{
		DEATH_INSULT0;
		DEATH_INSULT1;
		DEATH_INSULT2;
		DEATH_INSULT3;
		DEATH_INSULT4;
		DEATH_INSULT5;
	}

	type "death_praise"
	{
		PRAISE0;
		PRAISE1;
		D_PRAISE0;
		D_PRAISE1;
		D_PRAISE2;
		D_PRAISE3;	
	}
	
	type "kill_rail"
	{
		KILL_RAIL0;
		KILL_RAIL1;
	}

	type "kill_telefrag"
	{
		TELEFRAGGED0;
		TELEFRAGGED1;
		TELEFRAGGED2;
	}

	type "kill_insult"
	{
		KILL_INSULT0;
		KILL_INSULT1;
		KILL_INSULT2;
		KILL_INSULT3;
		KILL_INSULT4;
		KILL_EXTREME_INSULT;
	}

	type "kill_praise"
	{
		KILL_PRAISE0;
	}

	type "random_insult"
	{
		TAUNT0;
		TAUNT1;
		TAUNT2;
	}

	type "random_misc"
	{
		MISC0;
		MISC1;
		MISC2;
		MISC3;
		MISC4;
	}
}
