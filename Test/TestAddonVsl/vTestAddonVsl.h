//	vTestAddonVsl.h - Generated by the "Microsoft Visio 2010 SDK 
//	Add-on Wizard"
//
//	<summary>
//	This file contains the Visio add-on class definitions.
//	</summary>
//	

#pragma once

#include "vaddon.h"		//	parent class, VAddon
#include "basetyps.h"
#include "wtypes.h"

//	VTestAddonVsl - Subclass of VAddon
//
//	<summary>
//	VTestAddonVsl is the wizard generated Visio 
//	add-on class
//	</summary>
//

class VTestAddonVsl : public VAddon {

public:
	//	Constructor and destructor
	VTestAddonVsl(
		VAO_ATTS atts,					//	[IN] Add-on attributes
		VAO_ENABMASK enabMask,			//	[IN] Add-on enable mask
		VAO_INVOKEMASK invokeOnMask,	//	[IN] Add-on invoke mask
		VAO_NOTIFYMASK notifyOnMask,	//	[IN] Add-on notify mask
		LPCTSTR lpNameU,				//	[IN] Add-on Universal name
		UINT uIDLocalName);				//	[IN] Add-on Local name resource id

	virtual ~VTestAddonVsl();

	//	VAddon Overrides
	virtual VAORC Run(
		LPVAOV2LSTRUCT pV2L);			//	[IN] Structure passed by Visio

	virtual VAORC IsEnabled(
		LPVAOV2LSTRUCT pV2L);			//	[IN] Structure passed by Visio

	virtual VAORC Help(
		LPVAOV2LSTRUCT pV2L);			//	[IN] Structure passed by Visio

	virtual VAORC About(
		LPVAOV2LSTRUCT pV2L);			//	[IN] Structure passed by Visio

	virtual VAORC Load(
		WORD wVersion,					//	[IN] Add-on interface version
		LPVOID p);						//	[IN] Pointer to call back function
										//	in Visio.

	virtual VAORC Unload(
		WORD wParam,					//	[IN] wParam passed by Visio
		LPVOID p);						//	[IN] lpParam passed by Visio

	virtual VAORC KillSession(
		LPVAOV2LSTRUCT pV2L);			//	[IN] Structure passed by Visio

	virtual HINSTANCE GetInstance(
		long nFlags = 0L);				//	[IN] Flags

	virtual HINSTANCE GetResourceHandle();

	//	VTestAddonVsl convenience methods:
	virtual HRESULT GetApp(
		LPVAOV2LSTRUCT pV2L,			//	[IN] Structure passed by Visio
		Visio::IVApplicationPtr &app);		//	[OUT] Application object

private:

	Visio::IVApplicationPtr m_app;

	// Prevent generation of default constructors and 
	// operators

	VTestAddonVsl();
	VTestAddonVsl(const VTestAddonVsl &);
	VTestAddonVsl & operator=(const VTestAddonVsl &);
};


extern VTestAddonVsl g_vTestAddonVslAddon;

