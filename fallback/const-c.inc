#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_25 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     WURFL_CACHE_PROVIDER_NONE WURFL_MATCH_TYPE_CATCHALL
     WURFL_MATCH_TYPE_RECOVERY */
  /* Offset 23 gives the best switch position.  */
  switch (name[23]) {
  case 'L':
    if (memEQ(name, "WURFL_MATCH_TYPE_CATCHALL", 25)) {
    /*                                      ^        */
      *iv_return = WURFL_MATCH_TYPE_CATCHALL;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "WURFL_CACHE_PROVIDER_NONE", 25)) {
    /*                                      ^        */
      *iv_return = WURFL_CACHE_PROVIDER_NONE;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "WURFL_MATCH_TYPE_RECOVERY", 25)) {
    /*                                      ^        */
      *iv_return = WURFL_MATCH_TYPE_RECOVERY;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_32 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     WURFL_ERROR_CAPABILITY_NOT_FOUND WURFL_ERROR_INPUT_OUTPUT_FAILURE
     WURFL_MATCH_TYPE_HIGHPERFORMANCE */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case 'I':
    if (memEQ(name, "WURFL_MATCH_TYPE_HIGHPERFORMANCE", 32)) {
    /*                                 ^                    */
      *iv_return = WURFL_MATCH_TYPE_HIGHPERFORMANCE;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "WURFL_ERROR_CAPABILITY_NOT_FOUND", 32)) {
    /*                                 ^                    */
      *iv_return = WURFL_ERROR_CAPABILITY_NOT_FOUND;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "WURFL_ERROR_INPUT_OUTPUT_FAILURE", 32)) {
    /*                                 ^                    */
      *iv_return = WURFL_ERROR_INPUT_OUTPUT_FAILURE;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/local/booking-perl/5.14.2/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(LIBWURFLAPI),
            {name=>"WURFL_CACHE_PROVIDER_DOUBLE_LRU", type=>"IV", macro=>"1"},
            {name=>"WURFL_CACHE_PROVIDER_LRU", type=>"IV", macro=>"1"},
            {name=>"WURFL_CACHE_PROVIDER_NONE", type=>"IV", macro=>"1"},
            {name=>"WURFL_ENGINE_TARGET_HIGH_ACCURACY", type=>"IV", macro=>"1"},
            {name=>"WURFL_ENGINE_TARGET_HIGH_PERFORMANCE", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_ALREADY_LOAD", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_CANT_LOAD_CAPABILITY_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_CANT_LOAD_VIRTUAL_CAPABILITY_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_CAPABILITY_GROUP_MISMATCH", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_CAPABILITY_GROUP_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_CAPABILITY_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_DEVICE_ALREADY_DEFINED", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_DEVICE_HIERARCHY_CIRCULAR_REFERENCE", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_DEVICE_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_EMPTY_ID", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_FILE_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_INPUT_OUTPUT_FAILURE", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_INVALID_CAPABILITY_VALUE", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_INVALID_HANDLE", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_INVALID_PARAMETER", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_UNEXPECTED_END_OF_FILE", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_UNKNOWN", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_USERAGENT_ALREADY_DEFINED", type=>"IV", macro=>"1"},
            {name=>"WURFL_ERROR_VIRTUAL_CAPABILITY_NOT_FOUND", type=>"IV", macro=>"1"},
            {name=>"WURFL_MATCH_TYPE_CACHED", type=>"IV", macro=>"1"},
            {name=>"WURFL_MATCH_TYPE_CATCHALL", type=>"IV", macro=>"1"},
            {name=>"WURFL_MATCH_TYPE_CONCLUSIVE", type=>"IV", macro=>"1"},
            {name=>"WURFL_MATCH_TYPE_EXACT", type=>"IV", macro=>"1"},
            {name=>"WURFL_MATCH_TYPE_HIGHPERFORMANCE", type=>"IV", macro=>"1"},
            {name=>"WURFL_MATCH_TYPE_NONE", type=>"IV", macro=>"1"},
            {name=>"WURFL_MATCH_TYPE_RECOVERY", type=>"IV", macro=>"1"},
            {name=>"WURFL_OK", type=>"IV", macro=>"1"});

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Wurfl", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Wurfl", $types);
__END__
   */

  switch (len) {
  case 8:
    if (memEQ(name, "WURFL_OK", 8)) {
      *iv_return = WURFL_OK;
      return PERL_constant_ISIV;
    }
    break;
  case 11:
    if (memEQ(name, "LIBWURFLAPI", 11)) {
#ifdef LIBWURFLAPI
      *iv_return = LIBWURFLAPI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 19:
    if (memEQ(name, "WURFL_ERROR_UNKNOWN", 19)) {
      *iv_return = WURFL_ERROR_UNKNOWN;
      return PERL_constant_ISIV;
    }
    break;
  case 20:
    if (memEQ(name, "WURFL_ERROR_EMPTY_ID", 20)) {
      *iv_return = WURFL_ERROR_EMPTY_ID;
      return PERL_constant_ISIV;
    }
    break;
  case 21:
    if (memEQ(name, "WURFL_MATCH_TYPE_NONE", 21)) {
      *iv_return = WURFL_MATCH_TYPE_NONE;
      return PERL_constant_ISIV;
    }
    break;
  case 22:
    if (memEQ(name, "WURFL_MATCH_TYPE_EXACT", 22)) {
      *iv_return = WURFL_MATCH_TYPE_EXACT;
      return PERL_constant_ISIV;
    }
    break;
  case 23:
    if (memEQ(name, "WURFL_MATCH_TYPE_CACHED", 23)) {
      *iv_return = WURFL_MATCH_TYPE_CACHED;
      return PERL_constant_ISIV;
    }
    break;
  case 24:
    /* Names all of length 24.  */
    /* WURFL_CACHE_PROVIDER_LRU WURFL_ERROR_ALREADY_LOAD */
    /* Offset 6 gives the best switch position.  */
    switch (name[6]) {
    case 'C':
      if (memEQ(name, "WURFL_CACHE_PROVIDER_LRU", 24)) {
      /*                     ^                        */
        *iv_return = WURFL_CACHE_PROVIDER_LRU;
        return PERL_constant_ISIV;
      }
      break;
    case 'E':
      if (memEQ(name, "WURFL_ERROR_ALREADY_LOAD", 24)) {
      /*                     ^                        */
        *iv_return = WURFL_ERROR_ALREADY_LOAD;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 25:
    return constant_25 (aTHX_ name, iv_return);
    break;
  case 26:
    /* Names all of length 26.  */
    /* WURFL_ERROR_FILE_NOT_FOUND WURFL_ERROR_INVALID_HANDLE */
    /* Offset 25 gives the best switch position.  */
    switch (name[25]) {
    case 'D':
      if (memEQ(name, "WURFL_ERROR_FILE_NOT_FOUN", 25)) {
      /*                                        D      */
        *iv_return = WURFL_ERROR_FILE_NOT_FOUND;
        return PERL_constant_ISIV;
      }
      break;
    case 'E':
      if (memEQ(name, "WURFL_ERROR_INVALID_HANDL", 25)) {
      /*                                        E      */
        *iv_return = WURFL_ERROR_INVALID_HANDLE;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 27:
    if (memEQ(name, "WURFL_MATCH_TYPE_CONCLUSIVE", 27)) {
      *iv_return = WURFL_MATCH_TYPE_CONCLUSIVE;
      return PERL_constant_ISIV;
    }
    break;
  case 28:
    if (memEQ(name, "WURFL_ERROR_DEVICE_NOT_FOUND", 28)) {
      *iv_return = WURFL_ERROR_DEVICE_NOT_FOUND;
      return PERL_constant_ISIV;
    }
    break;
  case 29:
    if (memEQ(name, "WURFL_ERROR_INVALID_PARAMETER", 29)) {
      *iv_return = WURFL_ERROR_INVALID_PARAMETER;
      return PERL_constant_ISIV;
    }
    break;
  case 31:
    if (memEQ(name, "WURFL_CACHE_PROVIDER_DOUBLE_LRU", 31)) {
      *iv_return = WURFL_CACHE_PROVIDER_DOUBLE_LRU;
      return PERL_constant_ISIV;
    }
    break;
  case 32:
    return constant_32 (aTHX_ name, iv_return);
    break;
  case 33:
    if (memEQ(name, "WURFL_ENGINE_TARGET_HIGH_ACCURACY", 33)) {
      *iv_return = WURFL_ENGINE_TARGET_HIGH_ACCURACY;
      return PERL_constant_ISIV;
    }
    break;
  case 34:
    /* Names all of length 34.  */
    /* WURFL_ERROR_DEVICE_ALREADY_DEFINED WURFL_ERROR_UNEXPECTED_END_OF_FILE */
    /* Offset 33 gives the best switch position.  */
    switch (name[33]) {
    case 'D':
      if (memEQ(name, "WURFL_ERROR_DEVICE_ALREADY_DEFINE", 33)) {
      /*                                                D      */
        *iv_return = WURFL_ERROR_DEVICE_ALREADY_DEFINED;
        return PERL_constant_ISIV;
      }
      break;
    case 'E':
      if (memEQ(name, "WURFL_ERROR_UNEXPECTED_END_OF_FIL", 33)) {
      /*                                                E      */
        *iv_return = WURFL_ERROR_UNEXPECTED_END_OF_FILE;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 36:
    /* Names all of length 36.  */
    /* WURFL_ENGINE_TARGET_HIGH_PERFORMANCE
       WURFL_ERROR_INVALID_CAPABILITY_VALUE */
    /* Offset 33 gives the best switch position.  */
    switch (name[33]) {
    case 'L':
      if (memEQ(name, "WURFL_ERROR_INVALID_CAPABILITY_VALUE", 36)) {
      /*                                                ^         */
        *iv_return = WURFL_ERROR_INVALID_CAPABILITY_VALUE;
        return PERL_constant_ISIV;
      }
      break;
    case 'N':
      if (memEQ(name, "WURFL_ENGINE_TARGET_HIGH_PERFORMANCE", 36)) {
      /*                                                ^         */
        *iv_return = WURFL_ENGINE_TARGET_HIGH_PERFORMANCE;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 37:
    /* Names all of length 37.  */
    /* WURFL_ERROR_CAPABILITY_GROUP_MISMATCH
       WURFL_ERROR_USERAGENT_ALREADY_DEFINED */
    /* Offset 16 gives the best switch position.  */
    switch (name[16]) {
    case 'A':
      if (memEQ(name, "WURFL_ERROR_USERAGENT_ALREADY_DEFINED", 37)) {
      /*                               ^                           */
        *iv_return = WURFL_ERROR_USERAGENT_ALREADY_DEFINED;
        return PERL_constant_ISIV;
      }
      break;
    case 'B':
      if (memEQ(name, "WURFL_ERROR_CAPABILITY_GROUP_MISMATCH", 37)) {
      /*                               ^                           */
        *iv_return = WURFL_ERROR_CAPABILITY_GROUP_MISMATCH;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 38:
    if (memEQ(name, "WURFL_ERROR_CAPABILITY_GROUP_NOT_FOUND", 38)) {
      *iv_return = WURFL_ERROR_CAPABILITY_GROUP_NOT_FOUND;
      return PERL_constant_ISIV;
    }
    break;
  case 40:
    if (memEQ(name, "WURFL_ERROR_VIRTUAL_CAPABILITY_NOT_FOUND", 40)) {
      *iv_return = WURFL_ERROR_VIRTUAL_CAPABILITY_NOT_FOUND;
      return PERL_constant_ISIV;
    }
    break;
  case 42:
    if (memEQ(name, "WURFL_ERROR_CANT_LOAD_CAPABILITY_NOT_FOUND", 42)) {
      *iv_return = WURFL_ERROR_CANT_LOAD_CAPABILITY_NOT_FOUND;
      return PERL_constant_ISIV;
    }
    break;
  case 47:
    if (memEQ(name, "WURFL_ERROR_DEVICE_HIERARCHY_CIRCULAR_REFERENCE", 47)) {
      *iv_return = WURFL_ERROR_DEVICE_HIERARCHY_CIRCULAR_REFERENCE;
      return PERL_constant_ISIV;
    }
    break;
  case 50:
    if (memEQ(name, "WURFL_ERROR_CANT_LOAD_VIRTUAL_CAPABILITY_NOT_FOUND", 50)) {
      *iv_return = WURFL_ERROR_CANT_LOAD_VIRTUAL_CAPABILITY_NOT_FOUND;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

