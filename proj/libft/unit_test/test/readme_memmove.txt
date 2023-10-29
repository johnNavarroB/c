## memmove handles cases where the Source and Destination memory regions overlap

## Overlapping regions occurs when the Destination memory region partially 
## or fully covers the Source memory area, or vice versa
##
## in such cases, memcpy may lead to data corruption because copying from 
## end to end can overwrite data before it has been copied
