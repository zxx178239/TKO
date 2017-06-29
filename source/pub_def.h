#ifndef PUB_DEF_H
#define PUB_DEF_H

#define COUNT_THE_MEMORY_DELETE

#define Windows
//#define Linux


#ifdef Windows
#include <hash_map>
using namespace stdext;
#endif

#ifdef Linux
#include <ext/hash_map>
#include <sys/utsname.h>
using namespace __gnu_cxx;
#endif

	/*****************************/
	/*
		how to use the define 
		1. hui-miner: open the HUIMINER
		2. FHM: open the HUIMINER and the EUCS_Strategy
		3. use the LA_Prune, open the LA_Prune, which is a strategy of the HUP-Miner algorithm
		4. TKO: open the TKO, TKO_NZEU, TKO_PE, and TKO_EPB
		5. TKO+: open the TKO, TKO_NZEU, TKO_PE, TKO_EPB, EUCS_Strategy, and LA_Prune
	*/

/***************some algorithms define******************/
//#define HUIMINER

// for the FHM algorithm, we add the EUCS strategy, it is useful
//#define EUCS_Strategy

// for the HUP_Miner algorithm, we add the LA_PRUNE, it is also useful
//#define LA_Prune

// the strategy for top-k Z-element, when the element is the last element, then it do not have extension
#define TKO

#define TKO_NZEU

#define TKO_PE

#define TKO_EPB

//#define Add_PUtil

#endif
