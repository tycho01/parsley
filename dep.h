//#ifndef _json_tokener_h_
#define _json_tokener_h_
#include <stddef.h>
//#include "json_object.h"

enum json_tokener_error {
  json_tokener_success
};

enum json_tokener_state {
  json_tokener_state_eatws
};

struct json_tokener_srec
{
  enum json_tokener_state state, saved_state;
  //struct json_object *obj;
  //struct json_object *current;
  char *obj_field_name;
};

#define JSON_TOKENER_MAX_DEPTH 32

struct json_tokener
{
  char *str;
  struct printbuf *pb;
  int depth, is_double, st_pos, char_offset;
  ptrdiff_t err;
  unsigned int ucs_char;
  char quote_char;
  struct json_tokener_srec stack[JSON_TOKENER_MAX_DEPTH];
};

extern struct json_tokener* json_tokener_new(void);
//#endif
