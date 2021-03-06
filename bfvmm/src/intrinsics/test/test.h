//
// Bareflank Hypervisor
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#ifndef TEST_H
#define TEST_H

#include <unittest.h>

class intrinsics_ut : public unittest
{
public:

    intrinsics_ut();
    ~intrinsics_ut() override = default;

protected:

    bool init() override;
    bool fini() override;
    bool list() override;

private:

    void test_gdt_constructor_no_size();
    void test_gdt_constructor_zero_size();
    void test_gdt_constructor_size();
    void test_gdt_constructor_null_intrinsics();
    void test_gdt_base();
    void test_gdt_limit();
    void test_gdt_set_base_zero_index();
    void test_gdt_set_base_invalid_index();
    void test_gdt_set_base_tss_at_end_of_gdt();
    void test_gdt_set_base_descriptor_success();
    void test_gdt_set_base_tss_success();
    void test_gdt_base_zero_index();
    void test_gdt_base_invalid_index();
    void test_gdt_base_tss_at_end_of_gdt();
    void test_gdt_base_descriptor_success();
    void test_gdt_base_tss_success();
    void test_gdt_set_limit_zero_index();
    void test_gdt_set_limit_invalid_index();
    void test_gdt_set_limit_descriptor_success();
    void test_gdt_limit_zero_index();
    void test_gdt_limit_invalid_index();
    void test_gdt_limit_descriptor_success();
    void test_gdt_limit_descriptor_in_bytes_success();
    void test_gdt_set_access_rights_zero_index();
    void test_gdt_set_access_rights_invalid_index();
    void test_gdt_set_access_rights_descriptor_success();
    void test_gdt_access_rights_zero_index();
    void test_gdt_access_rights_invalid_index();
    void test_gdt_access_rights_descriptor_success();

    void test_idt_constructor_no_size();
    void test_idt_constructor_zero_size();
    void test_idt_constructor_size();
    void test_idt_constructor_null_intrinsics();
    void test_idt_base();
    void test_idt_limit();

    void test_ia32_feature_control();
    void test_ia32_feature_control_lock_bit();
    void test_ia32_feature_control_enable_vmx_inside_smx();
    void test_ia32_feature_control_enable_vmx_outside_smx();
    void test_ia32_vmx_basic();
    void test_ia32_vmx_basic_revision_id();
    void test_ia32_vmx_basic_vmxon_vmcs_region_size();
    void test_ia32_vmx_basic_physical_address_width();
    void test_ia32_vmx_basic_dual_monitor_mode_support();
    void test_ia32_vmx_basic_memory_type();
    void test_ia32_vmx_basic_ins_outs_exit_information();
    void test_ia32_vmx_basic_true_based_controls();
    void test_ia32_vmx_misc();
    void test_ia32_vmx_misc_preemption_timer_decrement();
    void test_ia32_vmx_misc_store_efer_lma_on_vm_exit();
    void test_ia32_vmx_misc_activity_state_hlt_support();
    void test_ia32_vmx_misc_activity_state_shutdown_support();
    void test_ia32_vmx_misc_activity_state_wait_for_sipi_support();
    void test_ia32_vmx_misc_processor_trace_support();
    void test_ia32_vmx_misc_rdmsr_in_smm_support();
    void test_ia32_vmx_misc_cr3_targets();
    void test_ia32_vmx_misc_max_num_msr_load_store_on_exit();
    void test_ia32_vmx_misc_vmxoff_blocked_smi_support();
    void test_ia32_vmx_misc_vmwrite_all_fields_support();
    void test_ia32_vmx_misc_injection_with_instruction_length_of_zero();
    void test_ia32_vmx_cr0_fixed0();
    void test_ia32_vmx_cr0_fixed1();
    void test_ia32_vmx_cr4_fixed0();
    void test_ia32_vmx_cr4_fixed1();
    void test_ia32_vmx_procbased_ctls2();
    void test_ia32_vmx_procbased_ctls2_virtualize_apic_accesses();
    void test_ia32_vmx_procbased_ctls2_enable_ept();
    void test_ia32_vmx_procbased_ctls2_descriptor_table_exiting();
    void test_ia32_vmx_procbased_ctls2_enable_rdtscp();
    void test_ia32_vmx_procbased_ctls2_virtualize_x2apic_mode();
    void test_ia32_vmx_procbased_ctls2_enable_vpid();
    void test_ia32_vmx_procbased_ctls2_wbinvd_exiting();
    void test_ia32_vmx_procbased_ctls2_unrestricted_guest();
    void test_ia32_vmx_procbased_ctls2_apic_register_virtualization();
    void test_ia32_vmx_procbased_ctls2_virtual_interrupt_delivery();
    void test_ia32_vmx_procbased_ctls2_pause_loop_exiting();
    void test_ia32_vmx_procbased_ctls2_rdrand_exiting();
    void test_ia32_vmx_procbased_ctls2_enable_invpcid();
    void test_ia32_vmx_procbased_ctls2_enable_vm_functions();
    void test_ia32_vmx_procbased_ctls2_vmcs_shadowing();
    void test_ia32_vmx_procbased_ctls2_rdseed_exiting();
    void test_ia32_vmx_procbased_ctls2_enable_pml();
    void test_ia32_vmx_procbased_ctls2_ept_violation_ve();
    void test_ia32_vmx_procbased_ctls2_enable_xsaves_xrstors();
    void test_ia32_vmx_ept_vpid_cap();
    void test_ia32_vmx_ept_vpid_cap_execute_only_translation();
    void test_ia32_vmx_ept_vpid_cap_page_walk_length_of_4();
    void test_ia32_vmx_ept_vpid_cap_memory_type_uncacheable_supported();
    void test_ia32_vmx_ept_vpid_cap_memory_type_write_back_supported();
    void test_ia32_vmx_ept_vpid_cap_pde_2mb_support();
    void test_ia32_vmx_ept_vpid_cap_pdpte_1mb_support();
    void test_ia32_vmx_ept_vpid_cap_invept_support();
    void test_ia32_vmx_ept_vpid_cap_accessed_dirty_support();
    void test_ia32_vmx_ept_vpid_cap_invept_single_context_support();
    void test_ia32_vmx_ept_vpid_cap_invept_all_context_support();
    void test_ia32_vmx_ept_vpid_cap_invvpid_support();
    void test_ia32_vmx_ept_vpid_cap_invvpid_individual_address_support();
    void test_ia32_vmx_ept_vpid_cap_invvpid_single_context_support();
    void test_ia32_vmx_ept_vpid_cap_invvpid_all_context_support();
    void test_ia32_vmx_ept_vpid_cap_invvpid_single_context_retaining_globals_support();
    void test_ia32_vmx_true_pinbased_ctls();
    void test_ia32_vmx_true_pinbased_ctls_external_interrupt_exiting();
    void test_ia32_vmx_true_pinbased_ctls_nmi_exiting();
    void test_ia32_vmx_true_pinbased_ctls_virtual_nmis();
    void test_ia32_vmx_true_pinbased_ctls_activate_vmx_preemption_timer();
    void test_ia32_vmx_true_pinbased_ctls_process_posted_interrupts();
    void test_ia32_vmx_true_procbased_ctls();
    void test_ia32_vmx_true_procbased_ctls_interrupt_window_exiting();
    void test_ia32_vmx_true_procbased_ctls_use_tsc_offsetting();
    void test_ia32_vmx_true_procbased_ctls_hlt_exiting();
    void test_ia32_vmx_true_procbased_ctls_invlpg_exiting();
    void test_ia32_vmx_true_procbased_ctls_mwait_exiting();
    void test_ia32_vmx_true_procbased_ctls_rdpmc_exiting();
    void test_ia32_vmx_true_procbased_ctls_rdtsc_exiting();
    void test_ia32_vmx_true_procbased_ctls_cr3_load_exiting();
    void test_ia32_vmx_true_procbased_ctls_cr3_store_exiting();
    void test_ia32_vmx_true_procbased_ctls_cr8_load_exiting();
    void test_ia32_vmx_true_procbased_ctls_cr8_store_exiting();
    void test_ia32_vmx_true_procbased_ctls_use_tpr_shadow();
    void test_ia32_vmx_true_procbased_ctls_nmi_window_exiting();
    void test_ia32_vmx_true_procbased_ctls_mov_dr_exiting();
    void test_ia32_vmx_true_procbased_ctls_unconditional_io_exiting();
    void test_ia32_vmx_true_procbased_ctls_use_io_bitmaps();
    void test_ia32_vmx_true_procbased_ctls_monitor_trap_flag();
    void test_ia32_vmx_true_procbased_ctls_use_msr_bitmaps();
    void test_ia32_vmx_true_procbased_ctls_monitor_exiting();
    void test_ia32_vmx_true_procbased_ctls_pause_exiting();
    void test_ia32_vmx_true_procbased_ctls_activate_secondary_controls();
    void test_ia32_vmx_true_exit_ctls();
    void test_ia32_vmx_true_exit_ctls_save_debug_controls();
    void test_ia32_vmx_true_exit_ctls_host_address_space_size();
    void test_ia32_vmx_true_exit_ctls_load_ia32_perf_global_ctrl();
    void test_ia32_vmx_true_exit_ctls_acknowledge_interrupt_on_exit();
    void test_ia32_vmx_true_exit_ctls_save_ia32_pat();
    void test_ia32_vmx_true_exit_ctls_load_ia32_pat();
    void test_ia32_vmx_true_exit_ctls_save_ia32_efer();
    void test_ia32_vmx_true_exit_ctls_load_ia32_efer();
    void test_ia32_vmx_true_exit_ctls_save_vmx_preemption_timer_value();
    void test_ia32_vmx_true_entry_ctls();
    void test_ia32_vmx_true_entry_ctls_load_debug_controls();
    void test_ia32_vmx_true_entry_ctls_ia_32e_mode_guest();
    void test_ia32_vmx_true_entry_ctls_entry_to_smm();
    void test_ia32_vmx_true_entry_ctls_deactivate_dual_monitor_treatment();
    void test_ia32_vmx_true_entry_ctls_load_ia32_perf_global_ctrl();
    void test_ia32_vmx_true_entry_ctls_load_ia32_pat();
    void test_ia32_vmx_true_entry_ctls_load_ia32_efer();
    void test_ia32_vmx_vmfunc();

    void test_rflags_x64();
    void test_rflags_x64_carry_flag();
    void test_rflags_x64_parity_flag();
    void test_rflags_x64_auxiliary_carry_flag();
    void test_rflags_x64_zero_flag();
    void test_rflags_x64_sign_flag();
    void test_rflags_x64_trap_flag();
    void test_rflags_x64_interrupt_enable_flag();
    void test_rflags_x64_direction_flag();
    void test_rflags_x64_overflow_flag();
    void test_rflags_x64_privilege_level();
    void test_rflags_x64_nested_task();
    void test_rflags_x64_resume_flag();
    void test_rflags_x64_virtual_8086_mode();
    void test_rflags_x64_alignment_check_access_control();
    void test_rflags_x64_virtual_interupt_flag();
    void test_rflags_x64_virtual_interupt_pending();
    void test_rflags_x64_id_flag();
    void test_rflags_x64_reserved();
    void test_rflags_x64_always_disabled();
    void test_rflags_x64_always_enabled();

    void test_cr0();
    void test_cr0_protection_enable();
    void test_cr0_monitor_coprocessor();
    void test_cr0_emulation();
    void test_cr0_task_switched();
    void test_cr0_extension_type();
    void test_cr0_numeric_error();
    void test_cr0_write_protect();
    void test_cr0_alignment_mask();
    void test_cr0_not_write_through();
    void test_cr0_cache_disable();
    void test_cr0_paging();
    void test_cr3();
    void test_cr4();
    void test_cr4_v8086_mode_extensions();
    void test_cr4_protected_mode_virtual_interrupts();
    void test_cr4_time_stamp_disable();
    void test_cr4_debugging_extensions();
    void test_cr4_page_size_extensions();
    void test_cr4_physical_address_extensions();
    void test_cr4_machine_check_enable();
    void test_cr4_page_global_enable();
    void test_cr4_performance_monitor_counter_enable();
    void test_cr4_osfxsr();
    void test_cr4_osxmmexcpt();
    void test_cr4_vmx_enable_bit();
    void test_cr4_smx_enable_bit();
    void test_cr4_fsgsbase_enable_bit();
    void test_cr4_pcid_enable_bit();
    void test_cr4_osxsave();
    void test_cr4_smep_enable_bit();
    void test_cr4_smap_enable_bit();
    void test_cr4_protection_key_enable_bit();

};

#endif
