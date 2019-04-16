//====== Copyright � 1996-2005, Valve Corporation, All rights reserved. =======//
//
// Purpose: CTF HealthKit.
//
//=============================================================================//
#ifndef ENTITY_HEALTHKIT_H
#define ENTITY_HEALTHKIT_H

#ifdef _WIN32
#pragma once
#endif

#include "tf_powerup.h"

//=============================================================================
//
// CTF HealthKit class.
//

class CHealthKit : public CTFPowerup
{
public:
	DECLARE_CLASS( CHealthKit, CTFPowerup );

	void	Spawn( void );
	void	Precache( void );
	bool	MyTouch( CBasePlayer *pPlayer );
	string_t m_iszModel=MAKE_STRING( "" );
	string_t m_iszPickupSound=MAKE_STRING( "HealthKit.Touch" );
	virtual const char *GetPowerupModel( void ) { return "models/items/medkit_large.mdl"; }

	powerupsize_t	GetPowerupSize( void ) { return POWERUP_FULL; }
	DECLARE_DATADESC();
};

class CHealthKitSmall : public CHealthKit
{
public:
	DECLARE_CLASS( CHealthKitSmall, CHealthKit );
	powerupsize_t	GetPowerupSize( void ) { return POWERUP_SMALL; }
	virtual const char *GetPowerupModel( void ) { return "models/items/medkit_small.mdl"; }
	DECLARE_DATADESC();
};

class CHealthKitMedium : public CHealthKit
{
public:
	DECLARE_CLASS( CHealthKitMedium, CHealthKit );
	powerupsize_t	GetPowerupSize( void ) { return POWERUP_MEDIUM; }
	virtual const char *GetPowerupModel( void ) { return "models/items/medkit_medium.mdl"; }
	DECLARE_DATADESC();
};

#endif // ENTITY_HEALTHKIT_H


