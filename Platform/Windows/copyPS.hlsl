#include "vsoutput.h"

float4 main(v2p input) : SV_TARGET
{
	return input.color;
}
