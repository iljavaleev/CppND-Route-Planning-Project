!mod$ v1 sum:be631cdaad130ed1
module __fortran_ieee_exceptions
type::ieee_flag_type
integer(1),private::flag=0_1
end type
type(ieee_flag_type),parameter::ieee_invalid=ieee_flag_type(flag=1_1)
type(ieee_flag_type),parameter::ieee_overflow=ieee_flag_type(flag=2_1)
type(ieee_flag_type),parameter::ieee_divide_by_zero=ieee_flag_type(flag=4_1)
type(ieee_flag_type),parameter::ieee_underflow=ieee_flag_type(flag=8_1)
type(ieee_flag_type),parameter::ieee_inexact=ieee_flag_type(flag=16_1)
type(ieee_flag_type),parameter::ieee_denorm=ieee_flag_type(flag=32_1)
type(ieee_flag_type),parameter::ieee_usual(1_8:*)=[ieee_flag_type::ieee_flag_type(flag=2_1),ieee_flag_type(flag=4_1),ieee_flag_type(flag=1_1)]
type(ieee_flag_type),parameter::ieee_all(1_8:*)=[ieee_flag_type::ieee_flag_type(flag=2_1),ieee_flag_type(flag=4_1),ieee_flag_type(flag=1_1),ieee_flag_type(flag=8_1),ieee_flag_type(flag=16_1),ieee_flag_type(flag=32_1)]
type::ieee_modes_type
end type
type::ieee_status_type
end type
interface ieee_get_flag
procedure::ieee_get_flag_0
end interface
interface
elemental subroutine ieee_get_flag_0(flag,flag_value)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
logical(4),intent(out)::flag_value
end
end interface
interface ieee_get_halting_mode
procedure::ieee_get_halting_mode_0
end interface
interface
elemental subroutine ieee_get_halting_mode_0(flag,halting)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
logical(4),intent(out)::halting
end
end interface
interface ieee_get_modes
procedure::ieee_get_modes_0
end interface
interface
subroutine ieee_get_modes_0(modes)
import::ieee_modes_type
type(ieee_modes_type),intent(out)::modes
end
end interface
interface ieee_get_status
procedure::ieee_get_status_0
end interface
interface
subroutine ieee_get_status_0(status)
import::ieee_status_type
type(ieee_status_type),intent(out)::status
end
end interface
interface ieee_set_flag
procedure::ieee_set_flag_l1
procedure::ieee_set_flag_l2
procedure::ieee_set_flag_l4
procedure::ieee_set_flag_l8
end interface
private::ieee_set_flag_l1
interface
pure subroutine ieee_set_flag_l1(flag,flag_value)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(1),intent(in)::flag_value(..)
end
end interface
private::ieee_set_flag_l2
interface
pure subroutine ieee_set_flag_l2(flag,flag_value)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(2),intent(in)::flag_value(..)
end
end interface
private::ieee_set_flag_l4
interface
pure subroutine ieee_set_flag_l4(flag,flag_value)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(4),intent(in)::flag_value(..)
end
end interface
private::ieee_set_flag_l8
interface
pure subroutine ieee_set_flag_l8(flag,flag_value)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(8),intent(in)::flag_value(..)
end
end interface
integer(4),private::ieee_set_flag_1
interface ieee_set_halting_mode
procedure::ieee_set_halting_mode_l1
procedure::ieee_set_halting_mode_l2
procedure::ieee_set_halting_mode_l4
procedure::ieee_set_halting_mode_l8
end interface
private::ieee_set_halting_mode_l1
interface
pure subroutine ieee_set_halting_mode_l1(flag,halting)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(1),intent(in)::halting(..)
end
end interface
private::ieee_set_halting_mode_l2
interface
pure subroutine ieee_set_halting_mode_l2(flag,halting)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(2),intent(in)::halting(..)
end
end interface
private::ieee_set_halting_mode_l4
interface
pure subroutine ieee_set_halting_mode_l4(flag,halting)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(4),intent(in)::halting(..)
end
end interface
private::ieee_set_halting_mode_l8
interface
pure subroutine ieee_set_halting_mode_l8(flag,halting)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag(..)
logical(8),intent(in)::halting(..)
end
end interface
integer(4),private::ieee_set_halting_mode_1
interface ieee_set_modes
procedure::ieee_set_modes_0
end interface
interface
subroutine ieee_set_modes_0(modes)
import::ieee_modes_type
type(ieee_modes_type),intent(in)::modes
end
end interface
interface ieee_set_status
procedure::ieee_set_status_0
end interface
interface
subroutine ieee_set_status_0(status)
import::ieee_status_type
type(ieee_status_type),intent(in)::status
end
end interface
interface ieee_support_flag
procedure::ieee_support_flag_0
procedure::ieee_support_flag_a2
procedure::ieee_support_flag_a3
procedure::ieee_support_flag_a4
procedure::ieee_support_flag_a8
procedure::ieee_support_flag_a16
end interface
interface
pure function ieee_support_flag_0(flag)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
logical(4)::ieee_support_flag_0
end
end interface
private::ieee_support_flag_a2
interface
pure function ieee_support_flag_a2(flag,x)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
real(2),intent(in)::x(..)
logical(4)::ieee_support_flag_a2
end
end interface
private::ieee_support_flag_a3
interface
pure function ieee_support_flag_a3(flag,x)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
real(3),intent(in)::x(..)
logical(4)::ieee_support_flag_a3
end
end interface
private::ieee_support_flag_a4
interface
pure function ieee_support_flag_a4(flag,x)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
real(4),intent(in)::x(..)
logical(4)::ieee_support_flag_a4
end
end interface
private::ieee_support_flag_a8
interface
pure function ieee_support_flag_a8(flag,x)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
real(8),intent(in)::x(..)
logical(4)::ieee_support_flag_a8
end
end interface
private::ieee_support_flag_a16
interface
pure function ieee_support_flag_a16(flag,x)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
real(16),intent(in)::x(..)
logical(4)::ieee_support_flag_a16
end
end interface
interface ieee_support_halting
procedure::ieee_support_halting_0
end interface
interface
pure function ieee_support_halting_0(flag)
import::ieee_flag_type
type(ieee_flag_type),intent(in)::flag
logical(4)::ieee_support_halting_0
end
end interface
end
