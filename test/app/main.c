/** @file
 *	@brief	Primary Unit Test file for the CWSW Arch component.
 *
 *	Copyright (c) 2019 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Nov 11, 2018
 *	Author: kbecker
 */

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>	/* INT_MAX */

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "cwsw_arch.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

#if 0
void
EventHandler__evNotInit(tEventPayload EventData)
{
	UNUSED(EventData);
}

void
EventHandler__evTerminateRequested(tEventPayload EventData)
{
	UNUSED(EventData);
	(void)puts("Goodbye Cruel World!");
}
#endif


/** Entry for demonstration app for core part of CWSW Arch component.
 *	This is extremely limited in functionality by design, and is not intended
 *	to demonstrate the features and capabilities of the library. That task is
 *	left to the Architecture Integration project.
 */
int
main(void)
{
	if(!Cwsw_Arch__Get_Initialized())
	{
		(void)Cwsw_Arch__Init();
	}
    return (EXIT_SUCCESS);
}
