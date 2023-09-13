#ifndef NVIM_HIGHLIGHT_GROUP_H
#define NVIM_HIGHLIGHT_GROUP_H

#include "nvim/types.h"
#include "nvim/eval.h"

#define MAX_HL_ID 20000   // maximum value for a highlight ID.

typedef struct {
  char *name;
  RgbValue color;
} color_name_table_T;
extern color_name_table_T color_name_table[];

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "highlight_group.h.generated.h"
#endif

#endif  // NVIM_HIGHLIGHT_GROUP_H
