#include "postgres.h"
#include "fmgr.h"

PG_MODULE_MAGIC;
PG_FUNCTION_INFO_V1(pg_extend);

#define DEMO_VERSION_STR 	"pg_extend 1.0"

Datum
demo(PG_FUNCTION_ARGS)
{
	PG_RETURN_TEXT_P(cstring_to_text(DEMO_VERSION_STR));
}


