/* 
   ============================================================================
   File        : svcs_c2sv_mapping.h
   Author      : Victor Besyakov
   Version     : 0.0
   Copyright (c) 2016 IC Verimeter. All rights reserved.  
   Licensed under the MIT License. 
   See LICENSE file in the project root for full license information.  
   Description : "C" to "SV" mapping utils
   System Verilog client server handshake (SVCS)
   ==============================================================================
*/

#ifndef SVCS_C2SV_MAPPING_H_
#define SVCS_C2SV_MAPPING_H_

#include  "svcs_client_server.h"

//-------------
//prototypes
//-------------

//Title: 4. Utilites: "C" to System Verilog mapping


/*
  
Section: Integer atom type

(start code)
shortint
int
longint
byte
integer 
time 
bit
reg,logic
(end)

*/
   
/*	 
  Section: Integer vector type
  
  (start code)
  bit[N:0]
  reg[N:0] or logic[N:0]
  logic[N:0]
  (end)

*/
   
   
/*
  Section: Non integer type IEEE 754
  
  (start code)
  shortreal
  real
  realtime
  (end)
  
*/

/*
  Section: Special types
  
  (start code)
  string
  string[N]
  chandle
  Enumeration
  (end)
  
*/
   
/*
  Section: Aggregate data types
  
  (start code)
  Unpacked structures
  Packed structures
  Unpacked union
  Packet  union
  Tagged unions
  (end)
*/
   
/*
  Section: Arrays
  
  (start code)
  Unpacked arrays
  Packed arrays
  fixed-size arrays
  dynamic arrays
  associative arrays
  queues
  Multidimensional arrays
  (end)
*/
   
/*
  Section: Type casting
  
     (start code)
     bit-stream
     (end)
*/
   
#endif

