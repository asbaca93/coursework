
#
# Global data (x1, x2, and x3)
#
    .data
    .comm x1,1
    .global x1
    .comm x2,1
    .global x2
    .comm x3,1
    .global x3

#
# Program code (addition function)
#
    .text
    .global addition
addition:
    lds  r18, x1
    lds  r19, x2
    lds  r20, x3
    ldi  r21, -1
    add  r18, r21
    ldi  r21, -2
    add  r19, r21
    add  r18, r19
    add  r18, r19
    add  r18, r19
    ldi  r21, -3
    add  r20, r21
    add  r18, r20
    sts  x3,  r18
testf:
      ldi    r17, 0x20
      out    0x04, r17
      ldi    r16, 50
all:  ldi    r17, 0x20
      out    0x05, r17
      ldi    r18, 0xff
dl1:  ldi    r19, 0xff
    ret
