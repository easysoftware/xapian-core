static const struct system_word vocab[82+1] = {
  { 0, (const byte *)"", 82+1},

  { 1, (const byte *)"$",             c_dollar },
  { 1, (const byte *)"(",             c_bra },
  { 1, (const byte *)")",             c_ket },
  { 1, (const byte *)"*",             c_multiply },
  { 1, (const byte *)"+",             c_plus },
  { 1, (const byte *)"-",             c_minus },
  { 1, (const byte *)"/",             c_divide },
  { 1, (const byte *)"<",             c_ls },
  { 1, (const byte *)"=",             c_assign },
  { 1, (const byte *)">",             c_gr },
  { 1, (const byte *)"?",             c_debug },
  { 1, (const byte *)"[",             c_leftslice },
  { 1, (const byte *)"]",             c_rightslice },
  { 2, (const byte *)"!=",            c_ne },
  { 2, (const byte *)"*=",            c_multiplyassign },
  { 2, (const byte *)"+=",            c_plusassign },
  { 2, (const byte *)"-=",            c_minusassign },
  { 2, (const byte *)"->",            c_sliceto },
  { 2, (const byte *)"/*",            c_comment2 },
  { 2, (const byte *)"//",            c_comment1 },
  { 2, (const byte *)"/=",            c_divideassign },
  { 2, (const byte *)"<+",            c_insert },
  { 2, (const byte *)"<-",            c_slicefrom },
  { 2, (const byte *)"<=",            c_le },
  { 2, (const byte *)"==",            c_eq },
  { 2, (const byte *)"=>",            c_assignto },
  { 2, (const byte *)">=",            c_ge },
  { 2, (const byte *)"as",            c_as },
  { 2, (const byte *)"do",            c_do },
  { 2, (const byte *)"or",            c_or },
  { 3, (const byte *)"and",           c_and },
  { 3, (const byte *)"for",           c_for },
  { 3, (const byte *)"get",           c_get },
  { 3, (const byte *)"hex",           c_hex },
  { 3, (const byte *)"hop",           c_hop },
  { 3, (const byte *)"len",           c_len },
  { 3, (const byte *)"non",           c_non },
  { 3, (const byte *)"not",           c_not },
  { 3, (const byte *)"set",           c_set },
  { 3, (const byte *)"try",           c_try },
  { 4, (const byte *)"fail",          c_fail },
  { 4, (const byte *)"goto",          c_goto },
  { 4, (const byte *)"loop",          c_loop },
  { 4, (const byte *)"next",          c_next },
  { 4, (const byte *)"size",          c_size },
  { 4, (const byte *)"test",          c_test },
  { 4, (const byte *)"true",          c_true },
  { 5, (const byte *)"among",         c_among },
  { 5, (const byte *)"false",         c_false },
  { 5, (const byte *)"lenof",         c_lenof },
  { 5, (const byte *)"limit",         c_limit },
  { 5, (const byte *)"unset",         c_unset },
  { 6, (const byte *)"atmark",        c_atmark },
  { 6, (const byte *)"attach",        c_attach },
  { 6, (const byte *)"cursor",        c_cursor },
  { 6, (const byte *)"define",        c_define },
  { 6, (const byte *)"delete",        c_delete },
  { 6, (const byte *)"gopast",        c_gopast },
  { 6, (const byte *)"insert",        c_insert },
  { 6, (const byte *)"maxint",        c_maxint },
  { 6, (const byte *)"minint",        c_minint },
  { 6, (const byte *)"repeat",        c_repeat },
  { 6, (const byte *)"sizeof",        c_sizeof },
  { 6, (const byte *)"tomark",        c_tomark },
  { 7, (const byte *)"atleast",       c_atleast },
  { 7, (const byte *)"atlimit",       c_atlimit },
  { 7, (const byte *)"decimal",       c_decimal },
  { 7, (const byte *)"reverse",       c_reverse },
  { 7, (const byte *)"setmark",       c_setmark },
  { 7, (const byte *)"strings",       c_strings },
  { 7, (const byte *)"tolimit",       c_tolimit },
  { 8, (const byte *)"booleans",      c_booleans },
  { 8, (const byte *)"integers",      c_integers },
  { 8, (const byte *)"routines",      c_routines },
  { 8, (const byte *)"setlimit",      c_setlimit },
  { 9, (const byte *)"backwards",     c_backwards },
  { 9, (const byte *)"externals",     c_externals },
  { 9, (const byte *)"groupings",     c_groupings },
  { 9, (const byte *)"stringdef",     c_stringdef },
  { 9, (const byte *)"substring",     c_substring },
 { 12, (const byte *)"backwardmode",  c_backwardmode },
 { 13, (const byte *)"stringescapes", c_stringescapes }
};
