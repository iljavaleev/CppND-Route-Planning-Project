!mod$ v1 sum:1cf495b07729b247
module ieee_arithmetic
use __fortran_builtins,only:ieee_is_nan=>__builtin_ieee_is_nan
use __fortran_builtins,only:ieee_is_negative=>__builtin_ieee_is_negative
use __fortran_builtins,only:ieee_is_normal=>__builtin_ieee_is_normal
use __fortran_builtins,only:ieee_next_after=>__builtin_ieee_next_after
use __fortran_builtins,only:ieee_next_down=>__builtin_ieee_next_down
use __fortran_builtins,only:ieee_next_up=>__builtin_ieee_next_up
use __fortran_builtins,only:ieee_scalb=>scale
use __fortran_builtins,only:ieee_selected_real_kind=>__builtin_ieee_selected_real_kind
use __fortran_builtins,only:ieee_support_datatype=>__builtin_ieee_support_datatype
use __fortran_builtins,only:ieee_support_denormal=>__builtin_ieee_support_denormal
use __fortran_builtins,only:ieee_support_divide=>__builtin_ieee_support_divide
use __fortran_builtins,only:ieee_support_inf=>__builtin_ieee_support_inf
use __fortran_builtins,only:ieee_support_io=>__builtin_ieee_support_io
use __fortran_builtins,only:ieee_support_nan=>__builtin_ieee_support_nan
use __fortran_builtins,only:ieee_support_sqrt=>__builtin_ieee_support_sqrt
use __fortran_builtins,only:ieee_support_standard=>__builtin_ieee_support_standard
use __fortran_builtins,only:ieee_support_subnormal=>__builtin_ieee_support_subnormal
use __fortran_builtins,only:ieee_support_underflow_control=>__builtin_ieee_support_underflow_control
use __fortran_ieee_exceptions,only:ieee_flag_type
use __fortran_ieee_exceptions,only:ieee_invalid
use __fortran_ieee_exceptions,only:ieee_overflow
use __fortran_ieee_exceptions,only:ieee_divide_by_zero
use __fortran_ieee_exceptions,only:ieee_underflow
use __fortran_ieee_exceptions,only:ieee_inexact
use __fortran_ieee_exceptions,only:ieee_denorm
use __fortran_ieee_exceptions,only:ieee_usual
use __fortran_ieee_exceptions,only:ieee_all
use __fortran_ieee_exceptions,only:ieee_modes_type
use __fortran_ieee_exceptions,only:ieee_status_type
use __fortran_ieee_exceptions,only:ieee_get_flag
use __fortran_ieee_exceptions,only:ieee_get_flag_0
use __fortran_ieee_exceptions,only:ieee_get_halting_mode
use __fortran_ieee_exceptions,only:ieee_get_halting_mode_0
use __fortran_ieee_exceptions,only:ieee_get_modes
use __fortran_ieee_exceptions,only:ieee_get_modes_0
use __fortran_ieee_exceptions,only:ieee_get_status
use __fortran_ieee_exceptions,only:ieee_get_status_0
use __fortran_ieee_exceptions,only:ieee_set_flag
use __fortran_ieee_exceptions,only:ieee_set_halting_mode
use __fortran_ieee_exceptions,only:ieee_set_modes
use __fortran_ieee_exceptions,only:ieee_set_modes_0
use __fortran_ieee_exceptions,only:ieee_set_status
use __fortran_ieee_exceptions,only:ieee_set_status_0
use __fortran_ieee_exceptions,only:ieee_support_flag
use __fortran_ieee_exceptions,only:ieee_support_flag_0
use __fortran_ieee_exceptions,only:ieee_support_halting
use __fortran_ieee_exceptions,only:ieee_support_halting_0
type::ieee_class_type
integer(1),private::which=0_1
end type
type(ieee_class_type),parameter::ieee_signaling_nan=ieee_class_type(which=1_1)
type(ieee_class_type),parameter::ieee_quiet_nan=ieee_class_type(which=2_1)
type(ieee_class_type),parameter::ieee_negative_inf=ieee_class_type(which=3_1)
type(ieee_class_type),parameter::ieee_negative_normal=ieee_class_type(which=4_1)
type(ieee_class_type),parameter::ieee_negative_denormal=ieee_class_type(which=5_1)
type(ieee_class_type),parameter::ieee_negative_zero=ieee_class_type(which=6_1)
type(ieee_class_type),parameter::ieee_positive_zero=ieee_class_type(which=7_1)
type(ieee_class_type),parameter::ieee_positive_subnormal=ieee_class_type(which=8_1)
type(ieee_class_type),parameter::ieee_positive_normal=ieee_class_type(which=9_1)
type(ieee_class_type),parameter::ieee_positive_inf=ieee_class_type(which=10_1)
type(ieee_class_type),parameter::ieee_other_value=ieee_class_type(which=11_1)
type(ieee_class_type),parameter::ieee_negative_subnormal=ieee_class_type(which=5_1)
type(ieee_class_type),parameter::ieee_positive_denormal=ieee_class_type(which=5_1)
type::ieee_round_type
integer(1),private::mode=0_1
end type
type(ieee_round_type),parameter::ieee_nearest=ieee_round_type(mode=1_1)
type(ieee_round_type),parameter::ieee_to_zero=ieee_round_type(mode=2_1)
type(ieee_round_type),parameter::ieee_up=ieee_round_type(mode=3_1)
type(ieee_round_type),parameter::ieee_down=ieee_round_type(mode=4_1)
type(ieee_round_type),parameter::ieee_away=ieee_round_type(mode=5_1)
type(ieee_round_type),parameter::ieee_other=ieee_round_type(mode=6_1)
interface operator(==)
procedure::ieee_class_eq
procedure::ieee_round_eq
end interface
private::ieee_class_eq
interface
elemental function ieee_class_eq(x,y)
import::ieee_class_type
type(ieee_class_type),intent(in)::x
type(ieee_class_type),intent(in)::y
logical(4)::ieee_class_eq
end
end interface
private::ieee_round_eq
interface
elemental function ieee_round_eq(x,y)
import::ieee_round_type
type(ieee_round_type),intent(in)::x
type(ieee_round_type),intent(in)::y
logical(4)::ieee_round_eq
end
end interface
interface operator(/=)
procedure::ieee_class_ne
procedure::ieee_round_ne
end interface
private::ieee_class_ne
interface
elemental function ieee_class_ne(x,y)
import::ieee_class_type
type(ieee_class_type),intent(in)::x
type(ieee_class_type),intent(in)::y
logical(4)::ieee_class_ne
end
end interface
private::ieee_round_ne
interface
elemental function ieee_round_ne(x,y)
import::ieee_round_type
type(ieee_round_type),intent(in)::x
type(ieee_round_type),intent(in)::y
logical(4)::ieee_round_ne
end
end interface
interface ieee_class
procedure::ieee_class_a2
procedure::ieee_class_a3
procedure::ieee_class_a4
procedure::ieee_class_a8
procedure::ieee_class_a16
end interface
private::ieee_class_a2
interface
elemental function ieee_class_a2(x)
import::ieee_class_type
real(2),intent(in)::x
type(ieee_class_type)::ieee_class_a2
end
end interface
private::ieee_class_a3
interface
elemental function ieee_class_a3(x)
import::ieee_class_type
real(3),intent(in)::x
type(ieee_class_type)::ieee_class_a3
end
end interface
private::ieee_class_a4
interface
elemental function ieee_class_a4(x)
import::ieee_class_type
real(4),intent(in)::x
type(ieee_class_type)::ieee_class_a4
end
end interface
private::ieee_class_a8
interface
elemental function ieee_class_a8(x)
import::ieee_class_type
real(8),intent(in)::x
type(ieee_class_type)::ieee_class_a8
end
end interface
private::ieee_class_a16
interface
elemental function ieee_class_a16(x)
import::ieee_class_type
real(16),intent(in)::x
type(ieee_class_type)::ieee_class_a16
end
end interface
interface ieee_copy_sign
procedure::ieee_copy_sign_a2_a2
procedure::ieee_copy_sign_a2_a3
procedure::ieee_copy_sign_a2_a4
procedure::ieee_copy_sign_a2_a8
procedure::ieee_copy_sign_a2_a16
procedure::ieee_copy_sign_a3_a2
procedure::ieee_copy_sign_a3_a3
procedure::ieee_copy_sign_a3_a4
procedure::ieee_copy_sign_a3_a8
procedure::ieee_copy_sign_a3_a16
procedure::ieee_copy_sign_a4_a2
procedure::ieee_copy_sign_a4_a3
procedure::ieee_copy_sign_a4_a4
procedure::ieee_copy_sign_a4_a8
procedure::ieee_copy_sign_a4_a16
procedure::ieee_copy_sign_a8_a2
procedure::ieee_copy_sign_a8_a3
procedure::ieee_copy_sign_a8_a4
procedure::ieee_copy_sign_a8_a8
procedure::ieee_copy_sign_a8_a16
procedure::ieee_copy_sign_a16_a2
procedure::ieee_copy_sign_a16_a3
procedure::ieee_copy_sign_a16_a4
procedure::ieee_copy_sign_a16_a8
procedure::ieee_copy_sign_a16_a16
end interface
private::ieee_copy_sign_a2_a2
interface
elemental function ieee_copy_sign_a2_a2(x,y)
real(2),intent(in)::x
real(2),intent(in)::y
real(2)::ieee_copy_sign_a2_a2
end
end interface
private::ieee_copy_sign_a2_a3
interface
elemental function ieee_copy_sign_a2_a3(x,y)
real(2),intent(in)::x
real(3),intent(in)::y
real(2)::ieee_copy_sign_a2_a3
end
end interface
private::ieee_copy_sign_a2_a4
interface
elemental function ieee_copy_sign_a2_a4(x,y)
real(2),intent(in)::x
real(4),intent(in)::y
real(2)::ieee_copy_sign_a2_a4
end
end interface
private::ieee_copy_sign_a2_a8
interface
elemental function ieee_copy_sign_a2_a8(x,y)
real(2),intent(in)::x
real(8),intent(in)::y
real(2)::ieee_copy_sign_a2_a8
end
end interface
private::ieee_copy_sign_a2_a16
interface
elemental function ieee_copy_sign_a2_a16(x,y)
real(2),intent(in)::x
real(16),intent(in)::y
real(2)::ieee_copy_sign_a2_a16
end
end interface
private::ieee_copy_sign_a3_a2
interface
elemental function ieee_copy_sign_a3_a2(x,y)
real(3),intent(in)::x
real(2),intent(in)::y
real(3)::ieee_copy_sign_a3_a2
end
end interface
private::ieee_copy_sign_a3_a3
interface
elemental function ieee_copy_sign_a3_a3(x,y)
real(3),intent(in)::x
real(3),intent(in)::y
real(3)::ieee_copy_sign_a3_a3
end
end interface
private::ieee_copy_sign_a3_a4
interface
elemental function ieee_copy_sign_a3_a4(x,y)
real(3),intent(in)::x
real(4),intent(in)::y
real(3)::ieee_copy_sign_a3_a4
end
end interface
private::ieee_copy_sign_a3_a8
interface
elemental function ieee_copy_sign_a3_a8(x,y)
real(3),intent(in)::x
real(8),intent(in)::y
real(3)::ieee_copy_sign_a3_a8
end
end interface
private::ieee_copy_sign_a3_a16
interface
elemental function ieee_copy_sign_a3_a16(x,y)
real(3),intent(in)::x
real(16),intent(in)::y
real(3)::ieee_copy_sign_a3_a16
end
end interface
private::ieee_copy_sign_a4_a2
interface
elemental function ieee_copy_sign_a4_a2(x,y)
real(4),intent(in)::x
real(2),intent(in)::y
real(4)::ieee_copy_sign_a4_a2
end
end interface
private::ieee_copy_sign_a4_a3
interface
elemental function ieee_copy_sign_a4_a3(x,y)
real(4),intent(in)::x
real(3),intent(in)::y
real(4)::ieee_copy_sign_a4_a3
end
end interface
private::ieee_copy_sign_a4_a4
interface
elemental function ieee_copy_sign_a4_a4(x,y)
real(4),intent(in)::x
real(4),intent(in)::y
real(4)::ieee_copy_sign_a4_a4
end
end interface
private::ieee_copy_sign_a4_a8
interface
elemental function ieee_copy_sign_a4_a8(x,y)
real(4),intent(in)::x
real(8),intent(in)::y
real(4)::ieee_copy_sign_a4_a8
end
end interface
private::ieee_copy_sign_a4_a16
interface
elemental function ieee_copy_sign_a4_a16(x,y)
real(4),intent(in)::x
real(16),intent(in)::y
real(4)::ieee_copy_sign_a4_a16
end
end interface
private::ieee_copy_sign_a8_a2
interface
elemental function ieee_copy_sign_a8_a2(x,y)
real(8),intent(in)::x
real(2),intent(in)::y
real(8)::ieee_copy_sign_a8_a2
end
end interface
private::ieee_copy_sign_a8_a3
interface
elemental function ieee_copy_sign_a8_a3(x,y)
real(8),intent(in)::x
real(3),intent(in)::y
real(8)::ieee_copy_sign_a8_a3
end
end interface
private::ieee_copy_sign_a8_a4
interface
elemental function ieee_copy_sign_a8_a4(x,y)
real(8),intent(in)::x
real(4),intent(in)::y
real(8)::ieee_copy_sign_a8_a4
end
end interface
private::ieee_copy_sign_a8_a8
interface
elemental function ieee_copy_sign_a8_a8(x,y)
real(8),intent(in)::x
real(8),intent(in)::y
real(8)::ieee_copy_sign_a8_a8
end
end interface
private::ieee_copy_sign_a8_a16
interface
elemental function ieee_copy_sign_a8_a16(x,y)
real(8),intent(in)::x
real(16),intent(in)::y
real(8)::ieee_copy_sign_a8_a16
end
end interface
private::ieee_copy_sign_a16_a2
interface
elemental function ieee_copy_sign_a16_a2(x,y)
real(16),intent(in)::x
real(2),intent(in)::y
real(16)::ieee_copy_sign_a16_a2
end
end interface
private::ieee_copy_sign_a16_a3
interface
elemental function ieee_copy_sign_a16_a3(x,y)
real(16),intent(in)::x
real(3),intent(in)::y
real(16)::ieee_copy_sign_a16_a3
end
end interface
private::ieee_copy_sign_a16_a4
interface
elemental function ieee_copy_sign_a16_a4(x,y)
real(16),intent(in)::x
real(4),intent(in)::y
real(16)::ieee_copy_sign_a16_a4
end
end interface
private::ieee_copy_sign_a16_a8
interface
elemental function ieee_copy_sign_a16_a8(x,y)
real(16),intent(in)::x
real(8),intent(in)::y
real(16)::ieee_copy_sign_a16_a8
end
end interface
private::ieee_copy_sign_a16_a16
interface
elemental function ieee_copy_sign_a16_a16(x,y)
real(16),intent(in)::x
real(16),intent(in)::y
real(16)::ieee_copy_sign_a16_a16
end
end interface
interface ieee_fma
procedure::ieee_fma_a2
procedure::ieee_fma_a3
procedure::ieee_fma_a4
procedure::ieee_fma_a8
procedure::ieee_fma_a16
end interface
private::ieee_fma_a2
interface
elemental function ieee_fma_a2(a,b,c)
real(2),intent(in)::a
real(2),intent(in)::b
real(2),intent(in)::c
real(2)::ieee_fma_a2
end
end interface
private::ieee_fma_a3
interface
elemental function ieee_fma_a3(a,b,c)
real(3),intent(in)::a
real(3),intent(in)::b
real(3),intent(in)::c
real(3)::ieee_fma_a3
end
end interface
private::ieee_fma_a4
interface
elemental function ieee_fma_a4(a,b,c)
real(4),intent(in)::a
real(4),intent(in)::b
real(4),intent(in)::c
real(4)::ieee_fma_a4
end
end interface
private::ieee_fma_a8
interface
elemental function ieee_fma_a8(a,b,c)
real(8),intent(in)::a
real(8),intent(in)::b
real(8),intent(in)::c
real(8)::ieee_fma_a8
end
end interface
private::ieee_fma_a16
interface
elemental function ieee_fma_a16(a,b,c)
real(16),intent(in)::a
real(16),intent(in)::b
real(16),intent(in)::c
real(16)::ieee_fma_a16
end
end interface
interface ieee_get_rounding_mode
procedure::ieee_get_rounding_mode_0
procedure::ieee_get_rounding_mode_i1
procedure::ieee_get_rounding_mode_i2
procedure::ieee_get_rounding_mode_i4
procedure::ieee_get_rounding_mode_i8
procedure::ieee_get_rounding_mode_i16
end interface
interface
subroutine ieee_get_rounding_mode_0(round_value)
import::ieee_round_type
type(ieee_round_type),intent(out)::round_value
end
end interface
private::ieee_get_rounding_mode_i1
interface
subroutine ieee_get_rounding_mode_i1(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(out)::round_value
integer(1),intent(in)::radix
end
end interface
private::ieee_get_rounding_mode_i2
interface
subroutine ieee_get_rounding_mode_i2(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(out)::round_value
integer(2),intent(in)::radix
end
end interface
private::ieee_get_rounding_mode_i4
interface
subroutine ieee_get_rounding_mode_i4(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(out)::round_value
integer(4),intent(in)::radix
end
end interface
private::ieee_get_rounding_mode_i8
interface
subroutine ieee_get_rounding_mode_i8(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(out)::round_value
integer(8),intent(in)::radix
end
end interface
private::ieee_get_rounding_mode_i16
interface
subroutine ieee_get_rounding_mode_i16(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(out)::round_value
integer(16),intent(in)::radix
end
end interface
interface ieee_get_underflow_mode
procedure::ieee_get_underflow_mode_l1
procedure::ieee_get_underflow_mode_l2
procedure::ieee_get_underflow_mode_l4
procedure::ieee_get_underflow_mode_l8
end interface
private::ieee_get_underflow_mode_l1
interface
subroutine ieee_get_underflow_mode_l1(gradual)
logical(1),intent(out)::gradual
end
end interface
private::ieee_get_underflow_mode_l2
interface
subroutine ieee_get_underflow_mode_l2(gradual)
logical(2),intent(out)::gradual
end
end interface
private::ieee_get_underflow_mode_l4
interface
subroutine ieee_get_underflow_mode_l4(gradual)
logical(4),intent(out)::gradual
end
end interface
private::ieee_get_underflow_mode_l8
interface
subroutine ieee_get_underflow_mode_l8(gradual)
logical(8),intent(out)::gradual
end
end interface
interface ieee_int
procedure::ieee_int_a2
procedure::ieee_int_a3
procedure::ieee_int_a4
procedure::ieee_int_a8
procedure::ieee_int_a16
procedure::ieee_int_a2_i1
procedure::ieee_int_a2_i2
procedure::ieee_int_a2_i4
procedure::ieee_int_a2_i8
procedure::ieee_int_a2_i16
procedure::ieee_int_a3_i1
procedure::ieee_int_a3_i2
procedure::ieee_int_a3_i4
procedure::ieee_int_a3_i8
procedure::ieee_int_a3_i16
procedure::ieee_int_a4_i1
procedure::ieee_int_a4_i2
procedure::ieee_int_a4_i4
procedure::ieee_int_a4_i8
procedure::ieee_int_a4_i16
procedure::ieee_int_a8_i1
procedure::ieee_int_a8_i2
procedure::ieee_int_a8_i4
procedure::ieee_int_a8_i8
procedure::ieee_int_a8_i16
procedure::ieee_int_a16_i1
procedure::ieee_int_a16_i2
procedure::ieee_int_a16_i4
procedure::ieee_int_a16_i8
procedure::ieee_int_a16_i16
end interface
private::ieee_int_a2
interface
elemental function ieee_int_a2(a,round)
import::ieee_round_type
real(2),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4)::ieee_int_a2
end
end interface
private::ieee_int_a3
interface
elemental function ieee_int_a3(a,round)
import::ieee_round_type
real(3),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4)::ieee_int_a3
end
end interface
private::ieee_int_a4
interface
elemental function ieee_int_a4(a,round)
import::ieee_round_type
real(4),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4)::ieee_int_a4
end
end interface
private::ieee_int_a8
interface
elemental function ieee_int_a8(a,round)
import::ieee_round_type
real(8),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4)::ieee_int_a8
end
end interface
private::ieee_int_a16
interface
elemental function ieee_int_a16(a,round)
import::ieee_round_type
real(16),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4)::ieee_int_a16
end
end interface
private::ieee_int_a2_i1
interface
elemental function ieee_int_a2_i1(a,round,kind)
import::ieee_round_type
real(2),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(1),intent(in)::kind
integer(16)::ieee_int_a2_i1
end
end interface
private::ieee_int_a2_i2
interface
elemental function ieee_int_a2_i2(a,round,kind)
import::ieee_round_type
real(2),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(2),intent(in)::kind
integer(16)::ieee_int_a2_i2
end
end interface
private::ieee_int_a2_i4
interface
elemental function ieee_int_a2_i4(a,round,kind)
import::ieee_round_type
real(2),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4),intent(in)::kind
integer(16)::ieee_int_a2_i4
end
end interface
private::ieee_int_a2_i8
interface
elemental function ieee_int_a2_i8(a,round,kind)
import::ieee_round_type
real(2),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(8),intent(in)::kind
integer(16)::ieee_int_a2_i8
end
end interface
private::ieee_int_a2_i16
interface
elemental function ieee_int_a2_i16(a,round,kind)
import::ieee_round_type
real(2),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(16),intent(in)::kind
integer(16)::ieee_int_a2_i16
end
end interface
private::ieee_int_a3_i1
interface
elemental function ieee_int_a3_i1(a,round,kind)
import::ieee_round_type
real(3),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(1),intent(in)::kind
integer(16)::ieee_int_a3_i1
end
end interface
private::ieee_int_a3_i2
interface
elemental function ieee_int_a3_i2(a,round,kind)
import::ieee_round_type
real(3),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(2),intent(in)::kind
integer(16)::ieee_int_a3_i2
end
end interface
private::ieee_int_a3_i4
interface
elemental function ieee_int_a3_i4(a,round,kind)
import::ieee_round_type
real(3),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4),intent(in)::kind
integer(16)::ieee_int_a3_i4
end
end interface
private::ieee_int_a3_i8
interface
elemental function ieee_int_a3_i8(a,round,kind)
import::ieee_round_type
real(3),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(8),intent(in)::kind
integer(16)::ieee_int_a3_i8
end
end interface
private::ieee_int_a3_i16
interface
elemental function ieee_int_a3_i16(a,round,kind)
import::ieee_round_type
real(3),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(16),intent(in)::kind
integer(16)::ieee_int_a3_i16
end
end interface
private::ieee_int_a4_i1
interface
elemental function ieee_int_a4_i1(a,round,kind)
import::ieee_round_type
real(4),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(1),intent(in)::kind
integer(16)::ieee_int_a4_i1
end
end interface
private::ieee_int_a4_i2
interface
elemental function ieee_int_a4_i2(a,round,kind)
import::ieee_round_type
real(4),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(2),intent(in)::kind
integer(16)::ieee_int_a4_i2
end
end interface
private::ieee_int_a4_i4
interface
elemental function ieee_int_a4_i4(a,round,kind)
import::ieee_round_type
real(4),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4),intent(in)::kind
integer(16)::ieee_int_a4_i4
end
end interface
private::ieee_int_a4_i8
interface
elemental function ieee_int_a4_i8(a,round,kind)
import::ieee_round_type
real(4),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(8),intent(in)::kind
integer(16)::ieee_int_a4_i8
end
end interface
private::ieee_int_a4_i16
interface
elemental function ieee_int_a4_i16(a,round,kind)
import::ieee_round_type
real(4),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(16),intent(in)::kind
integer(16)::ieee_int_a4_i16
end
end interface
private::ieee_int_a8_i1
interface
elemental function ieee_int_a8_i1(a,round,kind)
import::ieee_round_type
real(8),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(1),intent(in)::kind
integer(16)::ieee_int_a8_i1
end
end interface
private::ieee_int_a8_i2
interface
elemental function ieee_int_a8_i2(a,round,kind)
import::ieee_round_type
real(8),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(2),intent(in)::kind
integer(16)::ieee_int_a8_i2
end
end interface
private::ieee_int_a8_i4
interface
elemental function ieee_int_a8_i4(a,round,kind)
import::ieee_round_type
real(8),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4),intent(in)::kind
integer(16)::ieee_int_a8_i4
end
end interface
private::ieee_int_a8_i8
interface
elemental function ieee_int_a8_i8(a,round,kind)
import::ieee_round_type
real(8),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(8),intent(in)::kind
integer(16)::ieee_int_a8_i8
end
end interface
private::ieee_int_a8_i16
interface
elemental function ieee_int_a8_i16(a,round,kind)
import::ieee_round_type
real(8),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(16),intent(in)::kind
integer(16)::ieee_int_a8_i16
end
end interface
private::ieee_int_a16_i1
interface
elemental function ieee_int_a16_i1(a,round,kind)
import::ieee_round_type
real(16),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(1),intent(in)::kind
integer(16)::ieee_int_a16_i1
end
end interface
private::ieee_int_a16_i2
interface
elemental function ieee_int_a16_i2(a,round,kind)
import::ieee_round_type
real(16),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(2),intent(in)::kind
integer(16)::ieee_int_a16_i2
end
end interface
private::ieee_int_a16_i4
interface
elemental function ieee_int_a16_i4(a,round,kind)
import::ieee_round_type
real(16),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(4),intent(in)::kind
integer(16)::ieee_int_a16_i4
end
end interface
private::ieee_int_a16_i8
interface
elemental function ieee_int_a16_i8(a,round,kind)
import::ieee_round_type
real(16),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(8),intent(in)::kind
integer(16)::ieee_int_a16_i8
end
end interface
private::ieee_int_a16_i16
interface
elemental function ieee_int_a16_i16(a,round,kind)
import::ieee_round_type
real(16),intent(in)::a
type(ieee_round_type),intent(in)::round
integer(16),intent(in)::kind
integer(16)::ieee_int_a16_i16
end
end interface
interface ieee_is_finite
procedure::ieee_is_finite_a2
procedure::ieee_is_finite_a3
procedure::ieee_is_finite_a4
procedure::ieee_is_finite_a8
procedure::ieee_is_finite_a16
end interface
private::ieee_is_finite_a2
interface
elemental function ieee_is_finite_a2(x)
real(2),intent(in)::x
logical(4)::ieee_is_finite_a2
end
end interface
private::ieee_is_finite_a3
interface
elemental function ieee_is_finite_a3(x)
real(3),intent(in)::x
logical(4)::ieee_is_finite_a3
end
end interface
private::ieee_is_finite_a4
interface
elemental function ieee_is_finite_a4(x)
real(4),intent(in)::x
logical(4)::ieee_is_finite_a4
end
end interface
private::ieee_is_finite_a8
interface
elemental function ieee_is_finite_a8(x)
real(8),intent(in)::x
logical(4)::ieee_is_finite_a8
end
end interface
private::ieee_is_finite_a16
interface
elemental function ieee_is_finite_a16(x)
real(16),intent(in)::x
logical(4)::ieee_is_finite_a16
end
end interface
interface ieee_logb
procedure::ieee_logb_a2
procedure::ieee_logb_a3
procedure::ieee_logb_a4
procedure::ieee_logb_a8
procedure::ieee_logb_a16
end interface
private::ieee_logb_a2
interface
elemental function ieee_logb_a2(x)
real(2),intent(in)::x
real(2)::ieee_logb_a2
end
end interface
private::ieee_logb_a3
interface
elemental function ieee_logb_a3(x)
real(3),intent(in)::x
real(3)::ieee_logb_a3
end
end interface
private::ieee_logb_a4
interface
elemental function ieee_logb_a4(x)
real(4),intent(in)::x
real(4)::ieee_logb_a4
end
end interface
private::ieee_logb_a8
interface
elemental function ieee_logb_a8(x)
real(8),intent(in)::x
real(8)::ieee_logb_a8
end
end interface
private::ieee_logb_a16
interface
elemental function ieee_logb_a16(x)
real(16),intent(in)::x
real(16)::ieee_logb_a16
end
end interface
interface ieee_max_num
procedure::ieee_max_num_a2
procedure::ieee_max_num_a3
procedure::ieee_max_num_a4
procedure::ieee_max_num_a8
procedure::ieee_max_num_a16
end interface
private::ieee_max_num_a2
interface
elemental function ieee_max_num_a2(x,y)
real(2),intent(in)::x
real(2),intent(in)::y
real(2)::ieee_max_num_a2
end
end interface
private::ieee_max_num_a3
interface
elemental function ieee_max_num_a3(x,y)
real(3),intent(in)::x
real(3),intent(in)::y
real(3)::ieee_max_num_a3
end
end interface
private::ieee_max_num_a4
interface
elemental function ieee_max_num_a4(x,y)
real(4),intent(in)::x
real(4),intent(in)::y
real(4)::ieee_max_num_a4
end
end interface
private::ieee_max_num_a8
interface
elemental function ieee_max_num_a8(x,y)
real(8),intent(in)::x
real(8),intent(in)::y
real(8)::ieee_max_num_a8
end
end interface
private::ieee_max_num_a16
interface
elemental function ieee_max_num_a16(x,y)
real(16),intent(in)::x
real(16),intent(in)::y
real(16)::ieee_max_num_a16
end
end interface
interface ieee_max_num_mag
procedure::ieee_max_num_mag_a2
procedure::ieee_max_num_mag_a3
procedure::ieee_max_num_mag_a4
procedure::ieee_max_num_mag_a8
procedure::ieee_max_num_mag_a16
end interface
private::ieee_max_num_mag_a2
interface
elemental function ieee_max_num_mag_a2(x,y)
real(2),intent(in)::x
real(2),intent(in)::y
real(2)::ieee_max_num_mag_a2
end
end interface
private::ieee_max_num_mag_a3
interface
elemental function ieee_max_num_mag_a3(x,y)
real(3),intent(in)::x
real(3),intent(in)::y
real(3)::ieee_max_num_mag_a3
end
end interface
private::ieee_max_num_mag_a4
interface
elemental function ieee_max_num_mag_a4(x,y)
real(4),intent(in)::x
real(4),intent(in)::y
real(4)::ieee_max_num_mag_a4
end
end interface
private::ieee_max_num_mag_a8
interface
elemental function ieee_max_num_mag_a8(x,y)
real(8),intent(in)::x
real(8),intent(in)::y
real(8)::ieee_max_num_mag_a8
end
end interface
private::ieee_max_num_mag_a16
interface
elemental function ieee_max_num_mag_a16(x,y)
real(16),intent(in)::x
real(16),intent(in)::y
real(16)::ieee_max_num_mag_a16
end
end interface
interface ieee_min_num
procedure::ieee_min_num_a2
procedure::ieee_min_num_a3
procedure::ieee_min_num_a4
procedure::ieee_min_num_a8
procedure::ieee_min_num_a16
end interface
private::ieee_min_num_a2
interface
elemental function ieee_min_num_a2(x,y)
real(2),intent(in)::x
real(2),intent(in)::y
real(2)::ieee_min_num_a2
end
end interface
private::ieee_min_num_a3
interface
elemental function ieee_min_num_a3(x,y)
real(3),intent(in)::x
real(3),intent(in)::y
real(3)::ieee_min_num_a3
end
end interface
private::ieee_min_num_a4
interface
elemental function ieee_min_num_a4(x,y)
real(4),intent(in)::x
real(4),intent(in)::y
real(4)::ieee_min_num_a4
end
end interface
private::ieee_min_num_a8
interface
elemental function ieee_min_num_a8(x,y)
real(8),intent(in)::x
real(8),intent(in)::y
real(8)::ieee_min_num_a8
end
end interface
private::ieee_min_num_a16
interface
elemental function ieee_min_num_a16(x,y)
real(16),intent(in)::x
real(16),intent(in)::y
real(16)::ieee_min_num_a16
end
end interface
interface ieee_min_num_mag
procedure::ieee_min_num_mag_a2
procedure::ieee_min_num_mag_a3
procedure::ieee_min_num_mag_a4
procedure::ieee_min_num_mag_a8
procedure::ieee_min_num_mag_a16
end interface
private::ieee_min_num_mag_a2
interface
elemental function ieee_min_num_mag_a2(x,y)
real(2),intent(in)::x
real(2),intent(in)::y
real(2)::ieee_min_num_mag_a2
end
end interface
private::ieee_min_num_mag_a3
interface
elemental function ieee_min_num_mag_a3(x,y)
real(3),intent(in)::x
real(3),intent(in)::y
real(3)::ieee_min_num_mag_a3
end
end interface
private::ieee_min_num_mag_a4
interface
elemental function ieee_min_num_mag_a4(x,y)
real(4),intent(in)::x
real(4),intent(in)::y
real(4)::ieee_min_num_mag_a4
end
end interface
private::ieee_min_num_mag_a8
interface
elemental function ieee_min_num_mag_a8(x,y)
real(8),intent(in)::x
real(8),intent(in)::y
real(8)::ieee_min_num_mag_a8
end
end interface
private::ieee_min_num_mag_a16
interface
elemental function ieee_min_num_mag_a16(x,y)
real(16),intent(in)::x
real(16),intent(in)::y
real(16)::ieee_min_num_mag_a16
end
end interface
interface ieee_quiet_eq
procedure::ieee_quiet_eq_a2
procedure::ieee_quiet_eq_a3
procedure::ieee_quiet_eq_a4
procedure::ieee_quiet_eq_a8
procedure::ieee_quiet_eq_a16
end interface
private::ieee_quiet_eq_a2
interface
elemental function ieee_quiet_eq_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_quiet_eq_a2
end
end interface
private::ieee_quiet_eq_a3
interface
elemental function ieee_quiet_eq_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_quiet_eq_a3
end
end interface
private::ieee_quiet_eq_a4
interface
elemental function ieee_quiet_eq_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_quiet_eq_a4
end
end interface
private::ieee_quiet_eq_a8
interface
elemental function ieee_quiet_eq_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_quiet_eq_a8
end
end interface
private::ieee_quiet_eq_a16
interface
elemental function ieee_quiet_eq_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_quiet_eq_a16
end
end interface
interface ieee_quiet_ge
procedure::ieee_quiet_ge_a2
procedure::ieee_quiet_ge_a3
procedure::ieee_quiet_ge_a4
procedure::ieee_quiet_ge_a8
procedure::ieee_quiet_ge_a16
end interface
private::ieee_quiet_ge_a2
interface
elemental function ieee_quiet_ge_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_quiet_ge_a2
end
end interface
private::ieee_quiet_ge_a3
interface
elemental function ieee_quiet_ge_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_quiet_ge_a3
end
end interface
private::ieee_quiet_ge_a4
interface
elemental function ieee_quiet_ge_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_quiet_ge_a4
end
end interface
private::ieee_quiet_ge_a8
interface
elemental function ieee_quiet_ge_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_quiet_ge_a8
end
end interface
private::ieee_quiet_ge_a16
interface
elemental function ieee_quiet_ge_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_quiet_ge_a16
end
end interface
interface ieee_quiet_gt
procedure::ieee_quiet_gt_a2
procedure::ieee_quiet_gt_a3
procedure::ieee_quiet_gt_a4
procedure::ieee_quiet_gt_a8
procedure::ieee_quiet_gt_a16
end interface
private::ieee_quiet_gt_a2
interface
elemental function ieee_quiet_gt_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_quiet_gt_a2
end
end interface
private::ieee_quiet_gt_a3
interface
elemental function ieee_quiet_gt_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_quiet_gt_a3
end
end interface
private::ieee_quiet_gt_a4
interface
elemental function ieee_quiet_gt_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_quiet_gt_a4
end
end interface
private::ieee_quiet_gt_a8
interface
elemental function ieee_quiet_gt_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_quiet_gt_a8
end
end interface
private::ieee_quiet_gt_a16
interface
elemental function ieee_quiet_gt_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_quiet_gt_a16
end
end interface
interface ieee_quiet_le
procedure::ieee_quiet_le_a2
procedure::ieee_quiet_le_a3
procedure::ieee_quiet_le_a4
procedure::ieee_quiet_le_a8
procedure::ieee_quiet_le_a16
end interface
private::ieee_quiet_le_a2
interface
elemental function ieee_quiet_le_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_quiet_le_a2
end
end interface
private::ieee_quiet_le_a3
interface
elemental function ieee_quiet_le_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_quiet_le_a3
end
end interface
private::ieee_quiet_le_a4
interface
elemental function ieee_quiet_le_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_quiet_le_a4
end
end interface
private::ieee_quiet_le_a8
interface
elemental function ieee_quiet_le_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_quiet_le_a8
end
end interface
private::ieee_quiet_le_a16
interface
elemental function ieee_quiet_le_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_quiet_le_a16
end
end interface
interface ieee_quiet_lt
procedure::ieee_quiet_lt_a2
procedure::ieee_quiet_lt_a3
procedure::ieee_quiet_lt_a4
procedure::ieee_quiet_lt_a8
procedure::ieee_quiet_lt_a16
end interface
private::ieee_quiet_lt_a2
interface
elemental function ieee_quiet_lt_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_quiet_lt_a2
end
end interface
private::ieee_quiet_lt_a3
interface
elemental function ieee_quiet_lt_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_quiet_lt_a3
end
end interface
private::ieee_quiet_lt_a4
interface
elemental function ieee_quiet_lt_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_quiet_lt_a4
end
end interface
private::ieee_quiet_lt_a8
interface
elemental function ieee_quiet_lt_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_quiet_lt_a8
end
end interface
private::ieee_quiet_lt_a16
interface
elemental function ieee_quiet_lt_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_quiet_lt_a16
end
end interface
interface ieee_quiet_ne
procedure::ieee_quiet_ne_a2
procedure::ieee_quiet_ne_a3
procedure::ieee_quiet_ne_a4
procedure::ieee_quiet_ne_a8
procedure::ieee_quiet_ne_a16
end interface
private::ieee_quiet_ne_a2
interface
elemental function ieee_quiet_ne_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_quiet_ne_a2
end
end interface
private::ieee_quiet_ne_a3
interface
elemental function ieee_quiet_ne_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_quiet_ne_a3
end
end interface
private::ieee_quiet_ne_a4
interface
elemental function ieee_quiet_ne_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_quiet_ne_a4
end
end interface
private::ieee_quiet_ne_a8
interface
elemental function ieee_quiet_ne_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_quiet_ne_a8
end
end interface
private::ieee_quiet_ne_a16
interface
elemental function ieee_quiet_ne_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_quiet_ne_a16
end
end interface
interface ieee_real
procedure::ieee_real_i1
procedure::ieee_real_i2
procedure::ieee_real_i4
procedure::ieee_real_i8
procedure::ieee_real_i16
procedure::ieee_real_a2
procedure::ieee_real_a3
procedure::ieee_real_a4
procedure::ieee_real_a8
procedure::ieee_real_a16
procedure::ieee_real_i1_i1
procedure::ieee_real_i1_i2
procedure::ieee_real_i1_i4
procedure::ieee_real_i1_i8
procedure::ieee_real_i1_i16
procedure::ieee_real_i2_i1
procedure::ieee_real_i2_i2
procedure::ieee_real_i2_i4
procedure::ieee_real_i2_i8
procedure::ieee_real_i2_i16
procedure::ieee_real_i4_i1
procedure::ieee_real_i4_i2
procedure::ieee_real_i4_i4
procedure::ieee_real_i4_i8
procedure::ieee_real_i4_i16
procedure::ieee_real_i8_i1
procedure::ieee_real_i8_i2
procedure::ieee_real_i8_i4
procedure::ieee_real_i8_i8
procedure::ieee_real_i8_i16
procedure::ieee_real_i16_i1
procedure::ieee_real_i16_i2
procedure::ieee_real_i16_i4
procedure::ieee_real_i16_i8
procedure::ieee_real_i16_i16
procedure::ieee_real_a2_i1
procedure::ieee_real_a2_i2
procedure::ieee_real_a2_i4
procedure::ieee_real_a2_i8
procedure::ieee_real_a2_i16
procedure::ieee_real_a3_i1
procedure::ieee_real_a3_i2
procedure::ieee_real_a3_i4
procedure::ieee_real_a3_i8
procedure::ieee_real_a3_i16
procedure::ieee_real_a4_i1
procedure::ieee_real_a4_i2
procedure::ieee_real_a4_i4
procedure::ieee_real_a4_i8
procedure::ieee_real_a4_i16
procedure::ieee_real_a8_i1
procedure::ieee_real_a8_i2
procedure::ieee_real_a8_i4
procedure::ieee_real_a8_i8
procedure::ieee_real_a8_i16
procedure::ieee_real_a16_i1
procedure::ieee_real_a16_i2
procedure::ieee_real_a16_i4
procedure::ieee_real_a16_i8
procedure::ieee_real_a16_i16
end interface
private::ieee_real_i1
interface
elemental function ieee_real_i1(a)
integer(1),intent(in)::a
real(4)::ieee_real_i1
end
end interface
private::ieee_real_i2
interface
elemental function ieee_real_i2(a)
integer(2),intent(in)::a
real(4)::ieee_real_i2
end
end interface
private::ieee_real_i4
interface
elemental function ieee_real_i4(a)
integer(4),intent(in)::a
real(4)::ieee_real_i4
end
end interface
private::ieee_real_i8
interface
elemental function ieee_real_i8(a)
integer(8),intent(in)::a
real(4)::ieee_real_i8
end
end interface
private::ieee_real_i16
interface
elemental function ieee_real_i16(a)
integer(16),intent(in)::a
real(4)::ieee_real_i16
end
end interface
private::ieee_real_a2
interface
elemental function ieee_real_a2(a)
real(2),intent(in)::a
real(4)::ieee_real_a2
end
end interface
private::ieee_real_a3
interface
elemental function ieee_real_a3(a)
real(3),intent(in)::a
real(4)::ieee_real_a3
end
end interface
private::ieee_real_a4
interface
elemental function ieee_real_a4(a)
real(4),intent(in)::a
real(4)::ieee_real_a4
end
end interface
private::ieee_real_a8
interface
elemental function ieee_real_a8(a)
real(8),intent(in)::a
real(4)::ieee_real_a8
end
end interface
private::ieee_real_a16
interface
elemental function ieee_real_a16(a)
real(16),intent(in)::a
real(4)::ieee_real_a16
end
end interface
private::ieee_real_i1_i1
interface
elemental function ieee_real_i1_i1(a,kind)
integer(1),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_i1_i1
end
end interface
private::ieee_real_i1_i2
interface
elemental function ieee_real_i1_i2(a,kind)
integer(1),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_i1_i2
end
end interface
private::ieee_real_i1_i4
interface
elemental function ieee_real_i1_i4(a,kind)
integer(1),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_i1_i4
end
end interface
private::ieee_real_i1_i8
interface
elemental function ieee_real_i1_i8(a,kind)
integer(1),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_i1_i8
end
end interface
private::ieee_real_i1_i16
interface
elemental function ieee_real_i1_i16(a,kind)
integer(1),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_i1_i16
end
end interface
private::ieee_real_i2_i1
interface
elemental function ieee_real_i2_i1(a,kind)
integer(2),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_i2_i1
end
end interface
private::ieee_real_i2_i2
interface
elemental function ieee_real_i2_i2(a,kind)
integer(2),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_i2_i2
end
end interface
private::ieee_real_i2_i4
interface
elemental function ieee_real_i2_i4(a,kind)
integer(2),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_i2_i4
end
end interface
private::ieee_real_i2_i8
interface
elemental function ieee_real_i2_i8(a,kind)
integer(2),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_i2_i8
end
end interface
private::ieee_real_i2_i16
interface
elemental function ieee_real_i2_i16(a,kind)
integer(2),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_i2_i16
end
end interface
private::ieee_real_i4_i1
interface
elemental function ieee_real_i4_i1(a,kind)
integer(4),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_i4_i1
end
end interface
private::ieee_real_i4_i2
interface
elemental function ieee_real_i4_i2(a,kind)
integer(4),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_i4_i2
end
end interface
private::ieee_real_i4_i4
interface
elemental function ieee_real_i4_i4(a,kind)
integer(4),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_i4_i4
end
end interface
private::ieee_real_i4_i8
interface
elemental function ieee_real_i4_i8(a,kind)
integer(4),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_i4_i8
end
end interface
private::ieee_real_i4_i16
interface
elemental function ieee_real_i4_i16(a,kind)
integer(4),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_i4_i16
end
end interface
private::ieee_real_i8_i1
interface
elemental function ieee_real_i8_i1(a,kind)
integer(8),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_i8_i1
end
end interface
private::ieee_real_i8_i2
interface
elemental function ieee_real_i8_i2(a,kind)
integer(8),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_i8_i2
end
end interface
private::ieee_real_i8_i4
interface
elemental function ieee_real_i8_i4(a,kind)
integer(8),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_i8_i4
end
end interface
private::ieee_real_i8_i8
interface
elemental function ieee_real_i8_i8(a,kind)
integer(8),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_i8_i8
end
end interface
private::ieee_real_i8_i16
interface
elemental function ieee_real_i8_i16(a,kind)
integer(8),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_i8_i16
end
end interface
private::ieee_real_i16_i1
interface
elemental function ieee_real_i16_i1(a,kind)
integer(16),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_i16_i1
end
end interface
private::ieee_real_i16_i2
interface
elemental function ieee_real_i16_i2(a,kind)
integer(16),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_i16_i2
end
end interface
private::ieee_real_i16_i4
interface
elemental function ieee_real_i16_i4(a,kind)
integer(16),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_i16_i4
end
end interface
private::ieee_real_i16_i8
interface
elemental function ieee_real_i16_i8(a,kind)
integer(16),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_i16_i8
end
end interface
private::ieee_real_i16_i16
interface
elemental function ieee_real_i16_i16(a,kind)
integer(16),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_i16_i16
end
end interface
private::ieee_real_a2_i1
interface
elemental function ieee_real_a2_i1(a,kind)
real(2),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_a2_i1
end
end interface
private::ieee_real_a2_i2
interface
elemental function ieee_real_a2_i2(a,kind)
real(2),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_a2_i2
end
end interface
private::ieee_real_a2_i4
interface
elemental function ieee_real_a2_i4(a,kind)
real(2),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_a2_i4
end
end interface
private::ieee_real_a2_i8
interface
elemental function ieee_real_a2_i8(a,kind)
real(2),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_a2_i8
end
end interface
private::ieee_real_a2_i16
interface
elemental function ieee_real_a2_i16(a,kind)
real(2),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_a2_i16
end
end interface
private::ieee_real_a3_i1
interface
elemental function ieee_real_a3_i1(a,kind)
real(3),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_a3_i1
end
end interface
private::ieee_real_a3_i2
interface
elemental function ieee_real_a3_i2(a,kind)
real(3),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_a3_i2
end
end interface
private::ieee_real_a3_i4
interface
elemental function ieee_real_a3_i4(a,kind)
real(3),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_a3_i4
end
end interface
private::ieee_real_a3_i8
interface
elemental function ieee_real_a3_i8(a,kind)
real(3),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_a3_i8
end
end interface
private::ieee_real_a3_i16
interface
elemental function ieee_real_a3_i16(a,kind)
real(3),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_a3_i16
end
end interface
private::ieee_real_a4_i1
interface
elemental function ieee_real_a4_i1(a,kind)
real(4),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_a4_i1
end
end interface
private::ieee_real_a4_i2
interface
elemental function ieee_real_a4_i2(a,kind)
real(4),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_a4_i2
end
end interface
private::ieee_real_a4_i4
interface
elemental function ieee_real_a4_i4(a,kind)
real(4),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_a4_i4
end
end interface
private::ieee_real_a4_i8
interface
elemental function ieee_real_a4_i8(a,kind)
real(4),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_a4_i8
end
end interface
private::ieee_real_a4_i16
interface
elemental function ieee_real_a4_i16(a,kind)
real(4),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_a4_i16
end
end interface
private::ieee_real_a8_i1
interface
elemental function ieee_real_a8_i1(a,kind)
real(8),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_a8_i1
end
end interface
private::ieee_real_a8_i2
interface
elemental function ieee_real_a8_i2(a,kind)
real(8),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_a8_i2
end
end interface
private::ieee_real_a8_i4
interface
elemental function ieee_real_a8_i4(a,kind)
real(8),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_a8_i4
end
end interface
private::ieee_real_a8_i8
interface
elemental function ieee_real_a8_i8(a,kind)
real(8),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_a8_i8
end
end interface
private::ieee_real_a8_i16
interface
elemental function ieee_real_a8_i16(a,kind)
real(8),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_a8_i16
end
end interface
private::ieee_real_a16_i1
interface
elemental function ieee_real_a16_i1(a,kind)
real(16),intent(in)::a
integer(1),intent(in)::kind
real(16)::ieee_real_a16_i1
end
end interface
private::ieee_real_a16_i2
interface
elemental function ieee_real_a16_i2(a,kind)
real(16),intent(in)::a
integer(2),intent(in)::kind
real(16)::ieee_real_a16_i2
end
end interface
private::ieee_real_a16_i4
interface
elemental function ieee_real_a16_i4(a,kind)
real(16),intent(in)::a
integer(4),intent(in)::kind
real(16)::ieee_real_a16_i4
end
end interface
private::ieee_real_a16_i8
interface
elemental function ieee_real_a16_i8(a,kind)
real(16),intent(in)::a
integer(8),intent(in)::kind
real(16)::ieee_real_a16_i8
end
end interface
private::ieee_real_a16_i16
interface
elemental function ieee_real_a16_i16(a,kind)
real(16),intent(in)::a
integer(16),intent(in)::kind
real(16)::ieee_real_a16_i16
end
end interface
interface ieee_rem
procedure::ieee_rem_a2_a2
procedure::ieee_rem_a2_a3
procedure::ieee_rem_a2_a4
procedure::ieee_rem_a2_a8
procedure::ieee_rem_a2_a16
procedure::ieee_rem_a3_a2
procedure::ieee_rem_a3_a3
procedure::ieee_rem_a3_a4
procedure::ieee_rem_a3_a8
procedure::ieee_rem_a3_a16
procedure::ieee_rem_a4_a2
procedure::ieee_rem_a4_a3
procedure::ieee_rem_a4_a4
procedure::ieee_rem_a4_a8
procedure::ieee_rem_a4_a16
procedure::ieee_rem_a8_a2
procedure::ieee_rem_a8_a3
procedure::ieee_rem_a8_a4
procedure::ieee_rem_a8_a8
procedure::ieee_rem_a8_a16
procedure::ieee_rem_a16_a2
procedure::ieee_rem_a16_a3
procedure::ieee_rem_a16_a4
procedure::ieee_rem_a16_a8
procedure::ieee_rem_a16_a16
end interface
private::ieee_rem_a2_a2
interface
elemental function ieee_rem_a2_a2(x,y)
real(2),intent(in)::x
real(2),intent(in)::y
real(2)::ieee_rem_a2_a2
end
end interface
private::ieee_rem_a2_a3
interface
elemental function ieee_rem_a2_a3(x,y)
real(2),intent(in)::x
real(3),intent(in)::y
real(2)::ieee_rem_a2_a3
end
end interface
private::ieee_rem_a2_a4
interface
elemental function ieee_rem_a2_a4(x,y)
real(2),intent(in)::x
real(4),intent(in)::y
real(2)::ieee_rem_a2_a4
end
end interface
private::ieee_rem_a2_a8
interface
elemental function ieee_rem_a2_a8(x,y)
real(2),intent(in)::x
real(8),intent(in)::y
real(2)::ieee_rem_a2_a8
end
end interface
private::ieee_rem_a2_a16
interface
elemental function ieee_rem_a2_a16(x,y)
real(2),intent(in)::x
real(16),intent(in)::y
real(2)::ieee_rem_a2_a16
end
end interface
private::ieee_rem_a3_a2
interface
elemental function ieee_rem_a3_a2(x,y)
real(3),intent(in)::x
real(2),intent(in)::y
real(3)::ieee_rem_a3_a2
end
end interface
private::ieee_rem_a3_a3
interface
elemental function ieee_rem_a3_a3(x,y)
real(3),intent(in)::x
real(3),intent(in)::y
real(3)::ieee_rem_a3_a3
end
end interface
private::ieee_rem_a3_a4
interface
elemental function ieee_rem_a3_a4(x,y)
real(3),intent(in)::x
real(4),intent(in)::y
real(3)::ieee_rem_a3_a4
end
end interface
private::ieee_rem_a3_a8
interface
elemental function ieee_rem_a3_a8(x,y)
real(3),intent(in)::x
real(8),intent(in)::y
real(3)::ieee_rem_a3_a8
end
end interface
private::ieee_rem_a3_a16
interface
elemental function ieee_rem_a3_a16(x,y)
real(3),intent(in)::x
real(16),intent(in)::y
real(3)::ieee_rem_a3_a16
end
end interface
private::ieee_rem_a4_a2
interface
elemental function ieee_rem_a4_a2(x,y)
real(4),intent(in)::x
real(2),intent(in)::y
real(4)::ieee_rem_a4_a2
end
end interface
private::ieee_rem_a4_a3
interface
elemental function ieee_rem_a4_a3(x,y)
real(4),intent(in)::x
real(3),intent(in)::y
real(4)::ieee_rem_a4_a3
end
end interface
private::ieee_rem_a4_a4
interface
elemental function ieee_rem_a4_a4(x,y)
real(4),intent(in)::x
real(4),intent(in)::y
real(4)::ieee_rem_a4_a4
end
end interface
private::ieee_rem_a4_a8
interface
elemental function ieee_rem_a4_a8(x,y)
real(4),intent(in)::x
real(8),intent(in)::y
real(4)::ieee_rem_a4_a8
end
end interface
private::ieee_rem_a4_a16
interface
elemental function ieee_rem_a4_a16(x,y)
real(4),intent(in)::x
real(16),intent(in)::y
real(4)::ieee_rem_a4_a16
end
end interface
private::ieee_rem_a8_a2
interface
elemental function ieee_rem_a8_a2(x,y)
real(8),intent(in)::x
real(2),intent(in)::y
real(8)::ieee_rem_a8_a2
end
end interface
private::ieee_rem_a8_a3
interface
elemental function ieee_rem_a8_a3(x,y)
real(8),intent(in)::x
real(3),intent(in)::y
real(8)::ieee_rem_a8_a3
end
end interface
private::ieee_rem_a8_a4
interface
elemental function ieee_rem_a8_a4(x,y)
real(8),intent(in)::x
real(4),intent(in)::y
real(8)::ieee_rem_a8_a4
end
end interface
private::ieee_rem_a8_a8
interface
elemental function ieee_rem_a8_a8(x,y)
real(8),intent(in)::x
real(8),intent(in)::y
real(8)::ieee_rem_a8_a8
end
end interface
private::ieee_rem_a8_a16
interface
elemental function ieee_rem_a8_a16(x,y)
real(8),intent(in)::x
real(16),intent(in)::y
real(8)::ieee_rem_a8_a16
end
end interface
private::ieee_rem_a16_a2
interface
elemental function ieee_rem_a16_a2(x,y)
real(16),intent(in)::x
real(2),intent(in)::y
real(16)::ieee_rem_a16_a2
end
end interface
private::ieee_rem_a16_a3
interface
elemental function ieee_rem_a16_a3(x,y)
real(16),intent(in)::x
real(3),intent(in)::y
real(16)::ieee_rem_a16_a3
end
end interface
private::ieee_rem_a16_a4
interface
elemental function ieee_rem_a16_a4(x,y)
real(16),intent(in)::x
real(4),intent(in)::y
real(16)::ieee_rem_a16_a4
end
end interface
private::ieee_rem_a16_a8
interface
elemental function ieee_rem_a16_a8(x,y)
real(16),intent(in)::x
real(8),intent(in)::y
real(16)::ieee_rem_a16_a8
end
end interface
private::ieee_rem_a16_a16
interface
elemental function ieee_rem_a16_a16(x,y)
real(16),intent(in)::x
real(16),intent(in)::y
real(16)::ieee_rem_a16_a16
end
end interface
interface ieee_rint
procedure::ieee_rint_a2
procedure::ieee_rint_a3
procedure::ieee_rint_a4
procedure::ieee_rint_a8
procedure::ieee_rint_a16
end interface
private::ieee_rint_a2
interface
elemental function ieee_rint_a2(x,round)
import::ieee_round_type
real(2),intent(in)::x
type(ieee_round_type),intent(in),optional::round
real(2)::ieee_rint_a2
end
end interface
private::ieee_rint_a3
interface
elemental function ieee_rint_a3(x,round)
import::ieee_round_type
real(3),intent(in)::x
type(ieee_round_type),intent(in),optional::round
real(3)::ieee_rint_a3
end
end interface
private::ieee_rint_a4
interface
elemental function ieee_rint_a4(x,round)
import::ieee_round_type
real(4),intent(in)::x
type(ieee_round_type),intent(in),optional::round
real(4)::ieee_rint_a4
end
end interface
private::ieee_rint_a8
interface
elemental function ieee_rint_a8(x,round)
import::ieee_round_type
real(8),intent(in)::x
type(ieee_round_type),intent(in),optional::round
real(8)::ieee_rint_a8
end
end interface
private::ieee_rint_a16
interface
elemental function ieee_rint_a16(x,round)
import::ieee_round_type
real(16),intent(in)::x
type(ieee_round_type),intent(in),optional::round
real(16)::ieee_rint_a16
end
end interface
interface ieee_set_rounding_mode
procedure::ieee_set_rounding_mode_0
procedure::ieee_set_rounding_mode_i1
procedure::ieee_set_rounding_mode_i2
procedure::ieee_set_rounding_mode_i4
procedure::ieee_set_rounding_mode_i8
procedure::ieee_set_rounding_mode_i16
end interface
interface
subroutine ieee_set_rounding_mode_0(round_value)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
end
end interface
private::ieee_set_rounding_mode_i1
interface
subroutine ieee_set_rounding_mode_i1(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
integer(1),intent(in)::radix
end
end interface
private::ieee_set_rounding_mode_i2
interface
subroutine ieee_set_rounding_mode_i2(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
integer(2),intent(in)::radix
end
end interface
private::ieee_set_rounding_mode_i4
interface
subroutine ieee_set_rounding_mode_i4(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
integer(4),intent(in)::radix
end
end interface
private::ieee_set_rounding_mode_i8
interface
subroutine ieee_set_rounding_mode_i8(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
integer(8),intent(in)::radix
end
end interface
private::ieee_set_rounding_mode_i16
interface
subroutine ieee_set_rounding_mode_i16(round_value,radix)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
integer(16),intent(in)::radix
end
end interface
interface ieee_set_underflow_mode
procedure::ieee_set_underflow_mode_l1
procedure::ieee_set_underflow_mode_l2
procedure::ieee_set_underflow_mode_l4
procedure::ieee_set_underflow_mode_l8
end interface
private::ieee_set_underflow_mode_l1
interface
subroutine ieee_set_underflow_mode_l1(gradual)
logical(1),intent(in)::gradual
end
end interface
private::ieee_set_underflow_mode_l2
interface
subroutine ieee_set_underflow_mode_l2(gradual)
logical(2),intent(in)::gradual
end
end interface
private::ieee_set_underflow_mode_l4
interface
subroutine ieee_set_underflow_mode_l4(gradual)
logical(4),intent(in)::gradual
end
end interface
private::ieee_set_underflow_mode_l8
interface
subroutine ieee_set_underflow_mode_l8(gradual)
logical(8),intent(in)::gradual
end
end interface
interface ieee_signaling_eq
procedure::ieee_signaling_eq_a2
procedure::ieee_signaling_eq_a3
procedure::ieee_signaling_eq_a4
procedure::ieee_signaling_eq_a8
procedure::ieee_signaling_eq_a16
end interface
private::ieee_signaling_eq_a2
interface
elemental function ieee_signaling_eq_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_signaling_eq_a2
end
end interface
private::ieee_signaling_eq_a3
interface
elemental function ieee_signaling_eq_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_signaling_eq_a3
end
end interface
private::ieee_signaling_eq_a4
interface
elemental function ieee_signaling_eq_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_signaling_eq_a4
end
end interface
private::ieee_signaling_eq_a8
interface
elemental function ieee_signaling_eq_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_signaling_eq_a8
end
end interface
private::ieee_signaling_eq_a16
interface
elemental function ieee_signaling_eq_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_signaling_eq_a16
end
end interface
interface ieee_signaling_ge
procedure::ieee_signaling_ge_a2
procedure::ieee_signaling_ge_a3
procedure::ieee_signaling_ge_a4
procedure::ieee_signaling_ge_a8
procedure::ieee_signaling_ge_a16
end interface
private::ieee_signaling_ge_a2
interface
elemental function ieee_signaling_ge_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_signaling_ge_a2
end
end interface
private::ieee_signaling_ge_a3
interface
elemental function ieee_signaling_ge_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_signaling_ge_a3
end
end interface
private::ieee_signaling_ge_a4
interface
elemental function ieee_signaling_ge_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_signaling_ge_a4
end
end interface
private::ieee_signaling_ge_a8
interface
elemental function ieee_signaling_ge_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_signaling_ge_a8
end
end interface
private::ieee_signaling_ge_a16
interface
elemental function ieee_signaling_ge_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_signaling_ge_a16
end
end interface
interface ieee_signaling_gt
procedure::ieee_signaling_gt_a2
procedure::ieee_signaling_gt_a3
procedure::ieee_signaling_gt_a4
procedure::ieee_signaling_gt_a8
procedure::ieee_signaling_gt_a16
end interface
private::ieee_signaling_gt_a2
interface
elemental function ieee_signaling_gt_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_signaling_gt_a2
end
end interface
private::ieee_signaling_gt_a3
interface
elemental function ieee_signaling_gt_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_signaling_gt_a3
end
end interface
private::ieee_signaling_gt_a4
interface
elemental function ieee_signaling_gt_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_signaling_gt_a4
end
end interface
private::ieee_signaling_gt_a8
interface
elemental function ieee_signaling_gt_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_signaling_gt_a8
end
end interface
private::ieee_signaling_gt_a16
interface
elemental function ieee_signaling_gt_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_signaling_gt_a16
end
end interface
interface ieee_signaling_le
procedure::ieee_signaling_le_a2
procedure::ieee_signaling_le_a3
procedure::ieee_signaling_le_a4
procedure::ieee_signaling_le_a8
procedure::ieee_signaling_le_a16
end interface
private::ieee_signaling_le_a2
interface
elemental function ieee_signaling_le_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_signaling_le_a2
end
end interface
private::ieee_signaling_le_a3
interface
elemental function ieee_signaling_le_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_signaling_le_a3
end
end interface
private::ieee_signaling_le_a4
interface
elemental function ieee_signaling_le_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_signaling_le_a4
end
end interface
private::ieee_signaling_le_a8
interface
elemental function ieee_signaling_le_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_signaling_le_a8
end
end interface
private::ieee_signaling_le_a16
interface
elemental function ieee_signaling_le_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_signaling_le_a16
end
end interface
interface ieee_signaling_lt
procedure::ieee_signaling_lt_a2
procedure::ieee_signaling_lt_a3
procedure::ieee_signaling_lt_a4
procedure::ieee_signaling_lt_a8
procedure::ieee_signaling_lt_a16
end interface
private::ieee_signaling_lt_a2
interface
elemental function ieee_signaling_lt_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_signaling_lt_a2
end
end interface
private::ieee_signaling_lt_a3
interface
elemental function ieee_signaling_lt_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_signaling_lt_a3
end
end interface
private::ieee_signaling_lt_a4
interface
elemental function ieee_signaling_lt_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_signaling_lt_a4
end
end interface
private::ieee_signaling_lt_a8
interface
elemental function ieee_signaling_lt_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_signaling_lt_a8
end
end interface
private::ieee_signaling_lt_a16
interface
elemental function ieee_signaling_lt_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_signaling_lt_a16
end
end interface
interface ieee_signaling_ne
procedure::ieee_signaling_ne_a2
procedure::ieee_signaling_ne_a3
procedure::ieee_signaling_ne_a4
procedure::ieee_signaling_ne_a8
procedure::ieee_signaling_ne_a16
end interface
private::ieee_signaling_ne_a2
interface
elemental function ieee_signaling_ne_a2(a,b)
real(2),intent(in)::a
real(2),intent(in)::b
logical(4)::ieee_signaling_ne_a2
end
end interface
private::ieee_signaling_ne_a3
interface
elemental function ieee_signaling_ne_a3(a,b)
real(3),intent(in)::a
real(3),intent(in)::b
logical(4)::ieee_signaling_ne_a3
end
end interface
private::ieee_signaling_ne_a4
interface
elemental function ieee_signaling_ne_a4(a,b)
real(4),intent(in)::a
real(4),intent(in)::b
logical(4)::ieee_signaling_ne_a4
end
end interface
private::ieee_signaling_ne_a8
interface
elemental function ieee_signaling_ne_a8(a,b)
real(8),intent(in)::a
real(8),intent(in)::b
logical(4)::ieee_signaling_ne_a8
end
end interface
private::ieee_signaling_ne_a16
interface
elemental function ieee_signaling_ne_a16(a,b)
real(16),intent(in)::a
real(16),intent(in)::b
logical(4)::ieee_signaling_ne_a16
end
end interface
interface ieee_signbit
procedure::ieee_signbit_a2
procedure::ieee_signbit_a3
procedure::ieee_signbit_a4
procedure::ieee_signbit_a8
procedure::ieee_signbit_a16
end interface
private::ieee_signbit_a2
interface
elemental function ieee_signbit_a2(x)
real(2),intent(in)::x
logical(4)::ieee_signbit_a2
end
end interface
private::ieee_signbit_a3
interface
elemental function ieee_signbit_a3(x)
real(3),intent(in)::x
logical(4)::ieee_signbit_a3
end
end interface
private::ieee_signbit_a4
interface
elemental function ieee_signbit_a4(x)
real(4),intent(in)::x
logical(4)::ieee_signbit_a4
end
end interface
private::ieee_signbit_a8
interface
elemental function ieee_signbit_a8(x)
real(8),intent(in)::x
logical(4)::ieee_signbit_a8
end
end interface
private::ieee_signbit_a16
interface
elemental function ieee_signbit_a16(x)
real(16),intent(in)::x
logical(4)::ieee_signbit_a16
end
end interface
interface ieee_support_rounding
procedure::ieee_support_rounding_0
procedure::ieee_support_rounding_a2
procedure::ieee_support_rounding_a3
procedure::ieee_support_rounding_a4
procedure::ieee_support_rounding_a8
procedure::ieee_support_rounding_a16
end interface
interface
pure function ieee_support_rounding_0(round_value)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
logical(4)::ieee_support_rounding_0
end
end interface
private::ieee_support_rounding_a2
interface
pure function ieee_support_rounding_a2(round_value,x)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
real(2),intent(in)::x(..)
logical(4)::ieee_support_rounding_a2
end
end interface
private::ieee_support_rounding_a3
interface
pure function ieee_support_rounding_a3(round_value,x)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
real(3),intent(in)::x(..)
logical(4)::ieee_support_rounding_a3
end
end interface
private::ieee_support_rounding_a4
interface
pure function ieee_support_rounding_a4(round_value,x)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
real(4),intent(in)::x(..)
logical(4)::ieee_support_rounding_a4
end
end interface
private::ieee_support_rounding_a8
interface
pure function ieee_support_rounding_a8(round_value,x)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
real(8),intent(in)::x(..)
logical(4)::ieee_support_rounding_a8
end
end interface
private::ieee_support_rounding_a16
interface
pure function ieee_support_rounding_a16(round_value,x)
import::ieee_round_type
type(ieee_round_type),intent(in)::round_value
real(16),intent(in)::x(..)
logical(4)::ieee_support_rounding_a16
end
end interface
interface ieee_unordered
procedure::ieee_unordered_a2_a2
procedure::ieee_unordered_a2_a3
procedure::ieee_unordered_a2_a4
procedure::ieee_unordered_a2_a8
procedure::ieee_unordered_a2_a16
procedure::ieee_unordered_a3_a2
procedure::ieee_unordered_a3_a3
procedure::ieee_unordered_a3_a4
procedure::ieee_unordered_a3_a8
procedure::ieee_unordered_a3_a16
procedure::ieee_unordered_a4_a2
procedure::ieee_unordered_a4_a3
procedure::ieee_unordered_a4_a4
procedure::ieee_unordered_a4_a8
procedure::ieee_unordered_a4_a16
procedure::ieee_unordered_a8_a2
procedure::ieee_unordered_a8_a3
procedure::ieee_unordered_a8_a4
procedure::ieee_unordered_a8_a8
procedure::ieee_unordered_a8_a16
procedure::ieee_unordered_a16_a2
procedure::ieee_unordered_a16_a3
procedure::ieee_unordered_a16_a4
procedure::ieee_unordered_a16_a8
procedure::ieee_unordered_a16_a16
end interface
private::ieee_unordered_a2_a2
interface
elemental function ieee_unordered_a2_a2(x,y)
real(2),intent(in)::x
real(2),intent(in)::y
logical(4)::ieee_unordered_a2_a2
end
end interface
private::ieee_unordered_a2_a3
interface
elemental function ieee_unordered_a2_a3(x,y)
real(2),intent(in)::x
real(3),intent(in)::y
logical(4)::ieee_unordered_a2_a3
end
end interface
private::ieee_unordered_a2_a4
interface
elemental function ieee_unordered_a2_a4(x,y)
real(2),intent(in)::x
real(4),intent(in)::y
logical(4)::ieee_unordered_a2_a4
end
end interface
private::ieee_unordered_a2_a8
interface
elemental function ieee_unordered_a2_a8(x,y)
real(2),intent(in)::x
real(8),intent(in)::y
logical(4)::ieee_unordered_a2_a8
end
end interface
private::ieee_unordered_a2_a16
interface
elemental function ieee_unordered_a2_a16(x,y)
real(2),intent(in)::x
real(16),intent(in)::y
logical(4)::ieee_unordered_a2_a16
end
end interface
private::ieee_unordered_a3_a2
interface
elemental function ieee_unordered_a3_a2(x,y)
real(3),intent(in)::x
real(2),intent(in)::y
logical(4)::ieee_unordered_a3_a2
end
end interface
private::ieee_unordered_a3_a3
interface
elemental function ieee_unordered_a3_a3(x,y)
real(3),intent(in)::x
real(3),intent(in)::y
logical(4)::ieee_unordered_a3_a3
end
end interface
private::ieee_unordered_a3_a4
interface
elemental function ieee_unordered_a3_a4(x,y)
real(3),intent(in)::x
real(4),intent(in)::y
logical(4)::ieee_unordered_a3_a4
end
end interface
private::ieee_unordered_a3_a8
interface
elemental function ieee_unordered_a3_a8(x,y)
real(3),intent(in)::x
real(8),intent(in)::y
logical(4)::ieee_unordered_a3_a8
end
end interface
private::ieee_unordered_a3_a16
interface
elemental function ieee_unordered_a3_a16(x,y)
real(3),intent(in)::x
real(16),intent(in)::y
logical(4)::ieee_unordered_a3_a16
end
end interface
private::ieee_unordered_a4_a2
interface
elemental function ieee_unordered_a4_a2(x,y)
real(4),intent(in)::x
real(2),intent(in)::y
logical(4)::ieee_unordered_a4_a2
end
end interface
private::ieee_unordered_a4_a3
interface
elemental function ieee_unordered_a4_a3(x,y)
real(4),intent(in)::x
real(3),intent(in)::y
logical(4)::ieee_unordered_a4_a3
end
end interface
private::ieee_unordered_a4_a4
interface
elemental function ieee_unordered_a4_a4(x,y)
real(4),intent(in)::x
real(4),intent(in)::y
logical(4)::ieee_unordered_a4_a4
end
end interface
private::ieee_unordered_a4_a8
interface
elemental function ieee_unordered_a4_a8(x,y)
real(4),intent(in)::x
real(8),intent(in)::y
logical(4)::ieee_unordered_a4_a8
end
end interface
private::ieee_unordered_a4_a16
interface
elemental function ieee_unordered_a4_a16(x,y)
real(4),intent(in)::x
real(16),intent(in)::y
logical(4)::ieee_unordered_a4_a16
end
end interface
private::ieee_unordered_a8_a2
interface
elemental function ieee_unordered_a8_a2(x,y)
real(8),intent(in)::x
real(2),intent(in)::y
logical(4)::ieee_unordered_a8_a2
end
end interface
private::ieee_unordered_a8_a3
interface
elemental function ieee_unordered_a8_a3(x,y)
real(8),intent(in)::x
real(3),intent(in)::y
logical(4)::ieee_unordered_a8_a3
end
end interface
private::ieee_unordered_a8_a4
interface
elemental function ieee_unordered_a8_a4(x,y)
real(8),intent(in)::x
real(4),intent(in)::y
logical(4)::ieee_unordered_a8_a4
end
end interface
private::ieee_unordered_a8_a8
interface
elemental function ieee_unordered_a8_a8(x,y)
real(8),intent(in)::x
real(8),intent(in)::y
logical(4)::ieee_unordered_a8_a8
end
end interface
private::ieee_unordered_a8_a16
interface
elemental function ieee_unordered_a8_a16(x,y)
real(8),intent(in)::x
real(16),intent(in)::y
logical(4)::ieee_unordered_a8_a16
end
end interface
private::ieee_unordered_a16_a2
interface
elemental function ieee_unordered_a16_a2(x,y)
real(16),intent(in)::x
real(2),intent(in)::y
logical(4)::ieee_unordered_a16_a2
end
end interface
private::ieee_unordered_a16_a3
interface
elemental function ieee_unordered_a16_a3(x,y)
real(16),intent(in)::x
real(3),intent(in)::y
logical(4)::ieee_unordered_a16_a3
end
end interface
private::ieee_unordered_a16_a4
interface
elemental function ieee_unordered_a16_a4(x,y)
real(16),intent(in)::x
real(4),intent(in)::y
logical(4)::ieee_unordered_a16_a4
end
end interface
private::ieee_unordered_a16_a8
interface
elemental function ieee_unordered_a16_a8(x,y)
real(16),intent(in)::x
real(8),intent(in)::y
logical(4)::ieee_unordered_a16_a8
end
end interface
private::ieee_unordered_a16_a16
interface
elemental function ieee_unordered_a16_a16(x,y)
real(16),intent(in)::x
real(16),intent(in)::y
logical(4)::ieee_unordered_a16_a16
end
end interface
interface ieee_value
procedure::ieee_value_a2
procedure::ieee_value_a3
procedure::ieee_value_a4
procedure::ieee_value_a8
procedure::ieee_value_a16
end interface
private::ieee_value_a2
interface
elemental function ieee_value_a2(x,class)
import::ieee_class_type
real(2),intent(in)::x
type(ieee_class_type),intent(in)::class
real(2)::ieee_value_a2
end
end interface
private::ieee_value_a3
interface
elemental function ieee_value_a3(x,class)
import::ieee_class_type
real(3),intent(in)::x
type(ieee_class_type),intent(in)::class
real(3)::ieee_value_a3
end
end interface
private::ieee_value_a4
interface
elemental function ieee_value_a4(x,class)
import::ieee_class_type
real(4),intent(in)::x
type(ieee_class_type),intent(in)::class
real(4)::ieee_value_a4
end
end interface
private::ieee_value_a8
interface
elemental function ieee_value_a8(x,class)
import::ieee_class_type
real(8),intent(in)::x
type(ieee_class_type),intent(in)::class
real(8)::ieee_value_a8
end
end interface
private::ieee_value_a16
interface
elemental function ieee_value_a16(x,class)
import::ieee_class_type
real(16),intent(in)::x
type(ieee_class_type),intent(in)::class
real(16)::ieee_value_a16
end
end interface
end
