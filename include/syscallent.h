    { 3,    "read"      },  /* 0 */
    { 3,    "write"     },  /* 1 */
    { 3,    "open"      },  /* 2 */
    { 1,    "close"     },  /* 3 */
    { 2,    "stat"      },  /* 4 */
    { 2,    "fstat"     },  /* 5 */
    { 2,    "lstat"     },  /* 6 */
    { 3,    "poll"      },  /* 7 */
    { 3,    "lseek"     },  /* 8 */
    { 6,    "mmap"      },  /* 9 */
    { 3,    "mprotect"  },  /* 10 */
    { 2,    "munmap"    },  /* 11 */
    { 1,    "brk"       },  /* 12 */
    { 4,    "rt_sigaction"  },  /* 13 */
    { 4,    "rt_sigprocmask"},  /* 14 */
    { 0,    "rt_sigreturn"  },  /* 15 */
    { 3,    "ioctl"     },  /* 16 */
    { 4,    "pread"     },  /* 17 */
    { 4,    "pwrite"    },  /* 18 */
    { 3,    "readv"     },  /* 19 */
    { 3,    "writev"    },  /* 20 */
    { 2,    "access"    },  /* 21 */
    { 1,    "pipe"      },  /* 22 */
    { 5,    "select"    },  /* 23 */
    { 0,    "sched_yield"   },  /* 24 */
    { 5,    "mremap"    },  /* 25 */
    { 3,    "msync"     },  /* 26 */
    { 3,    "mincore"   },  /* 27 */
    { 3,    "madvise"   },  /* 28 */
    { 4,    "shmget"    },  /* 29 */
    { 4,    "shmat"     },  /* 30 */
    { 4,    "shmctl"    },  /* 31 */
    { 1,    "dup"       },  /* 32 */
    { 2,    "dup2"      },  /* 33 */
    { 0,    "pause"     },  /* 34 */
    { 2,    "nanosleep" },  /* 35 */
    { 2,    "getitimer" },  /* 36 */
    { 1,    "alarm"     },  /* 37 */
    { 3,    "setitimer" },  /* 38 */
    { 0,    "getpid"    },  /* 39 */
    { 4,    "sendfile"  },  /* 40 */
    { 3,    "socket"    },  /* 41 */
    { 3,    "connect"   },  /* 42 */
    { 3,    "accept"    },  /* 43 */
    { 6,    "sendto"    },  /* 44 */
    { 6,    "recvfrom"  },  /* 45 */
    { 3,    "sendmsg"   },  /* 46 */
    { 3,    "recvmsg"   },  /* 47 */
    { 2,    "shutdown"  },  /* 48 */
    { 3,    "bind"      },  /* 49 */
    { 2,    "listen"    },  /* 50 */
    { 3,        "getsockname"   },  /* 51 */
    { 3,        "getpeername"   },  /* 52 */
    { 4,        "socketpair"    },  /* 53 */
    { 5,        "setsockopt"    },  /* 54 */
    { 5,        "getsockopt"    },  /* 55 */
    { 5,    "clone"     },  /* 56 */
    { 0,    "fork"      },  /* 57 */
    { 0,    "vfork"     },  /* 58 */
    { 3,        "execve"    },  /* 59 */
    { 1,    "_exit"     },  /* 60 */
    { 4,    "wait4"     },  /* 61 */
    { 2,    "kill"      },  /* 62 */
    { 1,    "uname"     },  /* 63 */
    { 4,    "semget"    },  /* 64 */
    { 4,    "semop"     },  /* 65 */
    { 4,    "semctl"    },  /* 66 */
    { 4,    "shmdt"     },  /* 67 */
    { 4,    "msgget"    },  /* 68 */
    { 4,    "msgsnd"    },  /* 69 */
    { 5,    "msgrcv"    },  /* 70 */
    { 3,    "msgctl"    },  /* 71 */
    { 3,    "fcntl"     },  /* 72 */
    { 2,    "flock"     },  /* 73 */
    { 1,    "fsync"     },  /* 74 */
    { 1,        "fdatasync" },  /* 75 */
    { 2,        "truncate"  },  /* 76 */
    { 2,        "ftruncate" },  /* 77 */
    { 3,        "getdents"  },  /* 78 */
    { 2,    "getcwd"    },  /* 79 */
    { 1,    "chdir"     },  /* 80 */
    { 1,    "fchdir"    },  /* 81 */
    { 2,    "rename"    },  /* 82 */
    { 2,    "mkdir"     },  /* 83 */
    { 1,    "rmdir"     },  /* 84 */
    { 2,        "creat"     },  /* 85 */
    { 2,    "link"      },  /* 86 */
    { 1,    "unlink"    },  /* 87 */
    { 2,        "symlink"   },  /* 88 */
    { 3,        "readlink"  },  /* 89 */
    { 2,    "chmod"     },  /* 90 */
    { 2,    "fchmod"    },  /* 91 */
    { 3,    "chown"     },  /* 92 */
    { 3,    "fchown"    },  /* 93 */
    { 3,    "lchown"    },  /* 94 */
    { 1,    "umask"     },  /* 95 */
    { 2,     "gettimeofday"  },  /* 96 */
    { 2,        "getrlimit" },  /* 97 */
    { 2,        "getrusage" },  /* 98 */
    { 1,        "sysinfo"   },  /* 99 */
    { 1,    "times"     },  /* 100 */
    { 4,    "ptrace"    },  /* 101 */
    { 0,    "getuid"    },  /* 102 */
    { 3,    "syslog"    },  /* 103 */
    { 0,    "getgid"    },  /* 104 */
    { 1,    "setuid"    },  /* 105 */
    { 1,    "setgid"    },  /* 106 */
    { 0,        "geteuid"   },  /* 107 */
    { 0,        "getegid"   },  /* 108 */
    { 2,        "setpgid"   },  /* 109 */
    { 0,        "getppid"   },  /* 110 */
    { 0,        "getpgrp"   },  /* 111 */
    { 0,    "setsid"    },  /* 112 */
    { 2,        "setreuid"  },  /* 113 */
    { 2,        "setregid"  },  /* 114 */
    { 2,        "getgroups" },  /* 115 */
    { 2,        "setgroups" },  /* 116 */
    { 3,        "setresuid" },  /* 117 */
    { 3,        "getresuid" },  /* 118 */
    { 3,        "setresgid" },  /* 119 */
    { 3,        "getresgid" },  /* 120 */
    { 1,        "getpgid"   },  /* 121 */
    { 1,        "setfsuid"  },  /* 122 */
    { 1,        "setfsgid"  },  /* 123 */
    { 1,    "getsid"    },  /* 124 */
    { 2,    "capget"    },  /* 125 */
    { 2,    "capset"    },  /* 126 */
    { 2,     "rt_sigpending" },  /* 127 */
    { 4,        "rt_sigtimedwait"   },  /* 128 */
    { 3,       "rt_sigqueueinfo"   },  /* 129 */
    { 2,     "rt_sigsuspend" },  /* 130 */
    { 2,        "sigaltstack"   },  /* 131 */
    { 2,    "utime"     },  /* 132 */
    { 3,    "mknod"     },  /* 133 */
    { 1,    "uselib"    },  /* 134 */
    { 1,        "personality"   },  /* 135 */
    { 2,    "ustat"     },  /* 136 */
    { 2,    "statfs"    },  /* 137 */
    { 2,        "fstatfs"   },  /* 138 */
    { 3,    "sysfs"     },  /* 139 */
    { 2,        "getpriority"   },  /* 140 */
    { 3,        "setpriority"   },  /* 141 */
    { 0,     "sched_setparam"    },  /* 142 */
    { 2,     "sched_getparam"    },  /* 143 */
    { 3,     "sched_setscheduler"    },  /* 144 */
    { 1,     "sched_getscheduler"    },  /* 145 */
    { 1,     "sched_get_priority_max"    },  /* 146 */
    { 1,    "sched_get_priority_min"    },  /* 147 */
    { 2,      "sched_rr_get_interval" },  /* 148 */
    { 2,    "mlock"     },  /* 149 */
    { 2,        "munlock"   },  /* 150 */
    { 1,        "mlockall"  },  /* 151 */
    { 0,        "munlockall"    },  /* 152 */
    { 0,        "vhangup"   },  /* 153 */
    { 3,        "modify_ldt"    },  /* 154 */
    { 2,        "pivot_root"    },  /* 155 */
    { 1,    "_sysctl"   },  /* 156 */
    { 5,    "prctl"     },  /* 157 */
    { 2,        "arch_prctl"    },  /* 158 */
    { 1,        "adjtimex"  },  /* 159 */
    { 2,        "setrlimit" },  /* 160 */
    { 1,    "chroot"    },  /* 161 */
    { 0,    "sync"      },  /* 162 */
    { 1,    "acct"      },  /* 163 */
    { 2,      "settimeofday"  },  /* 164 */
    { 5,    "mount"     },  /* 165 */
    { 2,        "umount"    }, /* 166 */
    { 2,    "swapon"    },  /* 167 */
    { 1,        "swapoff"   },  /* 168 */
    { 4,    "reboot"    },  /* 169 */
    { 2,        "sethostname"   },  /* 170 */
    { 2,     "setdomainname" },  /* 171 */
    { 1,    "iopl"      },  /* 172 */
    { 3,    "ioperm"    },  /* 173 */
    { 2,     "create_module" },  /* 174 */
    { 3,        "init_module"   },  /* 175 */
    { 2,      "delete_module" },  /* 176 */
    { 1,       "get_kernel_syms"},  /* 177 */
    { 5,       "query_module"  },  /* 178 */
    { 4,       "quotactl"  },  /* 179 */
    { 3,        "nfsservctl"    },  /* 180 */
    { 5,        "getpmsg"   }, /* 181 */
    { 5,        "putpmsg"   }, /* 182 */
    { 5,        "afs_syscall"   },  /* 183 */
    { 3,        "tuxcall"   }, /* 184 */
    { 3,        "security"  }, /* 185 */
    { 0,    "gettid"    }, /* 186 */
    { 3,        "readahead" }, /* 187 */
    { 5,        "setxattr"  }, /* 188 */
    { 5,        "lsetxattr" }, /* 189 */
    { 5,        "fsetxattr" }, /* 190 */
    { 4,        "getxattr"  }, /* 191 */
    { 4,        "lgetxattr" }, /* 192 */
    { 4,        "fgetxattr" }, /* 193 */
    { 3,        "listxattr" }, /* 194 */
    { 3,        "llistxattr"    }, /* 195 */
    { 3,        "flistxattr"    }, /* 196 */
    { 2,        "removexattr"   }, /* 197 */
    { 2,        "lremovexattr"  }, /* 198 */
    { 2,       "fremovexattr"  }, /* 199 */
    { 2,    "tkill"     }, /* 200 */
    { 1,    "time"      },  /* 201 */
    { 6,    "futex"     }, /* 202 */
    { 3,      "sched_setaffinity" },/* 203 */
    { 3,      "sched_getaffinity" },/* 204 */
    { 1,       "set_thread_area" }, /* 205 */
    { 2,        "io_setup"  }, /* 206 */
    { 1,        "io_destroy"    }, /* 207 */
    { 5,       "io_getevents"  }, /* 208 */
    { 3,        "io_submit" }, /* 209 */
    { 3,        "io_cancel" }, /* 210 */
    { 1,        "get_thread_area" }, /* 211 */
    { 3,     "lookup_dcookie"}, /* 212 */
    { 1,       "epoll_create"  }, /* 213 */
    { 4,    "epoll_ctl_old" }, /* 214 */
    { 4,    "epoll_wait_old"}, /* 215 */
    { 5,       "remap_file_pages"}, /* 216 */
    { 3,        "getdents64"    }, /* 217 */
    { 1,        "set_tid_address"}, /* 218 */
    { 0,        "restart_syscall"}, /* 219 */
    { 5,        "semtimedop"    }, /* 220 */
    { 4,        "fadvise64" }, /* 221 */
    { 3,       "timer_create"  }, /* 222 */
    { 4,     "timer_settime" }, /* 223 */
    { 2,     "timer_gettime" }, /* 224 */
    { 1,       "timer_getoverrun"}, /* 225 */
    { 1,      "timer_delete"  }, /* 226 */
    { 2,      "clock_settime" }, /* 227 */
    { 2,      "clock_gettime" }, /* 228 */
    { 2,       "clock_getres"  }, /* 229 */
    { 4,        "clock_nanosleep"}, /* 230 */
    { 1,    "exit_group"    }, /* 231 */
    { 4,        "epoll_wait"    }, /* 232 */
    { 4,        "epoll_ctl" }, /* 233 */
    { 3,    "tgkill"    }, /* 234 */
    { 2,    "utimes"    }, /* 235 */
    { 5,        "vserver"   }, /* 236 */
    { 6,    "mbind"     }, /* 237 */
    { 3,      "set_mempolicy" }, /* 238 */
    { 5,      "get_mempolicy" }, /* 239 */
    { 4,        "mq_open"   }, /* 240 */
    { 1,        "mq_unlink" }, /* 241 */
    { 5,       "mq_timedsend"  }, /* 242 */
    { 5,        "mq_timedreceive" }, /* 243 */
    { 2,        "mq_notify" }, /* 244 */
    { 3,      "mq_getsetattr" }, /* 245 */
    { 4,        "kexec_load"    }, /* 246 */
    { 5,    "waitid"    }, /* 247 */
    { 5,        "add_key"   }, /* 248 */
    { 4,        "request_key"   }, /* 249 */
    { 5,    "keyctl"    }, /* 250 */
    { 3,        "ioprio_set"    }, /* 251 */
    { 2,        "ioprio_get"    }, /* 252 */
    { 0,       "inotify_init"  }, /* 253 */
    { 3,      "inotify_add_watch" }, /* 254 */
    { 2,       "inotify_rm_watch" }, /* 255 */
    { 4,     "migrate_pages" }, /* 256 */
    { 4,        "openat"    }, /* 257 */
    { 3,            "mkdirat"   }, /* 258 */
    { 4,            "mknodat"   }, /* 259 */
    { 5,           "fchownat"  }, /* 260 */
    { 3,          "futimesat" }, /* 261 */
    { 4,         "newfstatat"    }, /* 262 */
    { 3,          "unlinkat"  }, /* 263 */
    { 4,           "renameat"  }, /* 264 */
    { 5,        "linkat"    }, /* 265 */
    { 3,          "symlinkat" }, /* 266 */
    { 4,         "readlinkat"    }, /* 267 */
    { 3,           "fchmodat"  }, /* 268 */
    { 3,          "faccessat" }, /* 269 */
    { 6,        "pselect6"  }, /* 270 */
    { 5,    "ppoll"     }, /* 271 */
    { 1,        "unshare"   }, /* 272 */
    { 2,        "set_robust_list" }, /* 273 */
    { 3,        "get_robust_list" }, /* 274 */
    { 6,    "splice"    }, /* 275 */
    { 4,    "tee"       }, /* 276 */
    { 4,        "sync_file_range" }, /* 277 */
    { 4,        "vmsplice"  }, /* 278 */
    { 6,        "move_pages"    }, /* 279 */
    { 4,          "utimensat" }, /* 280 */
    { 6,        "epoll_pwait"   }, /* 281 */
    { 3,           "signalfd"  }, /* 282 */
    { 2,     "timerfd_create"}, /* 283 */
    { 1,        "eventfd"   }, /* 284 */
    { 4,        "fallocate" }, /* 285 */
    { 4,        "timerfd_settime"}, /* 286 */
    { 2,        "timerfd_gettime"}, /* 287 */
    { 4,        "accept4"   }, /* 288 */
    { 4,          "signalfd4" }, /* 289 */
    { 2,       "eventfd2"  }, /* 290 */
    { 1,      "epoll_create1" }, /* 291 */
    { 3,    "dup3"      }, /* 292 */
    { 2,    "pipe2"     }, /* 293 */
    { 1,      "inotify_init1" }, /* 294 */
    { 4,    "preadv"    }, /* 295 */
    { 4,        "pwritev"   }, /* 296 */
    { 4,      "rt_tgsigqueueinfo"}, /* 297 */
    { 5,        "perf_event_open"}, /* 298 */
    { 5,        "recvmmsg"  }, /* 299 */
    { 2,      "fanotify_init" }, /* 300 */
    { 5,      "fanotify_mark" }, /* 301 */
    { 4,        "prlimit64" }, /* 302 */
    { 5,      "name_to_handle_at"}, /* 303 */
    { 3,     "open_by_handle_at"}, /* 304 */
    { 2,      "clock_adjtime" }, /* 305 */
    { 1,    "syncfs"    }, /* 306 */
    { 4,        "sendmmsg"  }, /* 307 */
    { 2,    "setns"     }, /* 308 */
    { 3,    "getcpu"    }, /* 309 */
    { 6,       "process_vm_readv"  }, /* 310 */
    { 6,      "process_vm_writev" }, /* 311 */
    { 5,    "kcmp"      }, /* 312 */
    { 3,     "finit_module"  }, /* 313 */
