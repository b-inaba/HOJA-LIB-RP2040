#ifndef HOJA_JOYBUS_GC_HAL_H
#define HOJA_JOYBUS_GC_HAL_H

#include <stdbool.h>

// GameCube joybus transport HAL.
// Entry points (transport_jbgc_init / transport_jbgc_task) are declared in
// transport/transport_joybusgc.h. The PIO instance + data pin are supplied by
// the board via hoja_config_s.joybus, shared with the N64 joybus HAL
// (only one is ever active at a time on the same physical line).

// Temporary listener with neutral responses, used before a host is selected.
// Start/stop must run on the same core (which owns the PIO interrupt).
bool joybus_gc_hal_probe_start(void);
bool joybus_gc_hal_probe_detected(void);
void joybus_gc_hal_probe_stop(void);

#endif
