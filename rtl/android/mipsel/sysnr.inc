{
    This file is part of the Free Pascal run time library.
    Copyright (c) 2017 by Yuriy Sydorov,
    member of the Free Pascal development team.

    Syscall nrs for mipsel-android

    See the file COPYING.FPC, included in this distribution,
    for details about the copyright.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

 **********************************************************************}

const
  __NR_SYSCALL_BASE = 4000;

syscall_nr_exit                         = (__NR_SYSCALL_BASE + 1);
syscall_nr_fork                         = (__NR_SYSCALL_BASE + 2);
syscall_nr_read                         = (__NR_SYSCALL_BASE + 3);
syscall_nr_write                        = (__NR_SYSCALL_BASE + 4);
syscall_nr_open                         = (__NR_SYSCALL_BASE + 5);
syscall_nr_close                        = (__NR_SYSCALL_BASE + 6);
syscall_nr_link                         = (__NR_SYSCALL_BASE + 9);
syscall_nr_unlink                       = (__NR_SYSCALL_BASE + 10);
syscall_nr_execve                       = (__NR_SYSCALL_BASE + 11);
syscall_nr_chdir                        = (__NR_SYSCALL_BASE + 12);
syscall_nr_mknod                        = (__NR_SYSCALL_BASE + 14);
syscall_nr_chmod                        = (__NR_SYSCALL_BASE + 15);
syscall_nr_lseek                        = (__NR_SYSCALL_BASE + 19);
syscall_nr_getpid                       = (__NR_SYSCALL_BASE + 20);
syscall_nr_mount                        = (__NR_SYSCALL_BASE + 21);
syscall_nr_ptrace                       = (__NR_SYSCALL_BASE + 26);
syscall_nr_pause                        = (__NR_SYSCALL_BASE + 29);
syscall_nr_access                       = (__NR_SYSCALL_BASE + 33);
syscall_nr_sync                         = (__NR_SYSCALL_BASE + 36);
syscall_nr_rename                       = (__NR_SYSCALL_BASE + 38);
syscall_nr_mkdir                        = (__NR_SYSCALL_BASE + 39);
syscall_nr_rmdir                        = (__NR_SYSCALL_BASE + 40);
syscall_nr_dup                          = (__NR_SYSCALL_BASE + 41);
syscall_nr_times                        = (__NR_SYSCALL_BASE + 43);
syscall_nr_brk                          = (__NR_SYSCALL_BASE + 45);
syscall_nr_acct                         = (__NR_SYSCALL_BASE + 51);
syscall_nr_umount2                      = (__NR_SYSCALL_BASE + 52);
syscall_nr_ioctl                        = (__NR_SYSCALL_BASE + 54);
syscall_nr_fcntl                        = (__NR_SYSCALL_BASE + 55);
syscall_nr_setpgid                      = (__NR_SYSCALL_BASE + 57);
syscall_nr_umask                        = (__NR_SYSCALL_BASE + 60);
syscall_nr_chroot                       = (__NR_SYSCALL_BASE + 61);
syscall_nr_dup2                         = (__NR_SYSCALL_BASE + 63);
syscall_nr_getppid                      = (__NR_SYSCALL_BASE + 64);
syscall_nr_setsid                       = (__NR_SYSCALL_BASE + 66);
syscall_nr_sigaction                    = (__NR_SYSCALL_BASE + 67);
syscall_nr_sigpending                   = (__NR_SYSCALL_BASE + 73);
syscall_nr_setrlimit                    = (__NR_SYSCALL_BASE + 75);
syscall_nr_getrusage                    = (__NR_SYSCALL_BASE + 77);
syscall_nr_gettimeofday                 = (__NR_SYSCALL_BASE + 78);
syscall_nr_settimeofday                 = (__NR_SYSCALL_BASE + 79);
syscall_nr_symlink                      = (__NR_SYSCALL_BASE + 83);
syscall_nr_readlink                     = (__NR_SYSCALL_BASE + 85);
syscall_nr_reboot                       = (__NR_SYSCALL_BASE + 88);
syscall_nr_munmap                       = (__NR_SYSCALL_BASE + 91);
syscall_nr_truncate                     = (__NR_SYSCALL_BASE + 92);
syscall_nr_ftruncate                    = (__NR_SYSCALL_BASE + 93);
syscall_nr_fchmod                       = (__NR_SYSCALL_BASE + 94);
syscall_nr_getpriority                  = (__NR_SYSCALL_BASE + 96);
syscall_nr_setpriority                  = (__NR_SYSCALL_BASE + 97);
syscall_nr_syslog                       = (__NR_SYSCALL_BASE + 103);
syscall_nr_setitimer                    = (__NR_SYSCALL_BASE + 104);
syscall_nr_getitimer                    = (__NR_SYSCALL_BASE + 105);
syscall_nr_wait4                        = (__NR_SYSCALL_BASE + 114);
syscall_nr_sysinfo                      = (__NR_SYSCALL_BASE + 116);
syscall_nr_fsync                        = (__NR_SYSCALL_BASE + 118);
syscall_nr_clone                        = (__NR_SYSCALL_BASE + 120);
syscall_nr_uname                        = (__NR_SYSCALL_BASE + 122);
syscall_nr_mprotect                     = (__NR_SYSCALL_BASE + 125);
syscall_nr_sigprocmask                  = (__NR_SYSCALL_BASE + 126);
syscall_nr_init_module                  = (__NR_SYSCALL_BASE + 128);
syscall_nr_delete_module                = (__NR_SYSCALL_BASE + 129);
syscall_nr_getpgid                      = (__NR_SYSCALL_BASE + 132);
syscall_nr_fchdir                       = (__NR_SYSCALL_BASE + 133);
syscall_nr_personality                  = (__NR_SYSCALL_BASE + 136);
syscall_nr__llseek                      = (__NR_SYSCALL_BASE + 140);
syscall_nr__newselect                   = (__NR_SYSCALL_BASE + 142);
syscall_nr_flock                        = (__NR_SYSCALL_BASE + 143);
syscall_nr_msync                        = (__NR_SYSCALL_BASE + 144);
syscall_nr_readv                        = (__NR_SYSCALL_BASE + 145);
syscall_nr_writev                       = (__NR_SYSCALL_BASE + 146);
syscall_nr_perf_event_open              = (__NR_SYSCALL_BASE + 364);

syscall_nr_syscall                      = (__NR_SYSCALL_BASE + 0);
syscall_nr_waitpid                      = (__NR_SYSCALL_BASE + 7);
syscall_nr_lchown                       = (__NR_SYSCALL_BASE + 16);
syscall_nr_setuid                       = (__NR_SYSCALL_BASE + 23);
syscall_nr_getuid                       = (__NR_SYSCALL_BASE + 24);
syscall_nr_kill                         = (__NR_SYSCALL_BASE + 37);
syscall_nr_setgid                       = (__NR_SYSCALL_BASE + 46);
syscall_nr_getgid                       = (__NR_SYSCALL_BASE + 47);
syscall_nr_geteuid                      = (__NR_SYSCALL_BASE + 49);
syscall_nr_getegid                      = (__NR_SYSCALL_BASE + 50);
syscall_nr_setreuid                     = (__NR_SYSCALL_BASE + 70);
syscall_nr_setregid                     = (__NR_SYSCALL_BASE + 71);
syscall_nr_sigsuspend                   = (__NR_SYSCALL_BASE + 72);
syscall_nr_getrlimit                    = (__NR_SYSCALL_BASE + 76);
syscall_nr_getgroups                    = (__NR_SYSCALL_BASE + 80);
syscall_nr_setgroups                    = (__NR_SYSCALL_BASE + 81);
syscall_nr_fchown                       = (__NR_SYSCALL_BASE + 95);
syscall_nr_cacheflush                   = (__NR_SYSCALL_BASE + 147);
syscall_nr_fdatasync                    = (__NR_SYSCALL_BASE + 152);
syscall_nr_mlock                        = (__NR_SYSCALL_BASE + 154);
syscall_nr_munlock                      = (__NR_SYSCALL_BASE + 155);
syscall_nr_sched_setparam               = (__NR_SYSCALL_BASE + 158);
syscall_nr_sched_getparam               = (__NR_SYSCALL_BASE + 159);
syscall_nr_sched_setscheduler           = (__NR_SYSCALL_BASE + 160);
syscall_nr_sched_getscheduler           = (__NR_SYSCALL_BASE + 161);
syscall_nr_sched_yield                  = (__NR_SYSCALL_BASE + 162);
syscall_nr_sched_get_priority_max       = (__NR_SYSCALL_BASE + 163);
syscall_nr_sched_get_priority_min       = (__NR_SYSCALL_BASE + 164);
syscall_nr_sched_rr_get_interval        = (__NR_SYSCALL_BASE + 165);
syscall_nr_nanosleep                    = (__NR_SYSCALL_BASE + 166);
syscall_nr_mremap                       = (__NR_SYSCALL_BASE + 167);
syscall_nr_accept                       = (__NR_SYSCALL_BASE + 168);
syscall_nr_bind                         = (__NR_SYSCALL_BASE + 169);
syscall_nr_connect                      = (__NR_SYSCALL_BASE + 170);
syscall_nr_getpeername                  = (__NR_SYSCALL_BASE + 171);
syscall_nr_getsockname                  = (__NR_SYSCALL_BASE + 172);
syscall_nr_getsockopt                   = (__NR_SYSCALL_BASE + 173);
syscall_nr_listen                       = (__NR_SYSCALL_BASE + 174);
syscall_nr_recvfrom                     = (__NR_SYSCALL_BASE + 176);
syscall_nr_recvmsg                      = (__NR_SYSCALL_BASE + 177);
syscall_nr_sendmsg                      = (__NR_SYSCALL_BASE + 179);
syscall_nr_sendto                       = (__NR_SYSCALL_BASE + 180);
syscall_nr_setsockopt                   = (__NR_SYSCALL_BASE + 181);
syscall_nr_shutdown                     = (__NR_SYSCALL_BASE + 182);
syscall_nr_socket                       = (__NR_SYSCALL_BASE + 183);
syscall_nr_socketpair                   = (__NR_SYSCALL_BASE + 184);
syscall_nr_setresuid                    = (__NR_SYSCALL_BASE + 185);
syscall_nr_getresuid                    = (__NR_SYSCALL_BASE + 186);
syscall_nr_poll                         = (__NR_SYSCALL_BASE + 188);
syscall_nr_setresgid                    = (__NR_SYSCALL_BASE + 190);
syscall_nr_getresgid                    = (__NR_SYSCALL_BASE + 191);
syscall_nr_prctl                        = (__NR_SYSCALL_BASE + 192);
syscall_nr_rt_sigaction                 = (__NR_SYSCALL_BASE + 194);
syscall_nr_rt_sigprocmask               = (__NR_SYSCALL_BASE + 195);
syscall_nr_rt_sigtimedwait              = (__NR_SYSCALL_BASE + 197);
syscall_nr_pread64                      = (__NR_SYSCALL_BASE + 200);
syscall_nr_pwrite64                     = (__NR_SYSCALL_BASE + 201);
syscall_nr_chown                        = (__NR_SYSCALL_BASE + 202);
syscall_nr_getcwd                       = (__NR_SYSCALL_BASE + 203);
syscall_nr_capget                       = (__NR_SYSCALL_BASE + 204);
syscall_nr_capset                       = (__NR_SYSCALL_BASE + 205);
syscall_nr_sigaltstack                  = (__NR_SYSCALL_BASE + 206);
syscall_nr_sendfile                     = (__NR_SYSCALL_BASE + 207);
syscall_nr_mmap2                        = (__NR_SYSCALL_BASE + 210);
syscall_nr_ftruncate64                  = (__NR_SYSCALL_BASE + 212);
syscall_nr_stat64                       = (__NR_SYSCALL_BASE + 213);
syscall_nr_lstat64                      = (__NR_SYSCALL_BASE + 214);
syscall_nr_fstat64                      = (__NR_SYSCALL_BASE + 215);
syscall_nr_mincore                      = (__NR_SYSCALL_BASE + 217);
syscall_nr_madvise                      = (__NR_SYSCALL_BASE + 218);
syscall_nr_getdents64                   = (__NR_SYSCALL_BASE + 219);
syscall_nr_fcntl64                      = (__NR_SYSCALL_BASE + 220);
syscall_nr_gettid                       = (__NR_SYSCALL_BASE + 222);
syscall_nr_readahead                    = (__NR_SYSCALL_BASE + 223);
syscall_nr_setxattr                     = (__NR_SYSCALL_BASE + 224);
syscall_nr_lsetxattr                    = (__NR_SYSCALL_BASE + 225);
syscall_nr_fsetxattr                    = (__NR_SYSCALL_BASE + 226);
syscall_nr_getxattr                     = (__NR_SYSCALL_BASE + 227);
syscall_nr_lgetxattr                    = (__NR_SYSCALL_BASE + 228);
syscall_nr_fgetxattr                    = (__NR_SYSCALL_BASE + 229);
syscall_nr_listxattr                    = (__NR_SYSCALL_BASE + 230);
syscall_nr_llistxattr                   = (__NR_SYSCALL_BASE + 231);
syscall_nr_flistxattr                   = (__NR_SYSCALL_BASE + 232);
syscall_nr_removexattr                  = (__NR_SYSCALL_BASE + 233);
syscall_nr_lremovexattr                 = (__NR_SYSCALL_BASE + 234);
syscall_nr_fremovexattr                 = (__NR_SYSCALL_BASE + 235);
syscall_nr_tkill                        = (__NR_SYSCALL_BASE + 236);
syscall_nr_futex                        = (__NR_SYSCALL_BASE + 238);
syscall_nr_sched_setaffinity            = (__NR_SYSCALL_BASE + 239);
syscall_nr_sched_getaffinity            = (__NR_SYSCALL_BASE + 240);
syscall_nr_exit_group                   = (__NR_SYSCALL_BASE + 246);
syscall_nr_epoll_create                 = (__NR_SYSCALL_BASE + 248);
syscall_nr_epoll_ctl                    = (__NR_SYSCALL_BASE + 249);
syscall_nr_epoll_wait                   = (__NR_SYSCALL_BASE + 250);
syscall_nr_statfs64                     = (__NR_SYSCALL_BASE + 255);
syscall_nr_fstatfs64                    = (__NR_SYSCALL_BASE + 256);
syscall_nr_timer_create                 = (__NR_SYSCALL_BASE + 257);
syscall_nr_timer_settime                = (__NR_SYSCALL_BASE + 258);
syscall_nr_timer_gettime                = (__NR_SYSCALL_BASE + 259);
syscall_nr_timer_getoverrun             = (__NR_SYSCALL_BASE + 260);
syscall_nr_timer_delete                 = (__NR_SYSCALL_BASE + 261);
syscall_nr_clock_settime                = (__NR_SYSCALL_BASE + 262);
syscall_nr_clock_gettime                = (__NR_SYSCALL_BASE + 263);
syscall_nr_clock_getres                 = (__NR_SYSCALL_BASE + 264);
syscall_nr_clock_nanosleep              = (__NR_SYSCALL_BASE + 265);
syscall_nr_tgkill                       = (__NR_SYSCALL_BASE + 266);
syscall_nr_utimes                       = (__NR_SYSCALL_BASE + 267);
syscall_nr_waitid                       = (__NR_SYSCALL_BASE + 278);
syscall_nr_set_thread_area              = (__NR_SYSCALL_BASE + 283);
syscall_nr_inotify_init                 = (__NR_SYSCALL_BASE + 284);
syscall_nr_inotify_add_watch            = (__NR_SYSCALL_BASE + 285);
syscall_nr_inotify_rm_watch             = (__NR_SYSCALL_BASE + 286);
syscall_nr_openat                       = (__NR_SYSCALL_BASE + 288);
syscall_nr_mkdirat                      = (__NR_SYSCALL_BASE + 289);
syscall_nr_fchownat                     = (__NR_SYSCALL_BASE + 291);
syscall_nr_fstatat64                    = (__NR_SYSCALL_BASE + 293);
syscall_nr_unlinkat                     = (__NR_SYSCALL_BASE + 294);
syscall_nr_renameat                     = (__NR_SYSCALL_BASE + 295);
syscall_nr_fchmodat                     = (__NR_SYSCALL_BASE + 299);
syscall_nr_faccessat                    = (__NR_SYSCALL_BASE + 300);
syscall_nr_unshare                      = (__NR_SYSCALL_BASE + 303);
syscall_nr_getcpu                       = (__NR_SYSCALL_BASE + 312);
syscall_nr_ioprio_set                   = (__NR_SYSCALL_BASE + 314);
syscall_nr_ioprio_get                   = (__NR_SYSCALL_BASE + 315);
syscall_nr_utimensat                    = (__NR_SYSCALL_BASE + 316);
syscall_nr_eventfd2                     = (__NR_SYSCALL_BASE + 325);
syscall_nr_pipe2                        = (__NR_SYSCALL_BASE + 328);
syscall_nr_pipe                         = (__NR_SYSCALL_BASE + 42);
