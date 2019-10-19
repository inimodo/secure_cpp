#include"s_header.h"

char C_TXT_PREFIX[_MKSS_KEYS] = ":";

char C_TXT_IN[_MKSS_KEYS] = "~";
char C_TXT_KNOWN = '_';
char C_TXT_SPACER = '-';
char C_TXT_ENDL = '\0';
char C_FILE[] = "cfile.key";

char C_MKSS_K_UNKNOW[_MKSS_MSGSIZE] = "REGISTER ERROR\n";


char C_MKSS_K_LOCK[_MKSS_REGFUNCTIONSIZE] = "break";
char C_MKSS_K_LOCK_FAILED[_MKSS_MSGSIZE] = "ALREADY LOCKED\n";
char C_MKSS_K_LOCK_GOOD[_MKSS_MSGSIZE] = "SYSTEM LOCKED \n";

char C_MKSS_LOGIN[_MKSS_REGFUNCTIONSIZE] = "login";
char C_MKSS_LOGIN_FAILED[_MKSS_MSGSIZE] = "INVALID KEY   \n" ;
char C_MKSS_LOGIN_GOOD[_MKSS_MSGSIZE] = "VALID LOGIN   \n";

char C_MKSS_K_LTTRY[_MKSS_REGFUNCTIONSIZE] = "lttry";
char C_MKSS_K_LTTRY_FAILED[_MKSS_MSGSIZE] = "NO WATCHER    \n";
char C_MKSS_K_LTTRY_GOOD[_MKSS_MSGSIZE] = "VALID REQUEST \n";

char C_MKSS_K_WATCH[_MKSS_REGFUNCTIONSIZE] = "watch";
char C_MKSS_K_WATCH_FAILED[_MKSS_MSGSIZE] = "WATCHER ONLINE\n";
char C_MKSS_K_WATCH_GOOD[_MKSS_MSGSIZE] = "WATCHER VALID \n";

