// __ZN13codexmate_lib4core8sessions24normalize_workspace_root @ 0x10053ba40 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::sessions::normalize_workspace_root::ha1815fb1396eaf1b(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  char *v6; // rax
  signed __int64 v7; // rdx
  signed __int64 v8; // rcx
  char *v9; // rdx
  char v10; // di
  char v11; // r8
  char v12; // r9
  char *v13; // rdx
  int v14; // r8d
  int v15; // edi
  signed __int64 v16; // r14
  char *v17; // rcx
  int v18; // edx
  char v19; // si
  char v20; // di
  char v21; // r8
  char *v22; // rcx
  int v23; // edi
  int v24; // esi
  __int64 v25; // rdi
  __int64 v26; // r15
  char *v28; // r12
  __int64 v29; // rax

  v5 = a3; /*0x10053ba51*/
  v6 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10053ba54*/
  do /*0x10053badb*/
  {
    while ( 1 ) /*0x10053ba6f*/
    {
      v8 = v7; /*0x10053ba6f*/
      if ( !v7 ) /*0x10053ba75*/
        goto LABEL_14; /*0x10053ba75*/
      v9 = &v6[v7]; /*0x10053ba77*/
      v5 = (unsigned int)v6[v8 - 1]; /*0x10053ba7b*/
      if ( (int)v5 < 0 ) /*0x10053ba81*/
        break; /*0x10053ba81*/
      v7 = v8 - 1; /*0x10053ba63*/
      if ( (_DWORD)v5 != 47 ) /*0x10053ba69*/
        goto LABEL_14; /*0x10053ba69*/
    }
    v10 = *(v9 - 2); /*0x10053ba83*/
    if ( v10 >= -64 ) /*0x10053ba8b*/
    {
      v13 = v9 - 2; /*0x10053bab2*/
      v15 = v10 & 0x1F; /*0x10053bab6*/
    }
    else
    {
      v11 = *(v9 - 3); /*0x10053ba8d*/
      if ( v11 >= -64 ) /*0x10053ba96*/
      {
        v13 = v9 - 3; /*0x10053babb*/
        v14 = v11 & 0xF; /*0x10053babf*/
      }
      else
      {
        v12 = *(v9 - 4); /*0x10053ba98*/
        v13 = v9 - 4; /*0x10053ba9d*/
        v14 = ((v12 & 7) << 6) | v11 & 0x3F; /*0x10053baad*/
      }
      v15 = (v14 << 6) | v10 & 0x3F; /*0x10053baca*/
    }
    a2 = (unsigned int)(v15 << 6); /*0x10053bacd*/
    v5 = (unsigned int)a2 | v6[v8 - 1] & 0x3F; /*0x10053bad3*/
    v7 = v13 - v6; /*0x10053bad5*/
  }
  while ( (_DWORD)v5 == 47 ); /*0x10053badb*/
  do /*0x10053bb51*/
  {
    while ( 1 ) /*0x10053baeb*/
    {
LABEL_14:
      if ( !v8 ) /*0x10053baee*/
      {
        v26 = 1; /*0x10053bb62*/
        v16 = 0; /*0x10053bb68*/
        goto LABEL_27; /*0x10053bb68*/
      }
      v16 = v8; /*0x10053baf0*/
      v17 = &v6[v8]; /*0x10053baf3*/
      v18 = *(v17 - 1); /*0x10053baf6*/
      if ( v18 < 0 ) /*0x10053bafc*/
        break; /*0x10053bafc*/
      v8 = v17 - 1 - v6; /*0x10053bae3*/
      if ( v18 != 92 ) /*0x10053bae9*/
        goto LABEL_23; /*0x10053bae9*/
    }
    v19 = *(v17 - 2); /*0x10053bafe*/
    if ( v19 >= -64 ) /*0x10053bb06*/
    {
      v22 = v17 - 2; /*0x10053bb2b*/
      v24 = v19 & 0x1F; /*0x10053bb2f*/
    }
    else
    {
      v20 = *(v17 - 3); /*0x10053bb08*/
      if ( v20 >= -64 ) /*0x10053bb10*/
      {
        v22 = v17 - 3; /*0x10053bb34*/
        v23 = v20 & 0xF; /*0x10053bb38*/
      }
      else
      {
        v21 = *(v17 - 4); /*0x10053bb12*/
        v22 = v17 - 4; /*0x10053bb17*/
        v23 = ((v21 & 7) << 6) | v20 & 0x3F; /*0x10053bb26*/
      }
      a2 = (unsigned int)(v23 << 6); /*0x10053bb3b*/
      v24 = a2 | v19 & 0x3F; /*0x10053bb41*/
    }
    v5 = (unsigned int)(v24 << 6); /*0x10053bb43*/
    v8 = v22 - v6; /*0x10053bb4b*/
  }
  while ( ((unsigned int)v5 | v18 & 0x3F) == 0x5C ); /*0x10053bb51*/
LABEL_23:
  if ( v16 < 0 ) /*0x10053bb56*/
  {
    v25 = 0; /*0x10053bb58*/
    goto LABEL_25; /*0x10053bb58*/
  }
  v28 = v6; /*0x10053bb90*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x10053bb93*/
  v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x10053bba0*/
  v25 = 1; /*0x10053bba5*/
  if ( !v29 ) /*0x10053bbad*/
LABEL_25:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v16); /*0x10053bb5a*/
  v26 = v29; /*0x10053bbaf*/
  v6 = v28; /*0x10053bbb2*/
LABEL_27:
  memcpy((void *)v26, v6, v16); /*0x10053bb6b*/
  *a1 = v16; /*0x10053bb79*/
  a1[1] = v26; /*0x10053bb7c*/
  a1[2] = v16; /*0x10053bb80*/
  return a1; /*0x10053bb87*/
}