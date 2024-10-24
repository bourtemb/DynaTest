/*----- PROTECTED REGION ID(DynaTestStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        DynaTestStateMachine.cpp
//
// description : State machine file for the DynaTest class
//
// project :     DynaTest
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <DynaTest.h>

/*----- PROTECTED REGION END -----*/	//	DynaTest::DynaTestStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace DynaTest_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method     : DynaTest::is_DynDoubleRO_allowed()
 *	Description: Execution allowed for DynDoubleRO attribute
 */
//--------------------------------------------------------
bool DynaTest::is_DynDoubleRO_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for DynDoubleRO attribute in read access.
	/*----- PROTECTED REGION ID(DynaTest::DynDoubleROStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::DynDoubleROStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method     : DynaTest::is_DynDoubleRW_allowed()
 *	Description: Execution allowed for DynDoubleRW attribute
 */
//--------------------------------------------------------
bool DynaTest::is_DynDoubleRW_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for DynDoubleRW attribute in Write access.
	/*----- PROTECTED REGION ID(DynaTest::DynDoubleRWStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::DynDoubleRWStateAllowed_WRITE

	//	Not any excluded states for DynDoubleRW attribute in read access.
	/*----- PROTECTED REGION ID(DynaTest::DynDoubleRWStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::DynDoubleRWStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method     : DynaTest::is_DynLongRO_allowed()
 *	Description: Execution allowed for DynLongRO attribute
 */
//--------------------------------------------------------
bool DynaTest::is_DynLongRO_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for DynLongRO attribute in read access.
	/*----- PROTECTED REGION ID(DynaTest::DynLongROStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::DynLongROStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method     : DynaTest::is_DynLongRW_allowed()
 *	Description: Execution allowed for DynLongRW attribute
 */
//--------------------------------------------------------
bool DynaTest::is_DynLongRW_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for DynLongRW attribute in Write access.
	/*----- PROTECTED REGION ID(DynaTest::DynLongRWStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::DynLongRWStateAllowed_WRITE

	//	Not any excluded states for DynLongRW attribute in read access.
	/*----- PROTECTED REGION ID(DynaTest::DynLongRWStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::DynLongRWStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================


/*----- PROTECTED REGION ID(DynaTest::DynaTestStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	DynaTest::DynaTestStateAllowed.AdditionalMethods

}	//	End of namespace
