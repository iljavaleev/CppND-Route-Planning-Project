!mod$ v1 sum:58ad3fa5b390a82e
module omp_lib
integer(4),parameter::omp_integer_kind=4_4
intrinsic::selected_int_kind
integer(4),parameter::omp_logical_kind=4_4
intrinsic::kind
integer(4),parameter::omp_sched_kind=4_4
integer(4),parameter::omp_proc_bind_kind=4_4
integer(4),parameter::omp_pause_resource_kind=4_4
integer(4),parameter::omp_sync_hint_kind=4_4
integer(4),parameter::omp_lock_hint_kind=4_4
integer(4),parameter::omp_event_handle_kind=4_4
integer(4),parameter::omp_alloctrait_key_kind=4_4
integer(4),parameter::omp_alloctrait_val_kind=4_4
integer(4),parameter::omp_allocator_handle_kind=4_4
integer(4),parameter::omp_memspace_handle_kind=4_4
integer(4),parameter::omp_lock_kind=8_4
intrinsic::int_ptr_kind
integer(4),parameter::omp_nest_lock_kind=8_4
integer(4),parameter::omp_depend_kind=4_4
integer(4),parameter::omp_sched_static=1_4
integer(4),parameter::omp_sched_dynamic=2_4
integer(4),parameter::omp_sched_guided=3_4
integer(4),parameter::omp_sched_auto=4_4
integer(4),parameter::omp_proc_bind_false=0_4
integer(4),parameter::omp_proc_bind_true=1_4
integer(4),parameter::omp_proc_bind_master=2_4
integer(4),parameter::omp_proc_bind_close=3_4
integer(4),parameter::omp_proc_bind_spread=4_4
integer(4),parameter::omp_pause_soft=1_4
integer(4),parameter::omp_pause_hard=2_4
integer(4),parameter::omp_sync_hint_none=0_4
integer(4),parameter::omp_sync_hint_uncontended=1_4
integer(4),parameter::omp_sync_hint_contended=2_4
integer(4),parameter::omp_sync_hint_nonspeculative=4_4
integer(4),parameter::omp_sync_hint_speculative=8_4
integer(4),parameter::omp_lock_hint_none=0_4
integer(4),parameter::omp_lock_hint_uncontended=1_4
integer(4),parameter::omp_lock_hint_contended=2_4
integer(4),parameter::omp_lock_hint_nonspeculative=4_4
integer(4),parameter::omp_lock_hint_speculative=8_4
integer(4),parameter::omp_allow_completion_event=0_4
integer(4),parameter::omp_task_fulfill_event=1_4
integer(4),parameter::omp_atk_sync_hint=1_4
integer(4),parameter::omp_atk_alignment=2_4
integer(4),parameter::omp_atk_access=3_4
integer(4),parameter::omp_atk_pool_size=4_4
integer(4),parameter::omp_atk_fallback=5_4
integer(4),parameter::omp_atk_fb_data=6_4
integer(4),parameter::omp_atk_pinned=7_4
integer(4),parameter::omp_atk_partition=8_4
integer(4),parameter::omp_atv_false=0_4
integer(4),parameter::omp_atv_true=1_4
integer(4),parameter::omp_atv_default=2_4
integer(4),parameter::omp_atv_contended=3_4
integer(4),parameter::omp_atv_uncontended=4_4
integer(4),parameter::omp_atv_sequential=5_4
integer(4),parameter::omp_atv_private=6_4
integer(4),parameter::omp_atv_all=7_4
integer(4),parameter::omp_atv_thread=8_4
integer(4),parameter::omp_atv_pteam=9_4
integer(4),parameter::omp_atv_cgroup=10_4
integer(4),parameter::omp_atv_default_mem_fb=11_4
integer(4),parameter::omp_atv_null_fb=12_4
integer(4),parameter::omp_atv_abort_fb=13_4
integer(4),parameter::omp_atv_allocator_fb=14_4
integer(4),parameter::omp_atv_environment=15_4
integer(4),parameter::omp_atv_nearest=16_4
integer(4),parameter::omp_atv_blocked=17_4
integer(4),parameter::omp_atv_interleaved=18_4
type::omp_alloctrait
integer(4)::key
integer(4)::value
end type
integer(4),parameter::omp_null_allocator=0_4
integer(4),parameter::omp_default_mem_space=0_4
integer(4),parameter::omp_large_cap_mem_space=0_4
integer(4),parameter::omp_const_mem_space=0_4
integer(4),parameter::omp_high_bw_mem_space=0_4
integer(4),parameter::omp_low_lat_mem_space=0_4
integer(4),parameter::omp_default_mem_alloc=1_4
integer(4),parameter::omp_large_cap_mem_alloc=1_4
integer(4),parameter::omp_const_mem_alloc=1_4
integer(4),parameter::omp_high_bw_mem_alloc=1_4
integer(4),parameter::omp_low_lat_mem_alloc=1_4
integer(4),parameter::omp_thread_mem_alloc=8_4
integer(4),parameter::omp_pteam_mem_alloc=9_4
integer(4),parameter::omp_cgroup_mem_alloc=10_4
integer(4),parameter::openmp_version=200805_4
interface
subroutine omp_set_num_threads(nthreads) bind(c, name="omp_set_num_threads")
integer(4),value::nthreads
end
end interface
interface
function omp_get_num_threads() bind(c, name="omp_get_num_threads")
integer(4)::omp_get_num_threads
end
end interface
interface
function omp_get_max_threads() bind(c, name="omp_get_max_threads")
integer(4)::omp_get_max_threads
end
end interface
interface
function omp_get_thread_num() bind(c, name="omp_get_thread_num")
integer(4)::omp_get_thread_num
end
end interface
interface
function omp_get_num_procs() bind(c, name="omp_get_num_procs")
integer(4)::omp_get_num_procs
end
end interface
interface
function omp_in_parallel() bind(c, name="omp_in_parallel")
logical(4)::omp_in_parallel
end
end interface
interface
subroutine omp_set_dynamic(enable) bind(c, name="omp_set_dynamic")
logical(4),value::enable
end
end interface
interface
function omp_get_dynamic() bind(c, name="omp_get_dynamic")
logical(4)::omp_get_dynamic
end
end interface
interface
function omp_get_cancelation() bind(c, name="omp_get_cancelation")
logical(4)::omp_get_cancelation
end
end interface
interface
subroutine omp_set_nested(enable) bind(c, name="omp_set_nested")
logical(4),value::enable
end
end interface
interface
function omp_get_nested() bind(c, name="omp_get_nested")
logical(4)::omp_get_nested
end
end interface
interface
subroutine omp_set_schedule(kind,modifier) bind(c, name="omp_set_schedule")
integer(4),value::kind
integer(4),value::modifier
end
end interface
interface
subroutine omp_get_schedule(kind,modifier) bind(c, name="omp_get_schedule")
integer(4),intent(out)::kind
integer(4),intent(out)::modifier
end
end interface
interface
function omp_get_thread_limit() bind(c, name="omp_get_thread_limit")
integer(4)::omp_get_thread_limit
end
end interface
interface
function omp_get_supported_active_levels() bind(c, name="omp_get_supported_active_levels")
integer(4)::omp_get_supported_active_levels
end
end interface
interface
subroutine omp_set_max_active_levels(max_levels) bind(c, name="omp_set_max_active_levels")
integer(4),value::max_levels
end
end interface
interface
function omp_get_max_active_levels() bind(c, name="omp_get_max_active_levels")
integer(4)::omp_get_max_active_levels
end
end interface
interface
function omp_get_level() bind(c, name="omp_get_level")
integer(4)::omp_get_level
end
end interface
interface
function omp_get_ancestor_thread_num(level) bind(c, name="omp_get_ancestor_thread_num")
integer(4),value::level
integer(4)::omp_get_ancestor_thread_num
end
end interface
interface
function omp_get_team_size(level) bind(c, name="omp_get_team_size")
integer(4),value::level
integer(4)::omp_get_team_size
end
end interface
interface
function omp_get_active_level() bind(c, name="omp_get_active_level")
integer(4)::omp_get_active_level
end
end interface
interface
function omp_in_final() bind(c, name="omp_in_final")
logical(4)::omp_in_final
end
end interface
interface
function omp_get_proc_bind() bind(c, name="omp_get_proc_bind")
integer(4)::omp_get_proc_bind
end
end interface
interface
function omp_get_num_places() bind(c, name="omp_get_num_places")
integer(4)::omp_get_num_places
end
end interface
interface
function omp_get_place_num_procs(place_num) bind(c, name="omp_get_place_num_procs")
integer(4),value::place_num
integer(4)::omp_get_place_num_procs
end
end interface
interface
subroutine omp_get_place_proc_ids(place_num,ids) bind(c, name="omp_get_place_proc_ids")
integer(4),value::place_num
integer(4),intent(out)::ids(1_8:*)
end
end interface
interface
function omp_get_place_num() bind(c, name="omp_get_place_num")
integer(4)::omp_get_place_num
end
end interface
interface
function omp_get_partition_num_places() bind(c, name="omp_get_partition_num_places")
integer(4)::omp_get_partition_num_places
end
end interface
interface
subroutine omp_get_partition_place_nums(place_nums) bind(c, name="omp_get_partition_place_nums")
integer(4),intent(out)::place_nums(1_8:*)
end
end interface
interface
subroutine omp_set_affinity_format(format)
character(*,1),intent(in)::format
end
end interface
interface
function omp_get_affinity_format(buffer)
character(*,1),intent(out)::buffer
integer(4)::omp_get_affinity_format
end
end interface
interface
subroutine omp_display_affinity(format)
character(*,1),intent(in)::format
end
end interface
interface
function omp_capture_affinity(buffer,format)
character(*,1),intent(out)::buffer
character(*,1),intent(in)::format
integer(4)::omp_capture_affinity
end
end interface
interface
subroutine omp_set_default_device(device_num) bind(c, name="omp_set_default_device")
integer(4),value::device_num
end
end interface
interface
function omp_get_default_device() bind(c, name="omp_get_default_device")
integer(4)::omp_get_default_device
end
end interface
interface
function omp_get_num_devices() bind(c, name="omp_get_num_devices")
integer(4)::omp_get_num_devices
end
end interface
interface
function omp_get_device_num() bind(c, name="omp_get_device_num")
integer(4)::omp_get_device_num
end
end interface
interface
function omp_get_num_teams() bind(c, name="omp_get_num_teams")
integer(4)::omp_get_num_teams
end
end interface
interface
function omp_get_team_num() bind(c, name="omp_get_team_num")
integer(4)::omp_get_team_num
end
end interface
interface
function omp_is_initial_device() bind(c, name="omp_is_initial_device")
integer(4)::omp_is_initial_device
end
end interface
interface
function omp_get_initial_device() bind(c, name="omp_get_initial_device")
integer(4)::omp_get_initial_device
end
end interface
interface
function omp_get_max_task_priority() bind(c, name="omp_get_max_task_priority")
integer(4)::omp_get_max_task_priority
end
end interface
interface
function omp_pause_resource(kind,device_num) bind(c, name="omp_pause_resource")
integer(4),value::kind
integer(4),value::device_num
integer(4)::omp_pause_resource
end
end interface
interface
function omp_pause_resource_all(kind)
integer(4),value::kind
integer(4)::omp_pause_resource_all
end
end interface
interface
subroutine omp_init_lock(lockvar) bind(c, name="omp_init_lock_")
integer(8),intent(out)::lockvar
end
end interface
interface
subroutine omp_init_lock_with_hint(lockvar,hint) bind(c, name="omp_init_lock_with_hint_")
integer(8),intent(out)::lockvar
integer(4),value::hint
end
end interface
interface
subroutine omp_destroy_lock(lockvar) bind(c, name="omp_destroy_lock_")
integer(8),intent(inout)::lockvar
end
end interface
interface
subroutine omp_set_lock(lockvar) bind(c, name="omp_set_lock_")
integer(8),intent(inout)::lockvar
end
end interface
interface
subroutine omp_unset_lock(lockvar) bind(c, name="omp_unset_lock_")
integer(8),intent(inout)::lockvar
end
end interface
interface
function omp_test_lock(lockvar) bind(c, name="omp_test_lock_")
integer(8),intent(inout)::lockvar
logical(4)::omp_test_lock
end
end interface
interface
subroutine omp_init_nest_lock(lockvar) bind(c, name="omp_init_nest_lock_")
integer(8),intent(out)::lockvar
end
end interface
interface
subroutine omp_init_nest_lock_with_hint(lockvar,hint) bind(c, name="omp_init_nest_lock_with_hint_")
integer(8),intent(out)::lockvar
integer(4),value::hint
end
end interface
interface
subroutine omp_destroy_nest_lock(lockvar) bind(c, name="omp_destroy_nest_lock_")
integer(8),intent(inout)::lockvar
end
end interface
interface
subroutine omp_set_nest_lock(lockvar) bind(c, name="omp_set_nest_lock_")
integer(8),intent(inout)::lockvar
end
end interface
interface
subroutine omp_unset_nest_lock(lockvar) bind(c, name="omp_unset_nest_lock_")
integer(8),intent(inout)::lockvar
end
end interface
interface
function omp_test_nest_lock(lockvar) bind(c, name="omp_test_nest_lock_")
integer(8),intent(inout)::lockvar
integer(4)::omp_test_nest_lock
end
end interface
interface
function omp_get_wtime() bind(c, name="omp_get_wtime")
real(8)::omp_get_wtime
end
end interface
interface
function omp_get_wtick() bind(c, name="omp_get_wtick")
real(8)::omp_get_wtick
end
end interface
interface
subroutine omp_fullfill_event(event) bind(c, name="omp_fullfill_event")
integer(4)::event
end
end interface
interface
function omp_init_allocator(memspace,ntraits,traits)
import::omp_alloctrait
integer(4),value::memspace
integer(4),value::ntraits
type(omp_alloctrait),intent(in)::traits(1_8:*)
integer(4)::omp_init_allocator
end
end interface
interface
subroutine omp_destroy_allocator(allocator) bind(c, name="omp_destroy_allocator")
integer(4),value::allocator
end
end interface
interface
subroutine omp_set_default_allocator(allocator) bind(c, name="omp_set_default_allocator")
integer(4),value::allocator
end
end interface
interface
function omp_get_default_allocator()
integer(4)::omp_get_default_allocator
end
end interface
end
