// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b6abd0 depth=2
__int64 __fastcall http::header::map::HeaderMap$LT$T$GT$::get::hea621fbf18c91093(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 i; // r12
  bool v6; // cl
  unsigned __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // [rsp+8h] [rbp-58h]
  unsigned __int64 v13; // [rsp+10h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-48h]
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int16 v16; // [rsp+2Eh] [rbp-32h]

  v13 = *(_QWORD *)(a1 + 40); /*0x100b6abe5*/
  if ( !v13 ) /*0x100b6abec*/
  {
    v15 = 0; /*0x100b6ad22*/
    v10 = *a2; /*0x100b6ad2a*/
    if ( !*a2 ) /*0x100b6ad2a*/
      return v15; /*0x100b6ad30*/
    goto LABEL_17; /*0x100b6ad30*/
  }
  v16 = http::header::map::hash_elem_using::h6f139e3ba8d3febd(); /*0x100b6abfe*/
  v12 = *(unsigned __int16 *)(a1 + 88); /*0x100b6ac0b*/
  v2 = (unsigned __int16)(v12 & v16); /*0x100b6ac0f*/
  v3 = *(_QWORD *)(a1 + 80); /*0x100b6ac12*/
  v14 = *(_QWORD *)(a1 + 32); /*0x100b6ac1a*/
  v4 = *(_QWORD *)(a1 + 72); /*0x100b6ac1e*/
  v15 = 0; /*0x100b6ac22*/
  for ( i = 0; ; ++i ) /*0x100b6ac2a*/
  {
    v6 = v2 < v3; /*0x100b6ac4f*/
    if ( v2 >= v3 ) /*0x100b6ac57*/
      v2 = 0; /*0x100b6ac57*/
    if ( v3 == 0 && !v6 ) /*0x100b6ac5b*/
    {
      while ( 1 ) /*0x100b6ad20*/
        ; /*0x100b6ad20*/
    }
    v7 = *(unsigned __int16 *)(v4 + 4 * v2); /*0x100b6ac63*/
    if ( v7 == 0xFFFF || i > (v12 & ((unsigned int)v2 - (unsigned __int16)(v12 & *(_WORD *)(v4 + 4 * v2 + 2)))) ) /*0x100b6ac89*/
      break; /*0x100b6ac89*/
    if ( *(_WORD *)(v4 + 4 * v2 + 2) == v16 ) /*0x100b6ac8f*/
    {
      if ( v13 <= v7 ) /*0x100b6ac95*/
        core::panicking::panic_bounds_check::h56740b1198b22635( /*0x100b6ad3f*/
          v7,
          v13,
          (__int64)&anon_363c396a8469d773ac7f1706ae8788f7_55);
      v8 = 104 * v7; /*0x100b6ac9b*/
      v9 = *(_QWORD *)(v14 + 104 * v7 + 64); /*0x100b6aca3*/
      if ( (v9 != 0) != (*a2 == 0) ) /*0x100b6acbb*/
      {
        if ( v9 ) /*0x100b6acc9*/
        {
          if ( (unsigned __int8)_$LT$bytes..bytes..Bytes$u20$as$u20$core..cmp..PartialEq$GT$::eq::hc013bcb6963d9103( /*0x100b6acd3*/
                                  v14 + v8 + 64,
                                  a2) )
          {
LABEL_15:
            v15 = v14 + v8 + 24; /*0x100b6ace0*/
            break; /*0x100b6ace9*/
          }
        }
        else if ( *(_BYTE *)(v14 + v8 + 72) == *((_BYTE *)a2 + 8) ) /*0x100b6ac3a*/
        {
          goto LABEL_15; /*0x100b6ac3a*/
        }
      }
    }
    ++v2; /*0x100b6ac43*/
  }
  v10 = *a2; /*0x100b6aced*/
  if ( *a2 ) /*0x100b6acf1*/
LABEL_17:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v10 + 32))(a2 + 3, a2[1], a2[2]); /*0x100b6acf9*/
  return v15; /*0x100b6ad0f*/
}