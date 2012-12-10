enum session_states {
	SESSION_ST_NONE = 0,
	SESSION_ST_SENT_CMD,
	SESSION_ST_CONNECTING,
	SESSION_ST_CONNECTED,
	SESSION_ST_AWAIT_220,

	SESSION_ST_TLS_START,
	SESSION_ST_TLS_PHASE_TLS,
	SESSION_ST_TLS_PHASE_SSL,
	SESSION_ST_TLS_INIT,
	SESSION_ST_TLS_WAIT,
	
	SESSION_ST_LOGIN_START,        // 10
	SESSION_ST_LOGIN_SENT_USER,
	SESSION_ST_LOGIN_SENT_PASS,

	SESSION_ST_REPLY_PBSZ,

	SESSION_ST_MISC,
	SESSION_ST_MISC_REPLY_SYST,
	SESSION_ST_MISC_REPLY_CLNT,
	SESSION_ST_MISC_REPLY_FEAT,

	SESSION_ST_MISC_REPLY_XDUPE,

	SESSION_ST_TYPE_REPLY,
	SESSION_ST_PROT_REPLY,         // 20
	SESSION_ST_PRET_REPLY,
	SESSION_ST_PASV_REPLY,
	SESSION_ST_PORT_REPLY,         

	SESSION_ST_DATA_TRANSFER,
	SESSION_ST_DATA_FINISH,


	SESSION_ST_IDLE,

	SESSION_ST_RELAY_TYPE_ASCII,
	SESSION_ST_RELAY_TYPE_BINARY,

	SESSION_ST_RELAY_CCSN_OFF,
	SESSION_ST_RELAY_CCSN_ON,     // 30

	SESSION_ST_RELAY_SSCN_OFF,
	SESSION_ST_RELAY_SSCN_ON,

	SESSION_ST_RELAY_PRIVACY_OFF, 
	SESSION_ST_RELAY_PRIVACY_ON,

	SESSION_ST_RELAY_CWD,
	SESSION_ST_RELAY_SIZE,
	SESSION_ST_RELAY_REST_ON,
	SESSION_ST_RELAY_REST_OFF,

	SESSION_ST_RELAY_STOR,
	SESSION_ST_RELAY_RETR,       // 40
	SESSION_ST_RELAY_226,

	SESSION_ST_PWD_INTERNAL,

	SESSION_ST_TEST
};

typedef enum session_states session_state_t;
