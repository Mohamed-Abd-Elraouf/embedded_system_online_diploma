/*
 * DC.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */

#ifndef DC_H_
#define DC_H_
enum{
	idle,
	drive
}DC_state_id;

void(*pstate_DC)();
#define STATE_define(_stateFunc_) 	void ST_##_stateFunc_()
#define STATE(_stateFunc_) ST_##_stateFunc_
STATE_define(idle);
STATE_define(drive);
#endif  /*DC_H_*/
