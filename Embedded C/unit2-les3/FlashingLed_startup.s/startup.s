
.section .vector

.word 0x20001000
.word _Resetprogram
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler


.section .text

_Resetprogram:
	bl main
	b .

.thumb_func

Vector_handler:
	b _Resetprogram