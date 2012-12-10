// $Id: handler.h,v 1.9 2010/10/12 02:36:32 lundman Exp $
//
// Jorgen Lundman 16th April 2004.

#ifndef HANDLER_H_INCLUDED
#define HANDLER_H_INCLUDED

#include "session.h"

// Defines.

enum handler_reply_type {
	HANDLER_DIRLIST_SENDTO_USER=1000,
	HANDLER_QUOTE_REPLY,
	HANDLER_CWD_REPLY,
	HANDLER_PWD_REPLY,
	HANDLER_PWD_REPLY_INTERNAL,
	HANDLER_SIZE_REPLY,
	HANDLER_DELE_REPLY,
	HANDLER_MKD_REPLY,
	HANDLER_RMD_REPLY,
	HANDLER_SITE_REPLY,
	HANDLER_RNFR_REPLY,                // 10
	HANDLER_RNTO_REPLY,
	HANDLER_MDTM_REPLY,

	QUEUE_EVENT_PHASE_1_SRC_CWD,
	QUEUE_EVENT_PHASE_1_DST_CWD,
	QUEUE_EVENT_PHASE_1_DST_MKD,
	QUEUE_EVENT_PHASE_1_DST_CWD2,

	QUEUE_EVENT_PHASE_2_SRC_SECURE,
	QUEUE_EVENT_PHASE_2_DST_SECURE,
	QUEUE_EVENT_PHASE_2_DISABLE,

	QUEUE_EVENT_PHASE_3_SRC_PROT,      // 20
	QUEUE_EVENT_PHASE_3_DST_PROT,

	QUEUE_EVENT_PHASE_4_TYPE,

	QUEUE_EVENT_PHASE_5_SRC_SIZE,
	QUEUE_EVENT_PHASE_5_DST_SIZE,

	QUEUE_EVENT_PHASE_6_PRET,

	QUEUE_EVENT_PHASE_7_PASV,

	QUEUE_EVENT_PHASE_8_PORT,

	QUEUE_EVENT_PHASE_9_SRC_REST,
	QUEUE_EVENT_PHASE_9_DST_REST,
	QUEUE_EVENT_PHASE_9_SRC_REST2,     // 30
	QUEUE_EVENT_PHASE_9_DST_REST2,

	QUEUE_EVENT_PHASE_10_STOR,

	QUEUE_EVENT_PHASE_11_RETR,
	QUEUE_EVENT_PHASE_11_ABOR,

	QUEUE_EVENT_PHASE_12_SRC_226,
	QUEUE_EVENT_PHASE_12_DST_226,
	QUEUE_EVENT_PHASE_12_NOOP,


	QUEUE_EVENT_DIRECTORY_PHASE_1_SRC_CWD,
	QUEUE_EVENT_DIRECTORY_PHASE_1_DST_CWD,
	QUEUE_EVENT_DIRECTORY_PHASE_2_SRC_DIRLIST,  //40
	QUEUE_EVENT_DIRECTORY_PHASE_2_DST_DIRLIST,
    QUEUE_EVENT_DIRECTORY_PHASE_2_DST_MKD,

};


//#define HANDLER_DIRLIST_SENDTO_USER 1000
//#define HANDLER_QUOTE_REPLY 1001
//#define HANDLER_CWD_REPLY 1002



// Variables







// Functions

void handler_withuser( session_t *session, int event, int id, int reply,
					   char *line);
void handler_queue   ( session_t *session, int event, int id, int reply,
					   char *line);


void handler_pwd_reply( lion_t *, manager_t *, int, char * );



#endif