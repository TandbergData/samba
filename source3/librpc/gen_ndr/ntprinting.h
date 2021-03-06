/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_ntprinting
#define _PIDL_HEADER_ntprinting

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#ifndef _HEADER_ntprinting
#define _HEADER_ntprinting

struct ntprinting_form {
	uint32_t position;
	uint32_t flag;
	uint32_t width;
	uint32_t length;
	uint32_t left;
	uint32_t top;
	uint32_t right;
	uint32_t bottom;
}/* [public,flag(LIBNDR_FLAG_NOALIGN)] */;

struct ntprinting_driver {
	uint32_t version;
	const char * name;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * environment;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * driverpath;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * datafile;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * configfile;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * helpfile;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * monitorname;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * defaultdatatype;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char ** dependent_files;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NOTERM|LIBNDR_FLAG_REMAINING)] */
}/* [public,flag(LIBNDR_FLAG_NOALIGN)] */;

struct ntprinting_devicemode {
	const char * devicename;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * formname;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	uint16_t specversion;
	uint16_t driverversion;
	uint16_t size;
	uint16_t driverextra;
	uint16_t orientation;
	uint16_t papersize;
	uint16_t paperlength;
	uint16_t paperwidth;
	uint16_t scale;
	uint16_t copies;
	uint16_t defaultsource;
	uint16_t printquality;
	uint16_t color;
	uint16_t duplex;
	uint16_t yresolution;
	uint16_t ttoption;
	uint16_t collate;
	uint16_t logpixels;
	uint32_t fields;
	uint32_t bitsperpel;
	uint32_t pelswidth;
	uint32_t pelsheight;
	uint32_t displayflags;
	uint32_t displayfrequency;
	uint32_t icmmethod;
	uint32_t icmintent;
	uint32_t mediatype;
	uint32_t dithertype;
	uint32_t reserved1;
	uint32_t reserved2;
	uint32_t panningwidth;
	uint32_t panningheight;
	DATA_BLOB *nt_dev_private;/* [unique] */
}/* [public,flag(LIBNDR_FLAG_NOALIGN)] */;

struct ntprinting_printer_data {
	uint32_t ptr;
	const char * name;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	uint32_t type;
	DATA_BLOB data;
}/* [public,flag(LIBNDR_FLAG_NOALIGN)] */;

struct ntprinting_printer_info {
	uint32_t attributes;
	uint32_t priority;
	uint32_t default_priority;
	uint32_t starttime;
	uint32_t untiltime;
	uint32_t status;
	uint32_t cjobs;
	uint32_t averageppm;
	uint32_t changeid;
	uint32_t c_setprinter;
	uint32_t setuptime;
	const char * servername;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * printername;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * sharename;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * portname;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * drivername;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * comment;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * location;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * sepfile;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * printprocessor;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * datatype;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * parameters;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
}/* [public,flag(LIBNDR_FLAG_NOALIGN)] */;

struct ntprinting_printer {
	struct ntprinting_printer_info info;
	struct ntprinting_devicemode *devmode;/* [unique] */
	uint32_t count;
	struct ntprinting_printer_data *printer_data;
}/* [public,nopull,flag(LIBNDR_FLAG_NOALIGN)] */;


struct decode_ntprinting_form {
	struct {
		struct ntprinting_form form;
	} in;

};


struct decode_ntprinting_driver {
	struct {
		struct ntprinting_driver driver;
	} in;

};


struct decode_ntprinting_printer {
	struct {
		struct ntprinting_printer printer;
	} in;

};

#endif /* _HEADER_ntprinting */
#endif /* _PIDL_HEADER_ntprinting */
