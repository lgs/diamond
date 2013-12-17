static const char *const multilib_raw[] = {
". !m64 !m32;",
".:../lib64 m64 !m32;",
".:../lib !m64 m32;",
NULL
};

static const char *const multilib_matches_raw[] = {
"m64 m64;",
"m32 m32;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "m64/m32";

#define DISABLE_MULTILIB  1
