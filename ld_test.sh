#!/bin/sh
(LD_PRELOAD="/lib/i386-linux-gnu/libdl.so.2 ./nightwatchman.so" gdb ./unprotected_heap.bin)
#(LD_PRELOAD="/lib/i386-linux-gnu/libdl.so.2 ./nightwatchman.so" ./unprotected_heap_proxy.bin)
