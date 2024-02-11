#pragma once // NOLINT(*once-outside-header)

#if defined( __INTELLISENSE__ )
#define DISABLE_INTELLISENSE _Pragma( "diag_suppress 20, 221" );
#define ENABLE_INTELLISENSE  _Pragma( "diag_default  20, 221" );
#else
#define DISABLE_INTELLISENSE // NOLINT(*unused-macros)
#define ENABLE_INTELLISENSE  // NOLINT(*unused-macros)
#endif
