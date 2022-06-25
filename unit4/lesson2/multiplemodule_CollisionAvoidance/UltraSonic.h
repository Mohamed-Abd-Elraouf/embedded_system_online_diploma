/*
 * Ultra_Sonic.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */

#ifndef Ultra_Sonic_H_
#define Ultra_Sonic_H_
enum{
	busy
}Ultra_Sonic_state_id;

void(*pstate_US)();
#define STATE_define(_stateFunc_) 	void ST_##_stateFunc_()
#define STATE(_stateFunc_) ST_##_stateFunc_
STATE_define(busy);
int get_distace_randum(int L,int H,int count);

#endif /* Ultra_Sonic_H_ */
