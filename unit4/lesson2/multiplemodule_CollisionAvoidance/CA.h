/*
 * CA.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */

#ifndef CA_H_
#define CA_H_
enum{
	waiting,
	driving
}CA_state_id;

void(*pstate)();
#define STATE_define(_stateFunc_) 	void ST_##_stateFunc_()
#define STATE(_stateFunc_) ST_##_stateFunc_
STATE_define(waiting);
STATE_define(driving);

#endif /* CA_H_ */
