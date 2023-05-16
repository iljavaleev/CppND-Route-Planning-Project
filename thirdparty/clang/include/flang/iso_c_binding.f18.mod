!mod$ v1 sum:64e7a57c2a1b63c6
module iso_c_binding
use __fortran_builtins,only:c_f_pointer=>__builtin_c_f_pointer
use __fortran_builtins,only:c_ptr=>__builtin_c_ptr
use __fortran_builtins,only:c_funptr=>__builtin_c_funptr
use __fortran_builtins,only:c_sizeof=>sizeof
use __fortran_builtins,only:c_loc=>__builtin_c_loc
type(c_ptr),parameter::c_null_ptr=c_ptr(__address=0_8)
type(c_funptr),parameter::c_null_funptr=c_funptr(__address=0_8)
integer(4),parameter::c_int8_t=1_4
integer(4),parameter::c_int16_t=2_4
integer(4),parameter::c_int32_t=4_4
integer(4),parameter::c_int64_t=8_4
integer(4),parameter::c_int128_t=16_4
integer(4),parameter::c_int=4_4
integer(4),parameter::c_short=2_4
integer(4),parameter::c_long=8_4
integer(4),parameter::c_long_long=8_4
integer(4),parameter::c_signed_char=1_4
integer(4),parameter::c_size_t=8_4
intrinsic::kind
integer(4),parameter::c_intmax_t=16_4
integer(4),parameter::c_intptr_t=8_4
integer(4),parameter::c_ptrdiff_t=8_4
integer(4),parameter::c_int_least8_t=1_4
integer(4),parameter::c_int_fast8_t=1_4
integer(4),parameter::c_int_least16_t=2_4
integer(4),parameter::c_int_fast16_t=2_4
integer(4),parameter::c_int_least32_t=4_4
integer(4),parameter::c_int_fast32_t=4_4
integer(4),parameter::c_int_least64_t=8_4
integer(4),parameter::c_int_fast64_t=8_4
integer(4),parameter::c_int_least128_t=16_4
integer(4),parameter::c_int_fast128_t=16_4
integer(4),parameter::c_float=4_4
integer(4),parameter::c_double=8_4
integer(4),parameter::c_long_double=16_4
integer(4),parameter::c_float_complex=4_4
integer(4),parameter::c_double_complex=8_4
integer(4),parameter::c_long_double_complex=16_4
integer(4),parameter::c_bool=1_4
integer(4),parameter::c_char=1_4
character(1_4,1),parameter::c_null_char="\000"
intrinsic::achar
character(1_4,1),parameter::c_alert="\007"
character(1_4,1),parameter::c_backspace="\b"
character(1_4,1),parameter::c_form_feed="\f"
character(1_4,1),parameter::c_new_line="\n"
character(1_4,1),parameter::c_carriage_return="\r"
character(1_4,1),parameter::c_horizontal_tab="\t"
character(1_4,1),parameter::c_vertical_tab="\v"
interface c_associated
procedure::c_associated_c_ptr
procedure::c_associated_c_funptr
end interface
interface c_f_procpointer
procedure::c_f_procpointer
end interface
integer(4),parameter::c_float128=16_4
integer(4),parameter::c_float128_complex=16_4
private::c_associated_c_ptr
private::c_associated_c_funptr
contains
subroutine c_f_procpointer(cptr,fptr)
type(c_funptr),intent(in)::cptr
procedure(),intent(out),pointer::fptr
end
pure function c_associated_c_ptr(c_ptr_1,c_ptr_2)
type(c_ptr),intent(in)::c_ptr_1
type(c_ptr),intent(in),optional::c_ptr_2
logical(4)::c_associated_c_ptr
end
pure function c_associated_c_funptr(c_funptr_1,c_funptr_2)
type(c_funptr),intent(in)::c_funptr_1
type(c_funptr),intent(in),optional::c_funptr_2
logical(4)::c_associated_c_funptr
end
function c_funloc(x)
procedure()::x
type(c_funptr)::c_funloc
end
end
