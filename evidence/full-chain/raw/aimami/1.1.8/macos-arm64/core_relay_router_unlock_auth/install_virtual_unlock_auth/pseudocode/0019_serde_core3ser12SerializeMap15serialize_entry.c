// mac 1.1.8 behavioral install_virtual_unlock_auth 0x1003c1a50 d=1
__int64 __fastcall serde_core::ser::SerializeMap::serialize_entry::h7555dc270a8e2c5d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  unsigned __int64 **v4; // rbx
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 *v9; // r13
  unsigned __int64 *v10; // r12
  size_t v11; // rbx
  char v12; // r15
  unsigned __int64 *v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v23; // [rsp+10h] [rbp-40h]
  unsigned __int64 **v24; // [rsp+20h] [rbp-30h]

  if ( *(_BYTE *)a1 == 1 ) /*0x1003c1a64*/
    core::panicking::panic::h286e2dd5eab048be( /*0x1003c1c0d*/
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_900,
      40,
      (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_990);
  v4 = *(unsigned __int64 ***)(a1 + 8); /*0x1003c1a6a*/
  v5 = *v4; /*0x1003c1a72*/
  v23 = a2; /*0x1003c1a7d*/
  if ( *(_BYTE *)(a1 + 1) == 1 ) /*0x1003c1a85*/
  {
    v6 = v5[2]; /*0x1003c1a87*/
    if ( *v5 == v6 ) /*0x1003c1a8e*/
    {
      a2 = v5[2]; /*0x1003c1c46*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v5, a2, 1, 1, 1u); /*0x1003c1c49*/
      v6 = v5[2]; /*0x1003c1c4e*/
    }
    *(_BYTE *)(v5[1] + v6) = 10; /*0x1003c1a98*/
    v7 = v6 + 1; /*0x1003c1a9d*/
  }
  else
  {
    v8 = v5[2]; /*0x1003c1aa5*/
    if ( *v5 - v8 <= 1 ) /*0x1003c1ab0*/
    {
      a2 = v5[2]; /*0x1003c1c6a*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v5, a2, 2, 1, 1u); /*0x1003c1c6d*/
      v8 = v5[2]; /*0x1003c1c72*/
    }
    *(_WORD *)(v5[1] + v8) = 2604; /*0x1003c1aba*/
    v7 = v8 + 2; /*0x1003c1ac1*/
  }
  v5[2] = v7; /*0x1003c1ac5*/
  v24 = v4; /*0x1003c1ac9*/
  v9 = v4[3]; /*0x1003c1acd*/
  if ( v9 ) /*0x1003c1ad4*/
  {
    v10 = v4[1]; /*0x1003c1ada*/
    v11 = (size_t)v4[2]; /*0x1003c1ade*/
    do /*0x1003c1b17*/
    {
      if ( v11 > *v5 - v7 ) /*0x1003c1af9*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(v5, v7, v11, 1, 1u); /*0x1003c1b2f*/
        v7 = v5[2]; /*0x1003c1b34*/
      }
      a2 = (__int64)v10; /*0x1003c1b02*/
      memcpy((void *)(v7 + v5[1]), v10, v11); /*0x1003c1b08*/
      v7 += v11; /*0x1003c1b0d*/
      v5[2] = v7; /*0x1003c1b10*/
      v9 = (unsigned __int64 *)((char *)v9 - 1); /*0x1003c1b14*/
    }
    while ( v9 ); /*0x1003c1b17*/
  }
  *(_BYTE *)(a1 + 1) = 2; /*0x1003c1b3e*/
  serde_json::ser::format_escaped_str::hf263ee7e7d5ab05a(v24, a2, v23, a3); /*0x1003c1b51*/
  v12 = *a4; /*0x1003c1b5a*/
  v13 = *v24; /*0x1003c1b5e*/
  v14 = (*v24)[2]; /*0x1003c1b65*/
  if ( **v24 - v14 <= 1 ) /*0x1003c1b70*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v24, v14, 2, 1, 1u); /*0x1003c1c25*/
    v14 = v13[2]; /*0x1003c1c2a*/
  }
  *(_WORD *)(v13[1] + v14) = 8250; /*0x1003c1b7a*/
  v13[2] = v14 + 2; /*0x1003c1b84*/
  v15 = *v24; /*0x1003c1b88*/
  if ( (v12 & 1) != 0 ) /*0x1003c1b90*/
  {
    v16 = v15[2]; /*0x1003c1b95*/
    if ( *v15 - v16 <= 3 ) /*0x1003c1ba0*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v24, v16, 4, 1, 1u); /*0x1003c1c8e*/
      v16 = v15[2]; /*0x1003c1c93*/
    }
    *(_DWORD *)(v15[1] + v16) = 1702195828; /*0x1003c1baa*/
    v17 = v16 + 4; /*0x1003c1bb1*/
  }
  else
  {
    v18 = v15[2]; /*0x1003c1bba*/
    if ( *v15 - v18 <= 4 ) /*0x1003c1bc5*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(*v24, v18, 5, 1, 1u); /*0x1003c1caf*/
      v18 = v15[2]; /*0x1003c1cb4*/
    }
    v19 = v15[1]; /*0x1003c1bcb*/
    *(_BYTE *)(v19 + v18 + 4) = 101; /*0x1003c1bcf*/
    *(_DWORD *)(v19 + v18) = 1936482662; /*0x1003c1bd4*/
    v17 = v18 + 5; /*0x1003c1bdb*/
  }
  v15[2] = v17; /*0x1003c1bdf*/
  *((_BYTE *)v24 + 32) = 1; /*0x1003c1be3*/
  return 0; /*0x1003c1beb*/
}