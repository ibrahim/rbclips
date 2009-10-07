#ifndef _RBGENERIC_H_
#define _RBGENERIC_H_

/* Function list */

//! Return string (CLIPS) reprezentation of given ID
const char const * rb_generic_clipstype_str(ID);

//! Check if given string is valid clips symbol (regexp based)
int cl_generic_check_clips_symbol(VALUE);

#endif // _RBGENERIC_H_
