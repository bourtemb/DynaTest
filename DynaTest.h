/*----- PROTECTED REGION ID(DynaTest.h) ENABLED START -----*/
//=============================================================================
//
// file :        DynaTest.h
//
// description : Include file for the DynaTest class
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


#ifndef DynaTest_H
#define DynaTest_H

#include <tango/tango.h>


/*----- PROTECTED REGION END -----*/	//	DynaTest.h

#ifdef TANGO_LOG
	// cppTango after c934adea (Merge branch 'remove-cout-definition' into 'main', 2022-05-23)
	// nothing to do
#else
	// cppTango 9.3-backports and older
	#define TANGO_LOG       cout
	#define TANGO_LOG_INFO  cout2
	#define TANGO_LOG_DEBUG cout3
#endif // TANGO_LOG

/**
 *  DynaTest class description:
 *    Test Class to test dynamic attributes limitations
 */


namespace DynaTest_ns
{
/*----- PROTECTED REGION ID(DynaTest::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	DynaTest::Additional Class Declarations

class DynaTest : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(DynaTest::Data Members) ENABLED START -----*/

//	Add your own data members

/*----- PROTECTED REGION END -----*/	//	DynaTest::Data Members

//	Device property data members
public:
	//	DynDoubleROAttrNames:	List of names of Double Read Only Attributes to create
	std::vector<std::string>	dynDoubleROAttrNames;
	//	DynDoubleRWAttrNames:	List of names of Double Read/Write Attributes to create
	std::vector<std::string>	dynDoubleRWAttrNames;
	//	DynLongRWAttrNames:	List of names of Long Read/Write Attributes to create
	std::vector<std::string>	dynLongRWAttrNames;
	//	DynLongROAttrNames:	List of names of Long Read Only Attributes to create
	std::vector<std::string>	dynLongROAttrNames;


//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	DynaTest(Tango::DeviceClass *cl,std::string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	DynaTest(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	DynaTest(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~DynaTest();


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method     : DynaTest::read_attr_hardware()
	 *	Description: Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(std::vector<long> &attr_list);

//	Dynamic attribute methods
public:

	/**
	 *	Attribute DynDoubleRO related methods
	 *
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Scalar
	 */
	virtual void read_DynDoubleRO(Tango::Attribute &attr);
	virtual bool is_DynDoubleRO_allowed(Tango::AttReqType type);
	void add_DynDoubleRO_dynamic_attribute(std::string attname);
	void remove_DynDoubleRO_dynamic_attribute(std::string attname);
	Tango::DevDouble *get_DynDoubleRO_data_ptr(std::string &name);
	std::map<std::string,Tango::DevDouble>	   DynDoubleRO_data;

	/**
	 *	Attribute DynDoubleRW related methods
	 *
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Scalar
	 */
	virtual void read_DynDoubleRW(Tango::Attribute &attr);
	virtual void write_DynDoubleRW(Tango::WAttribute &attr);
	virtual bool is_DynDoubleRW_allowed(Tango::AttReqType type);
	void add_DynDoubleRW_dynamic_attribute(std::string attname);
	void remove_DynDoubleRW_dynamic_attribute(std::string attname);
	Tango::DevDouble *get_DynDoubleRW_data_ptr(std::string &name);
	std::map<std::string,Tango::DevDouble>	   DynDoubleRW_data;

	/**
	 *	Attribute DynLongRO related methods
	 *
	 *
	 *	Data type:	Tango::DevLong
	 *	Attr type:	Scalar
	 */
	virtual void read_DynLongRO(Tango::Attribute &attr);
	virtual bool is_DynLongRO_allowed(Tango::AttReqType type);
	void add_DynLongRO_dynamic_attribute(std::string attname);
	void remove_DynLongRO_dynamic_attribute(std::string attname);
	Tango::DevLong *get_DynLongRO_data_ptr(std::string &name);
	std::map<std::string,Tango::DevLong>	   DynLongRO_data;

	/**
	 *	Attribute DynLongRW related methods
	 *
	 *
	 *	Data type:	Tango::DevLong
	 *	Attr type:	Scalar
	 */
	virtual void read_DynLongRW(Tango::Attribute &attr);
	virtual void write_DynLongRW(Tango::WAttribute &attr);
	virtual bool is_DynLongRW_allowed(Tango::AttReqType type);
	void add_DynLongRW_dynamic_attribute(std::string attname);
	void remove_DynLongRW_dynamic_attribute(std::string attname);
	Tango::DevLong *get_DynLongRW_data_ptr(std::string &name);
	std::map<std::string,Tango::DevLong>	   DynLongRW_data;

	//--------------------------------------------------------
	/**
	 *	Method     : DynaTest::add_dynamic_attributes()
	 *	Description: Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:


	//--------------------------------------------------------
	/**
	 *	Method     : DynaTest::add_dynamic_commands()
	 *	Description: Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(DynaTest::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	DynaTest::Additional Method prototypes
};

/*----- PROTECTED REGION ID(DynaTest::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	DynaTest::Additional Classes Definitions

}	//	End of namespace

#endif   //	DynaTest_H
