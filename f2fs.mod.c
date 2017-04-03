#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e476ff, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x14f8c20, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x7abdde5d, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x53326531, __VMLINUX_SYMBOL_STR(mempool_alloc_pages) },
	{ 0xdb04dd45, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xcd6b027e, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xcd38201f, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x873c5a5b, __VMLINUX_SYMBOL_STR(__blkdev_issue_discard) },
	{ 0x2dfe4fd4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x483c7f71, __VMLINUX_SYMBOL_STR(fscrypt_has_permitted_context) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x62c83ea7, __VMLINUX_SYMBOL_STR(fscrypt_inherit_context) },
	{ 0xfb459156, __VMLINUX_SYMBOL_STR(filemap_check_errors) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x4b5ccc27, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xaeb8d876, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xa7a64880, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc54a6823, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x72ba9798, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xd4087319, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x1be7aa69, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xcffbd8f7, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x3c35912b, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0xce31b8a1, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xa0db8888, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x7e118ca, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x8a6944f9, __VMLINUX_SYMBOL_STR(percpu_counter_set) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x91650c23, __VMLINUX_SYMBOL_STR(__cleancache_get_page) },
	{ 0xc6131c6a, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x66d804b1, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2f35ce29, __VMLINUX_SYMBOL_STR(generic_file_llseek_size) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x1b522579, __VMLINUX_SYMBOL_STR(d_set_d_op) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x1fd88d79, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0xab6fb8eb, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x86c56d40, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0xfcb9c7b1, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0xb8b043f2, __VMLINUX_SYMBOL_STR(kfree_link) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x1f086d8e, __VMLINUX_SYMBOL_STR(generic_fh_to_parent) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4a38c87, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x34d81bdf, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa48fa9d3, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0xf662a3c7, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xc27b2dac, __VMLINUX_SYMBOL_STR(lock_page_memcg) },
	{ 0x9fc65744, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0xe3cc3159, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0x5abffb5d, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x82383853, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xc9b3e142, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x83296810, __VMLINUX_SYMBOL_STR(tag_pages_for_writeback) },
	{ 0xc4072bf6, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xfe2bfd96, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x251296e1, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xe7c7a21, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x40cad572, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xac6a0245, __VMLINUX_SYMBOL_STR(fscrypt_ioctl_get_policy) },
	{ 0x9172c75b, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x66b41fa2, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xc686ad22, __VMLINUX_SYMBOL_STR(fscrypt_fname_disk_to_usr) },
	{ 0x8a4ef265, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xb5dbd16a, __VMLINUX_SYMBOL_STR(__percpu_counter_sum) },
	{ 0x7319d2eb, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0x7bbf4a70, __VMLINUX_SYMBOL_STR(filemap_fdatawait_range) },
	{ 0xbf63e976, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9f2fb2e2, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x291748a, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xc2775e34, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xb2757c7f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xfe5d30e9, __VMLINUX_SYMBOL_STR(_raw_write_trylock) },
	{ 0x35a79b5c, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x1a734fad, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x23402a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x444f68e4, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x49dd8c6c, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x53856aa9, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xe3ecfaa5, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x361e2412, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x7a409269, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x77e821d7, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x1f6f3d06, __VMLINUX_SYMBOL_STR(iov_iter_fault_in_readable) },
	{ 0xccdfd527, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xc755df86, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x65faa5b2, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0x35956337, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xc7cfee64, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x18a1663a, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf113c08a, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x2e593a27, __VMLINUX_SYMBOL_STR(timespec64_to_jiffies) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacce3a56, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x178eb77b, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x13298a69, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x68621e49, __VMLINUX_SYMBOL_STR(sync_inodes_sb) },
	{ 0xd1dcdfca, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x28d79f8a, __VMLINUX_SYMBOL_STR(fscrypt_fname_usr_to_disk) },
	{ 0x50e666ef, __VMLINUX_SYMBOL_STR(fscrypt_free_filename) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5e7a3332, __VMLINUX_SYMBOL_STR(fscrypt_fname_encrypted_size) },
	{ 0x32ab45c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xcf912452, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x8b87b997, __VMLINUX_SYMBOL_STR(fscrypt_put_encryption_info) },
	{ 0x321c4dfb, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xf0c2bfce, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2dd5a39e, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x1bf15d70, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0xd7abeedb, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c1c4159, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xec8cce39, __VMLINUX_SYMBOL_STR(iov_iter_alignment) },
	{ 0x193a6f8a, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x3e333671, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x245ea90f, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x31a51ab6, __VMLINUX_SYMBOL_STR(fscrypt_d_ops) },
	{ 0xce2c45cc, __VMLINUX_SYMBOL_STR(wait_for_completion_io) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x7d6dc825, __VMLINUX_SYMBOL_STR(account_page_dirtied) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xe26c4eb7, __VMLINUX_SYMBOL_STR(fscrypt_release_ctx) },
	{ 0x49b80bf8, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xd21a1475, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x49ce1d9f, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xa20929bd, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x8eb030ac, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xd1476738, __VMLINUX_SYMBOL_STR(security_inode_init_security) },
	{ 0xd69ef97d, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xd985dc99, __VMLINUX_SYMBOL_STR(mempool_free_pages) },
	{ 0x785a6781, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xf9c160d5, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8f634bac, __VMLINUX_SYMBOL_STR(fscrypt_ioctl_set_policy) },
	{ 0x74aed678, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3d13077, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x8ffc4b42, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x881208f1, __VMLINUX_SYMBOL_STR(fscrypt_encrypt_page) },
	{ 0x2f9dc9d7, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0x4e250a1c, __VMLINUX_SYMBOL_STR(thaw_bdev) },
	{ 0x5e140841, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0x3868142e, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0x90d6deb1, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x5e8b4835, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x413a30d6, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x1bb376d, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xb3ccf7b7, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x97a8926d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xcda7d099, __VMLINUX_SYMBOL_STR(shrink_dcache_sb) },
	{ 0x7eabc4cf, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x327badf5, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc03044d, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x63dc0bba, __VMLINUX_SYMBOL_STR(migrate_page_move_mapping) },
	{ 0xad5f0017, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x8e9d686c, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x91c4d4fa, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x7e880422, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0xcf9e5641, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x106b1e5, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x93980046, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x68a6d116, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x6e6b49d3, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup) },
	{ 0x75d33fa6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xebb89d39, __VMLINUX_SYMBOL_STR(ilookup) },
	{ 0xcd936994, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x6c2dc2e2, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xddb1cd7, __VMLINUX_SYMBOL_STR(llist_reverse_order) },
	{ 0xad6ce89b, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0x58b7c662, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0xf398ec24, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xe95ae44d, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x46717d74, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x8b637352, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x7e059e4d, __VMLINUX_SYMBOL_STR(pagevec_lookup_tag) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x506690c6, __VMLINUX_SYMBOL_STR(fscrypt_fname_alloc_buffer) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x9400c797, __VMLINUX_SYMBOL_STR(fscrypt_pullback_bio_page) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0xd31f221e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x44a8d079, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x94255cb, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x10219b53, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0xd8b1e4f8, __VMLINUX_SYMBOL_STR(fscrypt_fname_free_buffer) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x667d120f, __VMLINUX_SYMBOL_STR(page_cache_sync_readahead) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x35b9adfa, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcb2adbd4, __VMLINUX_SYMBOL_STR(fscrypt_setup_filename) },
	{ 0xc159c322, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xb4875d34, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb905c66, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7aa85b3f, __VMLINUX_SYMBOL_STR(vfs_setpos) },
	{ 0xb7bb003c, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xec018b66, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0xd1da7ab7, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0xa097ca86, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x26a0aa38, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0x5363326c, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xf25879b0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf80deb28, __VMLINUX_SYMBOL_STR(d_tmpfile) },
	{ 0xb14345a6, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4c734427, __VMLINUX_SYMBOL_STR(fscrypt_decrypt_bio_pages) },
	{ 0xfcc73a13, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x160641a5, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x903fccef, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc5029a5d, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x18c5fbc4, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xf6da5f2a, __VMLINUX_SYMBOL_STR(freeze_bdev) },
	{ 0x723ef829, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x10aae659, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xa31f5913, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0xfca519ba, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2b4b749c, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0x7572cf66, __VMLINUX_SYMBOL_STR(page_get_link) },
	{ 0x808677fc, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x8532f7de, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc750f7a8, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x10dbcbc7, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xb08e844b, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x31dd058c, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xd0a91bab, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xb07a5ea1, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x1406610e, __VMLINUX_SYMBOL_STR(fscrypt_get_ctx) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x99cc03f5, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0xd3bc2791, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xd8ff6e0f, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x8ea44c16, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xa7252798, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5c46f3d1, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0x92a6f160, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xefbffa74, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x9eaa7a7b, __VMLINUX_SYMBOL_STR(mapping_tagged) },
	{ 0x83c38213, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xc989fb91, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xaa73eb5a, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x63e40532, __VMLINUX_SYMBOL_STR(writeback_inodes_sb) },
	{ 0x7d4995b9, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0x36437f81, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb3038ce7, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x11c335ad, __VMLINUX_SYMBOL_STR(unlock_page_memcg) },
	{ 0xbf6e15b7, __VMLINUX_SYMBOL_STR(generic_fh_to_dentry) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xa3aa1bdb, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x877b24b3, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x69d94c3a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc7044e0a, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xc0076dbe, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xcbe0d5c5, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xe0e7d16d, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xeac351ac, __VMLINUX_SYMBOL_STR(fscrypt_get_encryption_info) },
	{ 0xb002c7e6, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0xe00ef7bd, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x7e8a4746, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0xee4ba4d3, __VMLINUX_SYMBOL_STR(migrate_page_copy) },
	{ 0xa8f6b9a2, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x701e2f96, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xef32f850, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xce595790, __VMLINUX_SYMBOL_STR(__page_file_index) },
	{ 0xe494970, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscrypto";


MODULE_INFO(srcversion, "024F14D3F74FCD3B18609F1");
