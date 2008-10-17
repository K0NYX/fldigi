#ifndef RIG_SUPPORT_H
#define RIG_SUPPORT_H

#include <FL/Fl_Double_Window.H>

#include <string>
#include <list>
#include <sstream>
#include <iostream>
#include <ctype.h>

#include "serial.h"

#if USE_HAMLIB
	#include "hamlib.h"
#endif

using namespace std;

extern Fl_Double_Window *rigcontrol;
extern string windowTitle;
extern Cserial rigio;

extern void initOptionMenus();
extern void setMode();
extern void setBW();
extern void selBW(int);
extern void selFreq(long int);
extern void clearList();
extern void updateSelect();
extern size_t addtoList(long val);
extern void buildlist();
extern int  movFreq();
extern int  qso_movFreq();
extern int	cb_qso_opMODE();
extern int  cb_qso_opBW();

extern void selectFreq();
extern void delFreq();
extern void addFreq();
extern void saveFreqList();

extern void qso_addFreq();
extern void qso_delFreq();
extern void qso_selectFreq();
extern void qso_clearList();

extern bool readRigXML();
extern bool init_Xml_RigDialog();
extern bool init_NoRig_RigDialog();

#if USE_HAMLIB
extern bool init_Hamlib_RigDialog();
extern void selMode(rmode_t m);
#endif

extern Fl_Double_Window * createRigDialog();

#endif
