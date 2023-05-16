!mod$ v1 sum:6b61c23b8738f34c
module iso_fortran_env
use __fortran_builtins,only:event_type=>__builtin_event_type
use __fortran_builtins,only:lock_type=>__builtin_lock_type
use __fortran_builtins,only:team_type=>__builtin_team_type
use __fortran_builtins,only:atomic_int_kind=>__builtin_atomic_int_kind
use __fortran_builtins,only:atomic_logical_kind=>__builtin_atomic_logical_kind
integer(4),parameter,private::selectedascii=1_4
intrinsic::selected_char_kind
integer(4),parameter,private::selecteducs_2=2_4
integer(4),parameter,private::selectedunicode=4_4
integer(4),parameter::character_kinds(1_8:*)=[INTEGER(4)::1_4,2_4,4_4]
intrinsic::count
integer(4),parameter,private::selectedint8=1_4
intrinsic::selected_int_kind
integer(4),parameter,private::selectedint16=2_4
integer(4),parameter,private::selectedint32=4_4
integer(4),parameter,private::selectedint64=8_4
integer(4),parameter,private::selectedint128=16_4
integer(4),parameter,private::safeint8=1_4
intrinsic::merge
integer(4),parameter,private::safeint16=2_4
integer(4),parameter,private::safeint32=4_4
integer(4),parameter,private::safeint64=8_4
integer(4),parameter,private::safeint128=16_4
integer(4),parameter::int8=1_4
intrinsic::digits
intrinsic::int
integer(4),parameter::int16=2_4
integer(4),parameter::int32=4_4
integer(4),parameter::int64=8_4
integer(4),parameter::int128=16_4
integer(4),parameter::integer_kinds(1_8:*)=[INTEGER(4)::1_4,2_4,4_4,8_4,16_4]
integer(4),parameter::logical8=1_4
integer(4),parameter::logical16=2_4
integer(4),parameter::logical32=4_4
integer(4),parameter::logical64=8_4
integer(4),parameter::logical_kinds(1_8:*)=[INTEGER(4)::1_4,2_4,4_4,8_4]
integer(4),parameter,private::selectedreal16=2_4
intrinsic::selected_real_kind
integer(4),parameter,private::selectedbfloat16=3_4
integer(4),parameter,private::selectedreal32=4_4
integer(4),parameter,private::selectedreal64=8_4
integer(4),parameter,private::selectedreal80=16_4
integer(4),parameter,private::selectedreal64x2=16_4
integer(4),parameter,private::selectedreal128=16_4
integer(4),parameter,private::safereal16=2_4
integer(4),parameter,private::safebfloat16=3_4
integer(4),parameter,private::safereal32=4_4
integer(4),parameter,private::safereal64=8_4
integer(4),parameter,private::safereal80=16_4
integer(4),parameter,private::safereal64x2=16_4
integer(4),parameter,private::safereal128=16_4
integer(4),parameter::real16=2_4
intrinsic::real
integer(4),parameter::bfloat16=3_4
integer(4),parameter::real32=4_4
integer(4),parameter::real64=8_4
integer(4),parameter::real80=-2_4
integer(4),parameter::real64x2=-2_4
integer(4),parameter::real128=16_4
integer(4),parameter::real_kinds(1_8:*)=[INTEGER(4)::2_4,3_4,4_4,8_4,16_4]
integer(4),parameter::current_team=-1_4
integer(4),parameter::initial_team=-2_4
integer(4),parameter::parent_team=-3_4
integer(4),parameter::input_unit=5_4
integer(4),parameter::output_unit=6_4
integer(4),parameter::error_unit=0_4
integer(4),parameter::iostat_end=(-1_4)
integer(4),parameter::iostat_eor=(-2_4)
integer(4),parameter::iostat_inquire_internal_unit=256_4
integer(4),parameter::character_storage_size=8_4
integer(4),parameter::file_storage_size=8_4
integer(4),parameter::numeric_storage_size=32_4
integer(4),parameter::stat_failed_image=101_4
integer(4),parameter::stat_locked=102_4
integer(4),parameter::stat_locked_other_image=103_4
integer(4),parameter::stat_stopped_image=104_4
integer(4),parameter::stat_unlocked=105_4
integer(4),parameter::stat_unlocked_failed_image=106_4
interface compiler_options
procedure::compiler_options_1
end interface
interface
function compiler_options_1()
character(80_4,1)::compiler_options_1
end
end interface
interface compiler_version
procedure::compiler_version_1
end interface
interface
function compiler_version_1()
character(80_4,1)::compiler_version_1
end
end interface
end
