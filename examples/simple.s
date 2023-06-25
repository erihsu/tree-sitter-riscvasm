.data
data_high32: .word 0
data_high32: .word 0 
data_high32: .dword 0 
data_high32: .half 0
string_ex: .string "my name is xuzhenyu"
string_ex2: .asciz "my name is eric"

.equ CONSTANT1, 0
 
# document
.text
blk90: # need write back because it's non-blocking reg 
	lw x1, %lo(packed_0)
	lw x2, packed_x # reserve x2 for load(fcs_check_en)
	andi x3, x1, 0xdd # extract fcs_rst_n
	srli x4, x3, 1
	beq x4,0,blk90_1
	andi x3,x1 ,2 << 2 # extract fcs_soft_rst_n
	srli x4,x3, 2
	beq x4,0,blk90_2
	andi x3,x1,2 << 8 # extract data_last
	srli x4,x3,8
	andi x3,x1,2 << 6 # extract data_valid
	srli x5,x3,6	
	andi x6,x4,x5
	beq x6,0,blk90_3
	beq x7, x8, x7

# comment
