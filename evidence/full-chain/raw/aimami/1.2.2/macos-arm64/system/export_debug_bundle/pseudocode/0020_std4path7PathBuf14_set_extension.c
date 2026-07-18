// mac 1.2.2 NEW export_debug_bundle 0x1013601f0 d=1
__int64 __fastcall std::path::PathBuf::_set_extension::h60d3d6a34fdfa6ec(
        __int64 (__fastcall **a1)(),
        _BYTE *a2,
        size_t a3)
{
  __int64 i; // rax
  __int64 (__fastcall *v6)(); // r13
  __int64 (__fastcall *v7)(); // r12
  bool v8; // al
  __int64 (__fastcall *v9)(); // r14
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 (__fastcall **v16)(); // r8
  size_t v17; // rcx
  __int64 (__fastcall *v18)(); // rsi
  __int64 (__fastcall *v19)(); // r12
  const void *v20; // rsi
  __int64 (__fastcall **v21)(); // r15
  bool v23; // cf
  __int64 (__fastcall *v24)(); // rcx
  __int64 (__fastcall *v25)(); // rsi
  _BYTE *v26; // [rsp+0h] [rbp-B0h] BYREF
  _WORD *v27; // [rsp+8h] [rbp-A8h]
  __int64 v28; // [rsp+10h] [rbp-A0h]
  __int64 (__fastcall *v29)(); // [rsp+38h] [rbp-78h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+40h] [rbp-70h]
  __int64 v31; // [rsp+48h] [rbp-68h]
  __int16 v32; // [rsp+70h] [rbp-40h]
  bool v33; // [rsp+72h] [rbp-3Eh]
  __int64 (__fastcall *v34)(); // [rsp+78h] [rbp-38h]
  __int64 (__fastcall **v35)(); // [rsp+80h] [rbp-30h]

  v26 = a2; /*0x10136020a*/
  v27 = (_WORD *)a3; /*0x101360211*/
  if ( a3 ) /*0x10136021b*/
  {
    for ( i = 0; i != a3; ++i ) /*0x10136021d*/
    {
      if ( a2[i] == 47 ) /*0x101360225*/
      {
        v29 = (__int64 (__fastcall *)())&v26; /*0x101360479*/
        v30 = _$LT$std..ffi..os_str..Display$u20$as$u20$core..fmt..Debug$GT$::fmt::h7b4060d72b4b46b5; /*0x101360484*/
        core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10172A013, (__int64)&v29, (__int64)&off_101926538); /*0x10136049a*/
      }
    }
  }
  v6 = a1[1]; /*0x101360233*/
  v7 = a1[2]; /*0x101360237*/
  v35 = a1; /*0x10136023e*/
  if ( v7 ) /*0x101360242*/
    v8 = *(_BYTE *)v6 == 47; /*0x101360249*/
  else
    v8 = 0; /*0x10136024e*/
  v29 = v6; /*0x101360250*/
  v30 = v7; /*0x101360254*/
  LOBYTE(v31) = 6; /*0x101360258*/
  v33 = v8; /*0x10136025c*/
  v32 = 513; /*0x10136025f*/
  _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84( /*0x101360270*/
    &v26,
    &v29);
  LODWORD(v9) = 0; /*0x101360275*/
  v10 = v27; /*0x10136027f*/
  if ( (_BYTE)v26 == 9 ) /*0x10136028b*/
  {
    v11 = v28; /*0x101360295*/
    if ( v28 != 2 || *v27 != 11822 ) /*0x1013602a7*/
    {
      v14 = v28; /*0x1013602c2*/
      do /*0x1013602e5*/
      {
        v12 = (__int64)v27 + v14; /*0x1013602d0*/
        if ( (_WORD *)((char *)v27 + v14) == v27 ) /*0x1013602d7*/
        {
          v13 = (__int64)v27; /*0x101360303*/
          v10 = nullptr; /*0x101360306*/
          if ( !v27 ) /*0x101360312*/
            goto LABEL_40; /*0x101360312*/
          goto LABEL_21; /*0x101360312*/
        }
        v12 = v14 - 1; /*0x1013602d9*/
      }
      while ( *((_BYTE *)v27 + --v14) != 46 ); /*0x1013602e5*/
      if ( v12 ) /*0x1013602ea*/
      {
        v11 = ~v12 + v28; /*0x1013602f6*/
        v13 = (__int64)v27 + v12 + 1; /*0x1013602f9*/
      }
      else
      {
        v13 = 0; /*0x1013603c9*/
        v12 = v28; /*0x1013603cc*/
      }
      v10 = v27; /*0x1013603cf*/
      if ( v27 ) /*0x1013603d5*/
        v13 = (__int64)v27; /*0x1013603d5*/
      if ( v13 ) /*0x1013603dc*/
        goto LABEL_21; /*0x1013603dc*/
      goto LABEL_40; /*0x1013603dc*/
    }
    v12 = 2; /*0x1013602a9*/
    v13 = 0; /*0x1013602ae*/
    if ( v27 ) /*0x1013602b4*/
      v13 = (__int64)v27; /*0x1013602b4*/
    if ( !v13 ) /*0x1013602bb*/
    {
LABEL_40:
      LODWORD(v9) = 0; /*0x1013603e2*/
      return (unsigned int)v9; /*0x1013603e2*/
    }
LABEL_21:
    if ( !v10 ) /*0x10136031b*/
      v12 = v11; /*0x10136031b*/
    v9 = (__int64 (__fastcall *)())(v12 + v13 - (_QWORD)v6); /*0x101360322*/
    if ( v9 != nullptr /*0x101360345*/
      && v9 != v7
      && ((unsigned __int64)v9 >= (unsigned __int64)v7
       || *((char *)v9 + (_QWORD)v6 - 1) < 0 && *((char *)v9 + (_QWORD)v6) < 0) )
    {
      std::sys::os_str::bytes::Slice::check_public_boundary::slow_path::h8ceeda9a974ed818(v6, v7, v9, &off_101926568); /*0x101360357*/
    }
    v16 = v35; /*0x10136035f*/
    if ( (unsigned __int64)v9 <= (unsigned __int64)v7 ) /*0x101360363*/
    {
      v35[2] = v9; /*0x101360365*/
      v7 = v9; /*0x101360369*/
    }
    LOBYTE(v9) = 1; /*0x10136036c*/
    if ( a3 ) /*0x101360372*/
    {
      v17 = a3 + 1; /*0x101360374*/
      v18 = *v16; /*0x101360378*/
      if ( a3 + 1 > (char *)*v16 - (char *)v7 ) /*0x101360384*/
      {
        v23 = __CFADD__(v7, v17); /*0x1013603fa*/
        v24 = (__int64 (__fastcall *)())((char *)v7 + v17); /*0x1013603fa*/
        if ( v23 ) /*0x1013603fd*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0); /*0x1013604c8*/
        v34 = v24; /*0x101360416*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e(&v29, v18, v6, v24, 1, 1); /*0x10136041a*/
        if ( (_DWORD)v29 == 1 ) /*0x101360423*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f((__int64)v30); /*0x1013604d5*/
        v6 = v30; /*0x101360429*/
        v16 = v35; /*0x10136042d*/
        v35[1] = v30; /*0x101360431*/
        v25 = v34; /*0x101360435*/
        *v16 = v34; /*0x101360439*/
        if ( v25 != v7 ) /*0x10136043f*/
          goto LABEL_33; /*0x10136043f*/
      }
      else if ( v18 != v7 ) /*0x101360389*/
      {
LABEL_33:
        *((_BYTE *)v7 + (_QWORD)v6) = 46; /*0x10136038f*/
        v19 = (__int64 (__fastcall *)())((char *)v7 + 1); /*0x101360395*/
        v16[2] = v19; /*0x101360398*/
        if ( a3 > (char *)*v16 - (char *)v19 ) /*0x1013603a5*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(v35, v19, a3, 1, 1); /*0x1013604b4*/
          v16 = v35; /*0x1013604b9*/
          v19 = v35[2]; /*0x1013604bd*/
        }
        v20 = a2; /*0x1013603b2*/
        v21 = v16; /*0x1013603b8*/
        memcpy((char *)v16[1] + (_QWORD)v19, v20, a3); /*0x1013603bb*/
        v21[2] = (__int64 (__fastcall *)())((char *)v19 + a3); /*0x1013603c3*/
        return (unsigned int)v9; /*0x1013603c7*/
      }
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(v35, v7, 1, 1, 1); /*0x10136045c*/
      v16 = v35; /*0x101360461*/
      v6 = v35[1]; /*0x101360465*/
      v7 = v35[2]; /*0x101360469*/
      goto LABEL_33; /*0x10136046d*/
    }
  }
  return (unsigned int)v9; /*0x1013603e8*/
}