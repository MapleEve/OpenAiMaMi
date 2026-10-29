// aimami 1.2.7 mac truly_undone deep reverse — cluster core/account_coordination/FileLock
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::account_coordination::FileLock::try_acquire::had7ea33505ba5b35 @ 0x100966720 size=467 lines=96 =====
__int64 __fastcall codexmate_lib::core::account_coordination::FileLock::try_acquire::had7ea33505ba5b35(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // r15
  char v9; // al
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r13
  _DWORD *v13; // rsi
  _DWORD *v14; // rdi
  __int64 i; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v19[11]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp-48h] BYREF
  int v22; // [rsp+8Ch] [rbp-34h] BYREF
  __int64 v23; // [rsp+90h] [rbp-30h] BYREF

  v21[0] = a4;
  v21[1] = a5;
  codexmate_lib::core::account_coordination::FileLock::open::hd742f256b11ef8a0(&v18);
  result = (__int64)v18;
  v7 = v19[0];
  if ( v18 == (_QWORD *)11 )
  {
    v22 = v19[0];
    result = _$LT$std..fs..File$u20$as$u20$fs2..FileExt$GT$::try_lock_exclusive::h469647fbb3298b85(&v22);
    v8 = result;
    if ( !result )
    {
      *(_DWORD *)(a1 + 8) = v7;
      *(_QWORD *)a1 = 11;
      return result;
    }
    v9 = std::io::error::Error::kind::hbe3dd139aa56fd1b(result);
    if ( (v8 & 0xFFFFFFFF00000003LL) == 0x2300000002LL
      || v9 == 13
      || (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v8) == 35 )
    {
      *(_DWORD *)(a1 + 8) = -1;
      *(_QWORD *)a1 = 11;
      if ( (v8 & 3) == 1 )
      {
        v10 = v8 - 1;
        v11 = *(_QWORD *)(v8 - 1);
        v12 = *(_QWORD *)(v8 + 7);
        if ( *(_QWORD *)v12 )
          (*(void (__fastcall **)(_QWORD))v12)(*(_QWORD *)(v8 - 1));
LABEL_17:
        v17 = *(_QWORD *)(v12 + 8);
        if ( v17 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v17, *(_QWORD *)(v12 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8);
      }
    }
    else
    {
      v23 = v8;
      v18 = v21;
      v19[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
      v19[1] = &v23;
      v19[2] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v20, &unk_101A3C00F, &v18);
      *(_QWORD *)(a1 + 24) = v20[2];
      v16 = v20[0];
      *(_QWORD *)(a1 + 16) = v20[1];
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = 10;
      if ( (v23 & 3) == 1 )
      {
        v10 = v23 - 1;
        v11 = *(_QWORD *)(v23 - 1);
        v12 = *(_QWORD *)(v23 + 7);
        if ( *(_QWORD *)v12 )
          (*(void (__fastcall **)(__int64))v12)(v11);
        goto LABEL_17;
      }
    }
    return close_NOCANCEL(v7);
  }
  v13 = (_DWORD *)v19 + 1;
  v14 = (_DWORD *)(a1 + 12);
  for ( i = 21; i; --i )
    *v14++ = *v13++;
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v7;
  return result;
}

// ===== codexmate_lib::core::account_coordination::FileLock::open::hd742f256b11ef8a0 @ 0x100966960 size=412 lines=103 =====
__int64 __fastcall codexmate_lib::core::account_coordination::FileLock::open::hd742f256b11ef8a0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rsi
  _DWORD *v19; // rdi
  _DWORD *v20; // rsi
  __int64 i; // rcx
  _QWORD *v22; // [rsp+0h] [rbp-D0h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+8h] [rbp-C8h]
  __int64 *v24; // [rsp+10h] [rbp-C0h]
  __int64 (__fastcall *v25)(_QWORD, _QWORD); // [rsp+18h] [rbp-B8h]
  _QWORD v26[2]; // [rsp+58h] [rbp-78h] BYREF
  int v27; // [rsp+68h] [rbp-68h] BYREF
  _QWORD *v28; // [rsp+6Ch] [rbp-64h]
  __int64 (__fastcall *v29)(); // [rsp+74h] [rbp-5Ch]
  int v30; // [rsp+7Ch] [rbp-54h]
  __int64 v31; // [rsp+84h] [rbp-4Ch] BYREF
  int v32; // [rsp+8Ch] [rbp-44h]
  char v33[4]; // [rsp+90h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+94h] [rbp-3Ch]
  __int64 v35; // [rsp+98h] [rbp-38h]
  __int64 v36; // [rsp+A0h] [rbp-30h] BYREF

  v26[0] = a4;
  v26[1] = a5;
  v7 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3);
  if ( v7
    && (LOWORD(v22) = 511, BYTE2(v22) = 1, (result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v22, v7, v8)) != 0) )
  {
    *a1 = 2;
    a1[1] = result;
  }
  else
  {
    v31 = 0x101018000000000LL;
    v32 = 0x10000;
    std::fs::OpenOptions::_open::h1dad73452047b8aa(v33, &v31, a2, a3);
    if ( v33[0] )
    {
      v36 = v35;
      v22 = v26;
      v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
      v24 = &v36;
      v25 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v27, &unk_101A3C070, &v22);
      v13 = v27;
      v22 = v28;
      v23 = v29;
      LODWORD(v24) = v30;
      result = v36;
      v14 = v36 & 3;
      if ( (_DWORD)v14 == 1 )
      {
        v15 = v36 - 1;
        v16 = *(_QWORD *)(v36 - 1);
        v17 = *(_QWORD *)(v36 + 7);
        if ( *(_QWORD *)v17 )
          (*(void (__fastcall **)(__int64, void *, __int64, __int64, __int64, __int64, _QWORD *, __int64 (__fastcall *)(), __int64 *))v17)(
            v16,
            &unk_101A3C070,
            v10,
            v14,
            v11,
            v12,
            v22,
            v23,
            v24);
        v18 = *(_QWORD *)(v17 + 8);
        if ( v18 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16));
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24, 8);
      }
      v19 = (_DWORD *)a1 + 3;
      v20 = &v22;
      for ( i = 21; i; --i )
        *v19++ = *v20++;
      *a1 = 10;
      *((_DWORD *)a1 + 2) = v13;
    }
    else
    {
      result = v34;
      *((_DWORD *)a1 + 2) = v34;
      *a1 = 11;
    }
  }
  return result;
}

