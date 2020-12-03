/*----- PROTECTED REGION ID(DynaTest::DynAttrUtils.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        DynaTestDynAttrUtils.cpp
//
// description : Dynamic attributes utilities file for the DynaTest class
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
#include <DynaTestClass.h>

/*----- PROTECTED REGION END -----*/	//	DynaTest::DynAttrUtils.cpp

//================================================================
//  Attributes managed are:
//================================================================
//  DynDoubleRO  |  Tango::DevDouble	Scalar
//  DynDoubleRW  |  Tango::DevDouble	Scalar
//  DynLongRO    |  Tango::DevLong	Scalar
//  DynLongRW    |  Tango::DevLong	Scalar
//================================================================

//	For compatibility reason, this file (DynaTestDynAttrUtils)
//	manage also the dynamic command utilities.
//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//================================================================
//================================================================

namespace DynaTest_ns
{
//=============================================================
//	Add/Remove dynamic attribute methods
//=============================================================

//--------------------------------------------------------
/**
 *	Add a DynDoubleRO dynamic attribute.
 *
 *  parameter attname: attribute name to be cretated and added.
 */
//--------------------------------------------------------
void DynaTest::add_DynDoubleRO_dynamic_attribute(string attname)
{
	//	Attribute : DynDoubleRO
	DynDoubleROAttrib	*dyndoublero = new DynDoubleROAttrib(attname);
	Tango::UserDefaultAttrProp	dyndoublero_prop;
	//	description	not set for DynDoubleRO
	//	label	not set for DynDoubleRO
	//	unit	not set for DynDoubleRO
	//	standard_unit	not set for DynDoubleRO
	//	display_unit	not set for DynDoubleRO
	//	format	not set for DynDoubleRO
	//	max_value	not set for DynDoubleRO
	//	min_value	not set for DynDoubleRO
	//	max_alarm	not set for DynDoubleRO
	//	min_alarm	not set for DynDoubleRO
	//	max_warning	not set for DynDoubleRO
	//	min_warning	not set for DynDoubleRO
	//	delta_t	not set for DynDoubleRO
	//	delta_val	not set for DynDoubleRO
	
	/*----- PROTECTED REGION ID(DynaTest::att_DynDoubleRO_dynamic_attribute) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::att_DynDoubleRO_dynamic_attribute
	dyndoublero->set_default_properties(dyndoublero_prop);
	//	Not Polled
	dyndoublero->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	DynDoubleRO_data.insert(make_pair(attname, 0.0));
	add_attribute(dyndoublero);
}
//--------------------------------------------------------
/**
 *	remove a DynDoubleRO dynamic attribute.
 *
 *  parameter attname: attribute name to be removed.
 */
//--------------------------------------------------------
void DynaTest::remove_DynDoubleRO_dynamic_attribute(string attname)
{
	remove_attribute(attname, true, Tango::Util::instance()->_UseDb);
	map<string,Tango::DevDouble>::iterator ite;
    if ((ite=DynDoubleRO_data.find(attname))!=DynDoubleRO_data.end())
    {
    	/*----- PROTECTED REGION ID(DynaTest::remove_DynDoubleRO_dynamic_attribute) ENABLED START -----*/
    	
    	/*----- PROTECTED REGION END -----*/	//	DynaTest::remove_DynDoubleRO_dynamic_attribute
		DynDoubleRO_data.erase(ite);
	}
}
//--------------------------------------------------------
/**
 *	Add a DynDoubleRW dynamic attribute.
 *
 *  parameter attname: attribute name to be cretated and added.
 */
//--------------------------------------------------------
void DynaTest::add_DynDoubleRW_dynamic_attribute(string attname)
{
	//	Attribute : DynDoubleRW
	DynDoubleRWAttrib	*dyndoublerw = new DynDoubleRWAttrib(attname);
	Tango::UserDefaultAttrProp	dyndoublerw_prop;
	//	description	not set for DynDoubleRW
	//	label	not set for DynDoubleRW
	//	unit	not set for DynDoubleRW
	//	standard_unit	not set for DynDoubleRW
	//	display_unit	not set for DynDoubleRW
	//	format	not set for DynDoubleRW
	//	max_value	not set for DynDoubleRW
	//	min_value	not set for DynDoubleRW
	//	max_alarm	not set for DynDoubleRW
	//	min_alarm	not set for DynDoubleRW
	//	max_warning	not set for DynDoubleRW
	//	min_warning	not set for DynDoubleRW
	//	delta_t	not set for DynDoubleRW
	//	delta_val	not set for DynDoubleRW
	
	/*----- PROTECTED REGION ID(DynaTest::att_DynDoubleRW_dynamic_attribute) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::att_DynDoubleRW_dynamic_attribute
	dyndoublerw->set_default_properties(dyndoublerw_prop);
	//	Not Polled
	dyndoublerw->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	DynDoubleRW_data.insert(make_pair(attname, 0.0));
	add_attribute(dyndoublerw);
}
//--------------------------------------------------------
/**
 *	remove a DynDoubleRW dynamic attribute.
 *
 *  parameter attname: attribute name to be removed.
 */
//--------------------------------------------------------
void DynaTest::remove_DynDoubleRW_dynamic_attribute(string attname)
{
	remove_attribute(attname, true, Tango::Util::instance()->_UseDb);
	map<string,Tango::DevDouble>::iterator ite;
    if ((ite=DynDoubleRW_data.find(attname))!=DynDoubleRW_data.end())
    {
    	/*----- PROTECTED REGION ID(DynaTest::remove_DynDoubleRW_dynamic_attribute) ENABLED START -----*/
    	
    	/*----- PROTECTED REGION END -----*/	//	DynaTest::remove_DynDoubleRW_dynamic_attribute
		DynDoubleRW_data.erase(ite);
	}
}
//--------------------------------------------------------
/**
 *	Add a DynLongRO dynamic attribute.
 *
 *  parameter attname: attribute name to be cretated and added.
 */
//--------------------------------------------------------
void DynaTest::add_DynLongRO_dynamic_attribute(string attname)
{
	//	Attribute : DynLongRO
	DynLongROAttrib	*dynlongro = new DynLongROAttrib(attname);
	Tango::UserDefaultAttrProp	dynlongro_prop;
	//	description	not set for DynLongRO
	//	label	not set for DynLongRO
	//	unit	not set for DynLongRO
	//	standard_unit	not set for DynLongRO
	//	display_unit	not set for DynLongRO
	//	format	not set for DynLongRO
	//	max_value	not set for DynLongRO
	//	min_value	not set for DynLongRO
	//	max_alarm	not set for DynLongRO
	//	min_alarm	not set for DynLongRO
	//	max_warning	not set for DynLongRO
	//	min_warning	not set for DynLongRO
	//	delta_t	not set for DynLongRO
	//	delta_val	not set for DynLongRO
	
	/*----- PROTECTED REGION ID(DynaTest::att_DynLongRO_dynamic_attribute) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::att_DynLongRO_dynamic_attribute
	dynlongro->set_default_properties(dynlongro_prop);
	//	Not Polled
	dynlongro->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	DynLongRO_data.insert(make_pair(attname, 0));
	add_attribute(dynlongro);
}
//--------------------------------------------------------
/**
 *	remove a DynLongRO dynamic attribute.
 *
 *  parameter attname: attribute name to be removed.
 */
//--------------------------------------------------------
void DynaTest::remove_DynLongRO_dynamic_attribute(string attname)
{
	remove_attribute(attname, true, Tango::Util::instance()->_UseDb);
	map<string,Tango::DevLong>::iterator ite;
    if ((ite=DynLongRO_data.find(attname))!=DynLongRO_data.end())
    {
    	/*----- PROTECTED REGION ID(DynaTest::remove_DynLongRO_dynamic_attribute) ENABLED START -----*/
    	
    	/*----- PROTECTED REGION END -----*/	//	DynaTest::remove_DynLongRO_dynamic_attribute
		DynLongRO_data.erase(ite);
	}
}
//--------------------------------------------------------
/**
 *	Add a DynLongRW dynamic attribute.
 *
 *  parameter attname: attribute name to be cretated and added.
 */
//--------------------------------------------------------
void DynaTest::add_DynLongRW_dynamic_attribute(string attname)
{
	//	Attribute : DynLongRW
	DynLongRWAttrib	*dynlongrw = new DynLongRWAttrib(attname);
	Tango::UserDefaultAttrProp	dynlongrw_prop;
	//	description	not set for DynLongRW
	//	label	not set for DynLongRW
	//	unit	not set for DynLongRW
	//	standard_unit	not set for DynLongRW
	//	display_unit	not set for DynLongRW
	//	format	not set for DynLongRW
	//	max_value	not set for DynLongRW
	//	min_value	not set for DynLongRW
	//	max_alarm	not set for DynLongRW
	//	min_alarm	not set for DynLongRW
	//	max_warning	not set for DynLongRW
	//	min_warning	not set for DynLongRW
	//	delta_t	not set for DynLongRW
	//	delta_val	not set for DynLongRW
	
	/*----- PROTECTED REGION ID(DynaTest::att_DynLongRW_dynamic_attribute) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	DynaTest::att_DynLongRW_dynamic_attribute
	dynlongrw->set_default_properties(dynlongrw_prop);
	//	Not Polled
	dynlongrw->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	DynLongRW_data.insert(make_pair(attname, 0));
	add_attribute(dynlongrw);
}
//--------------------------------------------------------
/**
 *	remove a DynLongRW dynamic attribute.
 *
 *  parameter attname: attribute name to be removed.
 */
//--------------------------------------------------------
void DynaTest::remove_DynLongRW_dynamic_attribute(string attname)
{
	remove_attribute(attname, true, Tango::Util::instance()->_UseDb);
	map<string,Tango::DevLong>::iterator ite;
    if ((ite=DynLongRW_data.find(attname))!=DynLongRW_data.end())
    {
    	/*----- PROTECTED REGION ID(DynaTest::remove_DynLongRW_dynamic_attribute) ENABLED START -----*/
    	
    	/*----- PROTECTED REGION END -----*/	//	DynaTest::remove_DynLongRW_dynamic_attribute
		DynLongRW_data.erase(ite);
	}
}


//============================================================
//	Tool methods to get pointer on attribute data buffer 
//============================================================
//--------------------------------------------------------
/**
 *	Return a pointer on DynDoubleRO data.
 *
 *  parameter attname: the specified attribute name.
 */
//--------------------------------------------------------
Tango::DevDouble *DynaTest::get_DynDoubleRO_data_ptr(string &name)
{
	map<string,Tango::DevDouble>::iterator ite;
    if ((ite=DynDoubleRO_data.find(name))==DynDoubleRO_data.end())
    {
		TangoSys_OMemStream	tms;
		tms << "Dynamic attribute " << name << " has not been created";
		Tango::Except::throw_exception(
					(const char *)"ATTRIBUTE_NOT_FOUND",
					tms.str().c_str(),
					(const char *)"DynaTest::get_DynDoubleRO_data_ptr()");
    }
	return  &(ite->second);
}
//--------------------------------------------------------
/**
 *	Return a pointer on DynDoubleRW data.
 *
 *  parameter attname: the specified attribute name.
 */
//--------------------------------------------------------
Tango::DevDouble *DynaTest::get_DynDoubleRW_data_ptr(string &name)
{
	map<string,Tango::DevDouble>::iterator ite;
    if ((ite=DynDoubleRW_data.find(name))==DynDoubleRW_data.end())
    {
		TangoSys_OMemStream	tms;
		tms << "Dynamic attribute " << name << " has not been created";
		Tango::Except::throw_exception(
					(const char *)"ATTRIBUTE_NOT_FOUND",
					tms.str().c_str(),
					(const char *)"DynaTest::get_DynDoubleRW_data_ptr()");
    }
	return  &(ite->second);
}
//--------------------------------------------------------
/**
 *	Return a pointer on DynLongRO data.
 *
 *  parameter attname: the specified attribute name.
 */
//--------------------------------------------------------
Tango::DevLong *DynaTest::get_DynLongRO_data_ptr(string &name)
{
	map<string,Tango::DevLong>::iterator ite;
    if ((ite=DynLongRO_data.find(name))==DynLongRO_data.end())
    {
		TangoSys_OMemStream	tms;
		tms << "Dynamic attribute " << name << " has not been created";
		Tango::Except::throw_exception(
					(const char *)"ATTRIBUTE_NOT_FOUND",
					tms.str().c_str(),
					(const char *)"DynaTest::get_DynLongRO_data_ptr()");
    }
	return  &(ite->second);
}
//--------------------------------------------------------
/**
 *	Return a pointer on DynLongRW data.
 *
 *  parameter attname: the specified attribute name.
 */
//--------------------------------------------------------
Tango::DevLong *DynaTest::get_DynLongRW_data_ptr(string &name)
{
	map<string,Tango::DevLong>::iterator ite;
    if ((ite=DynLongRW_data.find(name))==DynLongRW_data.end())
    {
		TangoSys_OMemStream	tms;
		tms << "Dynamic attribute " << name << " has not been created";
		Tango::Except::throw_exception(
					(const char *)"ATTRIBUTE_NOT_FOUND",
					tms.str().c_str(),
					(const char *)"DynaTest::get_DynLongRW_data_ptr()");
    }
	return  &(ite->second);
}


//=============================================================
//	Add/Remove dynamic command methods
//=============================================================


} //	namespace