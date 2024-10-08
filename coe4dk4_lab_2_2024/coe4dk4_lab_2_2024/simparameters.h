
/*
 * 
 * Simulation of A Single Server Queueing System
 * 
 * Copyright (C) 2014 Terence D. Todd Hamilton, Ontario, CANADA,
 * todd@mcmaster.ca
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/******************************************************************************/

#ifndef _SIMPARAMETERS_H_
#define _SIMPARAMETERS_H_

/******************************************************************************/

#define PACKET_ARRIVAL_RATE 30
#define PACKET_LENGTH 500 /* bits */
#define LINK_BIT_RATE 1e6 /* bits per second */
#define RUNLENGTH 10e6 /* packets */

#define DATA_MEAN_SERVICE_TIME 0.04 /* mean service time (seconds) for data traffic in experiment 6 */
#define T_V 0.02 /* Voice packets arrive with fixed interpacket arrival times of 20 ms */

// 64 Kbps * T_V * 1024 + (62*8) b of header / LINK_BIT_RATE = voice service time in s
#define VOICE_SERVICE_TIME (double) ((64 * 1024 * T_V + 62 * 8) / LINK_BIT_RATE)  

/* Comma separated list of random seeds to run. */
#define RANDOM_SEED_LIST 400243271, 400307241, 333333, 444444, 111111, 6666666, 21987319, 85949439, 7278, 9458948

#define PACKET_XMT_TIME ((double) PACKET_LENGTH/LINK_BIT_RATE)
#define BLIPRATE (RUNLENGTH/1000)

/******************************************************************************/

#endif /* simparameters.h */



