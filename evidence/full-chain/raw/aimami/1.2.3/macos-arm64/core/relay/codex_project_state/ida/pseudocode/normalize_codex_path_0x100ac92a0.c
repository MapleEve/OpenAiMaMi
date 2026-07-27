// __ZN13codexmate_lib4core5relay19codex_project_state20normalize_codex_path @ 0x100ac92a0 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::relay::codex_project_state::normalize_codex_path::h7ca6a8890dbadb8e(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  _DWORD *v6; // rax
  unsigned __int64 v7; // rdx
  char *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  char *v11; // rdx
  int v12; // ecx
  char *v13; // rsi
  char v14; // di
  char v15; // r8
  int v16; // r8d
  int v17; // edi
  signed __int64 v18; // rdx
  __int64 v19; // rdi
  signed __int64 v20; // r15
  char *v22; // r15
  signed __int64 v23; // r12
  __int64 v24; // rax

  v5 = a2; /*0x100ac92b4*/
  v6 = (_DWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100ac92ba*/
  if ( v7 >= 4 && *v6 == 1547656284 ) /*0x100ac92cb*/
  {
    v9 = v7 - 4; /*0x100ac938f*/
    v8 = (char *)(v6 + 1); /*0x100ac9393*/
    v10 = 1; /*0x100ac9397*/
    if ( v9 ) /*0x100ac93a0*/
      goto LABEL_4; /*0x100ac93a0*/
LABEL_22:
    v18 = 0; /*0x100ac93a6*/
    goto LABEL_23; /*0x100ac93a6*/
  }
  v5 = a2; /*0x100ac92d1*/
  v8 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100ac92d7*/
  v10 = 1; /*0x100ac92dc*/
  if ( !v9 ) /*0x100ac92e5*/
    goto LABEL_22; /*0x100ac92e5*/
LABEL_4:
  v11 = &v8[v9]; /*0x100ac92eb*/
  while ( 1 ) /*0x100ac9305*/
  {
    v12 = *(v11 - 1); /*0x100ac9305*/
    if ( v12 < 0 ) /*0x100ac930b*/
    {
      v14 = *(v11 - 2); /*0x100ac9320*/
      if ( v14 >= -64 ) /*0x100ac9328*/
      {
        v13 = v11 - 2; /*0x100ac934f*/
        v17 = v14 & 0x1F; /*0x100ac9353*/
      }
      else
      {
        v15 = *(v11 - 3); /*0x100ac932a*/
        if ( v15 >= -64 ) /*0x100ac9333*/
        {
          v13 = v11 - 3; /*0x100ac9358*/
          v16 = v15 & 0xF; /*0x100ac935c*/
        }
        else
        {
          v13 = v11 - 4; /*0x100ac9335*/
          v16 = ((*(v11 - 4) & 7) << 6) | v15 & 0x3F; /*0x100ac934a*/
        }
        v17 = (v16 << 6) | v14 & 0x3F; /*0x100ac9367*/
      }
      v5 = (unsigned int)(v17 << 6); /*0x100ac936a*/
      v12 = v5 | v12 & 0x3F; /*0x100ac9370*/
      if ( v12 == 92 ) /*0x100ac9375*/
        goto LABEL_6; /*0x100ac9375*/
    }
    else
    {
      v13 = v11 - 1; /*0x100ac930d*/
      if ( v12 == 92 ) /*0x100ac9314*/
        goto LABEL_6; /*0x100ac9314*/
    }
    if ( v12 != 47 ) /*0x100ac92f3*/
      break; /*0x100ac92f3*/
LABEL_6:
    v11 = v13; /*0x100ac92f9*/
    if ( v8 == v13 ) /*0x100ac92ff*/
      goto LABEL_22; /*0x100ac92ff*/
  }
  v18 = v11 - v8; /*0x100ac9380*/
  if ( v18 < 0 ) /*0x100ac9383*/
  {
    v19 = 0; /*0x100ac9385*/
    goto LABEL_20; /*0x100ac9385*/
  }
  v22 = v8; /*0x100ac93cd*/
  if ( v18 ) /*0x100ac93d0*/
  {
    v23 = v18; /*0x100ac93d2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v13); /*0x100ac93d5*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1); /*0x100ac93e2*/
    v19 = 1; /*0x100ac93e7*/
    v18 = v23; /*0x100ac93ec*/
    if ( !v24 ) /*0x100ac93f2*/
LABEL_20:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v18); /*0x100ac9387*/
    v10 = v24; /*0x100ac93f4*/
  }
  else
  {
    v18 = 0; /*0x100ac93f9*/
  }
  v8 = v22; /*0x100ac93fb*/
LABEL_23:
  v20 = v18; /*0x100ac93a8*/
  memcpy((void *)v10, v8, v18); /*0x100ac93b1*/
  *a1 = v20; /*0x100ac93b6*/
  a1[1] = v10; /*0x100ac93b9*/
  a1[2] = v20; /*0x100ac93bd*/
  return a1; /*0x100ac93c4*/
}