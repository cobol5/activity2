TYPE regtype
     ax    AS INTEGER
     bx    AS INTEGER
     cx    AS INTEGER
     dx    AS INTEGER
     bp    AS INTEGER
     si    AS INTEGER
     di    AS INTEGER
     flags AS INTEGER
END TYPE

TYPE weeklyrecord
     wholerecord AS STRING * 148
END TYPE

TYPE agentdetails
     agentname AS STRING * 25
     agentnumber AS STRING * 7
END TYPE

DECLARE SUB INTERRUPT (intnum AS INTEGER, inreg AS regtype, outreg AS regtype)

COMMON SHARED option$(), detail$(), scr%()
COMMON SHARED al$, colour$, path$

DIM SHARED inreg AS regtype, outreg AS regtype
COMMON SHARED agentsinteam AS agentdetails
COMMON SHARED agentweek AS weeklyrecord

