#include"s_header.h"

char C_TXT_PREFIX = 175;
char C_TXT_IN = 36;

char C_TXT_BREAK [_MKSS_KEYS] = "\n";
char C_TXT_ENDL = '\0';
char C_TXT_NEWL = '\n';
char C_FILE[] = "cfile.key";

char C_MKSS_K_UNKNOW[_MKSS_MSGSIZE] = "REGISTER NOT FOUND";
char C_MKSS_K_PERM[_MKSS_MSGSIZE] = "INVALID PERMSSION";


char C_MKSS_K_LOCK[_MKSS_REGFUNCTIONSIZE] = "break";
char C_MKSS_K_LOCK_FAILED[_MKSS_MSGSIZE] = "ALREADY LOCKED";
char C_MKSS_K_LOCK_GOOD[_MKSS_MSGSIZE] = "SYSTEM LOCKED";


char C_MKSS_K_LOGIN[_MKSS_REGFUNCTIONSIZE] = "login";
char C_MKSS_K_LOGIN_FAILED[_MKSS_MSGSIZE] = "INVALID KEY" ;
char C_MKSS_K_LOGIN_GOOD[_MKSS_MSGSIZE] = "VALID LOGIN";

char C_MKSS_K_LOGIN_CN [_MKSS_MSGSIZE] = "Cn_K: ";
char C_MKSS_K_LOGIN_HIDER = '*';


char C_MKSS_K_LTTRY[_MKSS_REGFUNCTIONSIZE] = "lttry";
char C_MKSS_K_LTTRY_FAILED[_MKSS_MSGSIZE] = "INVALID PERMSSION";
char C_MKSS_K_LTTRY_GOOD[_MKSS_MSGSIZE] = "VALID REQUEST";

char C_MKSS_K_WATCH[_MKSS_REGFUNCTIONSIZE] = "watch";
char C_MKSS_K_WATCH_FAILED[_MKSS_MSGSIZE] = "INVALID PERMSSION \n";
char C_MKSS_K_WATCH_GOOD[_MKSS_MSGSIZE] = "WATCHER VALID     \n";

