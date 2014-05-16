/*
===========================================================================
Copyright (C) 2012-2014 Marcus Collins (mecwerks@gmail.com).

This file is part of Mecwerks Source Code and is based upon Mr. Elusive's 
fuzzy logic system found in Quake 3 Arena and original re-write by Dmn_clown
(aka: Bob Isaac (rjisaac@gmail.com)).

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

weight "Gauntlet"
{
	switch (INVENTORY_GAUNTLET)
	{
		case 1: return 0;
		default: return W_GT;
	}
}

weight "Machinegun"
{
        switch (INVENTORY_MACHINEGUN)
        {
                case 1: return 0;
                default:
                        switch (INVENTORY_BULLETS)
                        {
                                case 1: return 0;
                                default: return W_MG;
                        }
        }
}

weight "Shotgun"
{
        switch (INVENTORY_SHOTGUN)
        {
                case 1: return 0;
                default:
                        switch (INVENTORY_SHELLS)
                        {
                                case 1: return 0;
                                default:
					switch(ENEMY_HORIZONTAL_DIST)
                                        {
                                        	case 600: return W_SG;
                                        	default: return $evalint(W_SG*0.1);
                                        }
                        }
        }
}

weight "Grenade Launcher"
{
        switch (INVENTORY_GRENADELAUNCHER)
        {
                case 1: return 0;
                default:
                        switch (INVENTORY_GRENADES)
                        {
                                case 1: return 0;
                                default:
					switch(ENEMY_HORIZONTAL_DIST)
                                        {
                                        	case 600: return W_GL;
                                        	default: return $evalint(W_GL*0.1);
                                        }
                        }
        }
}

weight "Rocket Launcher"
{
        switch (INVENTORY_ROCKETLAUNCHER)
        {
                case 1: return 0;
                default:
                        switch (INVENTORY_ROCKETS)
                        {
                                case 1: return 0;
                                default:
					switch(ENEMY_HORIZONTAL_DIST)
                                        {
                                        	case 4000: return W_RL;
                                        	default: return $evalint(W_RL*0.1);
                                        }
                        }
        }
}

weight "Lightning Gun"
{
        switch (INVENTORY_LIGHTNING)
        {
                case 1: return 0;
                default:
                        switch (INVENTORY_LIGHTNINGAMMO)
                        {
                                case 1: return 0;
                                default:
					switch(ENEMY_HORIZONTAL_DIST)
                                        {
                                        	case 768: return W_LG;
                                        	default: return $evalint(W_LG*0.1);
                                        }
                        }
        }
}

weight "Plasma Gun"
{
        switch (INVENTORY_PLASMAGUN)
        {
                case 1: return 0;
                default:
                        switch (INVENTORY_CELLS)
                        {
                                case 1: return 0;
                                default:
					switch(ENEMY_HORIZONTAL_DIST)
                                        {
                                        	case 2000: return W_PG;
                                        	default: return $evalint(W_PG*0.1);
                                        }
                        }
        }
}

weight "Railgun"
{
        switch (INVENTORY_RAILGUN)
        {
                case 1: return 0;
                default:
                        switch (INVENTORY_SLUGS)
                        {
                                case 1: return 0;
                                default: return W_RG;
                        }
        }
}

weight "BFG10K"
{
	switch (INVENTORY_BFG10K)
	{
		case 1: return 0;
		default:
			switch (INVENTORY_BFGAMMO)
			{
				case 1: return 0;
				default: return W_BFG;
			}
	}
}
