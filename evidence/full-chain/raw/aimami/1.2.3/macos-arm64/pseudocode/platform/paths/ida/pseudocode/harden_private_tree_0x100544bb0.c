// __ZN13codexmate_lib8platform5paths19harden_private_tree @ 0x100544bb0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::harden_private_tree::h9fe6ae7b2bdd290e(void *a1, size_t a2)
{
  __int64 v2; // r14
  int v3; // ecx
  void *v4; // r15
  void *v5; // r15
  volatile signed __int64 *v7; // rax
  volatile signed __int64 *v8[2]; // [rsp+8h] [rbp-898h] BYREF
  _BYTE __dst[1040]; // [rsp+18h] [rbp-888h] BYREF
  volatile signed __int64 *v10; // [rsp+428h] [rbp-478h] BYREF
  unsigned __int64 v11; // [rsp+430h] [rbp-470h]
  volatile signed __int64 *v12; // [rsp+438h] [rbp-468h]
  _BYTE __src[1040]; // [rsp+440h] [rbp-460h] BYREF
  volatile signed __int64 *v14; // [rsp+850h] [rbp-50h] BYREF
  char v15; // [rsp+858h] [rbp-48h]
  __int64 v16; // [rsp+860h] [rbp-40h] BYREF
  void *v17; // [rsp+868h] [rbp-38h]
  size_t __n; // [rsp+870h] [rbp-30h]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v10, a1, a2); /*0x100544bd7*/
  v2 = v11; /*0x100544bdc*/
  if ( !(_BYTE)v10 ) /*0x100544bea*/
  {
    if ( (v11 & 0xF00000000000LL) == 0x400000000000LL ) /*0x100544c0a*/
    {
      v2 = std::sys::fs::set_permissions::hfb7e5143e400282f(a1, a2); /*0x100544c20*/
      if ( !v2 ) /*0x100544c26*/
      {
        std::sys::fs::read_dir::h768dda1fe4336014(&v10, a1, a2); /*0x100544c39*/
        v2 = (__int64)v10; /*0x100544c45*/
        if ( (_BYTE)v11 != 2 ) /*0x100544c4e*/
        {
          v14 = v10; /*0x100544c54*/
          v15 = v11; /*0x100544c58*/
          while ( 1 ) /*0x100544c7a*/
          {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(&v10); /*0x100544c7a*/
            if ( (_DWORD)v10 != 1 ) /*0x100544c86*/
            {
              v7 = v14; /*0x100544dc0*/
              v2 = 0; /*0x100544dc4*/
              goto LABEL_28; /*0x100544dc7*/
            }
            v2 = (__int64)v12; /*0x100544c93*/
            if ( !v11 ) /*0x100544c9d*/
              break; /*0x100544c9d*/
            memcpy(__dst, __src, sizeof(__dst)); /*0x100544cb6*/
            v8[0] = (volatile signed __int64 *)v11; /*0x100544cbb*/
            v8[1] = v12; /*0x100544cc2*/
            std::fs::DirEntry::file_type::hdd298e01714fd423(&v16, v8); /*0x100544ccf*/
            if ( (_BYTE)v16 == 1 ) /*0x100544cd8*/
            {
              v2 = (__int64)v17; /*0x100544dc9*/
LABEL_25:
              if ( !_InterlockedDecrement64(v8[0]) ) /*0x100544dd4*/
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v8); /*0x100544de1*/
              break; /*0x100544de1*/
            }
            v3 = WORD1(v16) & 0xF000; /*0x100544ce4*/
            if ( v3 == 0x4000 ) /*0x100544cf0*/
            {
              std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v16, v8); /*0x100544d53*/
              v5 = v17; /*0x100544d58*/
              v2 = codexmate_lib::platform::paths::harden_private_tree::h9fe6ae7b2bdd290e(v17, __n); /*0x100544d68*/
              if ( v2 ) /*0x100544d6e*/
              {
                if ( v16 ) /*0x100544e02*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v16, 1); /*0x100544e0c*/
                goto LABEL_25; /*0x100544e11*/
              }
              if ( v16 ) /*0x100544d7b*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v16, 1); /*0x100544d85*/
            }
            else if ( v3 != 40960 && SWORD1(v16) < -28672 ) /*0x100544d04*/
            {
              std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v16, v8); /*0x100544d10*/
              v4 = v17; /*0x100544d15*/
              v2 = std::sys::fs::set_permissions::hfb7e5143e400282f(v17, __n); /*0x100544d2a*/
              if ( v16 ) /*0x100544d34*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v16, 1); /*0x100544d3e*/
              if ( v2 ) /*0x100544d46*/
                goto LABEL_25; /*0x100544d46*/
            }
            if ( !_InterlockedDecrement64(v8[0]) ) /*0x100544d91*/
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v8); /*0x100544d9e*/
          }
          v7 = v14; /*0x100544de6*/
LABEL_28:
          if ( !_InterlockedDecrement64(v7) ) /*0x100544dea*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v14); /*0x100544df4*/
        }
      }
    }
    else
    {
      return 0; /*0x100544da8*/
    }
  }
  return v2; /*0x100544dae*/
}