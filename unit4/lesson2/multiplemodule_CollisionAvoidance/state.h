/*
 * state.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */

#ifndef STATE_H_
#define STATE_H_


#define STATE_define(_stateFunc_) 	void ST_##_stateFunc_()
#define STATE(_stateFunc_) ST_##_stateFunc_
void send_distance(int d);
void set_motor(int s);


#endif /* STATE_H_ */
