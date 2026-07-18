// win 1.2.1 NEW export_session_markdown 0x140c21520 d=1
__int64 __fastcall sub_140C21520(unsigned __int8 *a1)
{
  __int64 result; // rax
  unsigned __int8 *v2; // rdi
  int v3; // eax
  unsigned __int8 *v4; // rsi
  __int64 v5; // rdx
  unsigned __int8 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 *v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  unsigned __int8 *v17; // [rsp+48h] [rbp-8h]

  result = a1[792]; /*0x140c21535*/
  if ( !a1[792] ) /*0x140c2153e*/
  {
    v17 = a1; /*0x140c215c9*/
    sub_140C300E0((__int64)a1); /*0x140c215cd*/
    result = (__int64)v17; /*0x140c215d3*/
    if ( *((_QWORD *)v17 + 65) == -1 ) /*0x140c215df*/
      return result; /*0x140c215df*/
    v12 = (__int64 *)(v17 + 520); /*0x140c215ec*/
    v7 = *((_QWORD *)v17 + 66); /*0x140c215f0*/
    v13 = *((_QWORD *)v17 + 67); /*0x140c215fe*/
    v15 = 0; /*0x140c21602*/
    while ( v13 != v15 ) /*0x140c21618*/
    {
      ++v15; /*0x140c21621*/
      v8 = v7 + 96; /*0x140c21625*/
      sub_1408780B0(v7); /*0x140c21629*/
      v7 = v8; /*0x140c2162f*/
    }
    goto LABEL_23; /*0x140c21618*/
  }
  if ( (_DWORD)result != 3 ) /*0x140c21547*/
    return result; /*0x140c21547*/
  v17 = a1; /*0x140c21557*/
  if ( a1[784] == 3 ) /*0x140c2155b*/
  {
    v2 = a1 + 704; /*0x140c21634*/
    v3 = a1[776]; /*0x140c2163b*/
    if ( v3 != 3 ) /*0x140c21642*/
    {
LABEL_6:
      if ( !v3 ) /*0x140c2157f*/
      {
        if ( *(_QWORD *)v2 ) /*0x140c21585*/
        {
          v4 = a1; /*0x140c2158d*/
          sub_140001360(*((_QWORD *)v2 + 1), *(_QWORD *)v2, 1); /*0x140c2159a*/
          a1 = v4; /*0x140c2159f*/
        }
        v5 = *((_QWORD *)v2 + 3); /*0x140c215a2*/
        if ( v5 ) /*0x140c215a9*/
        {
          v6 = a1; /*0x140c215af*/
          sub_140001360(*((_QWORD *)v2 + 4), v5, 1); /*0x140c215bc*/
          a1 = v6; /*0x140c215c1*/
        }
      }
      goto LABEL_19; /*0x140c215c4*/
    }
LABEL_16:
    v9 = *((volatile signed __int64 **)v2 + 8); /*0x140c21648*/
    if ( sub_141221580(v9) ) /*0x140c21653*/
      sub_14122BD90((__int64)v9); /*0x140c21660*/
    *(_WORD *)(v2 + 73) = 0; /*0x140c2166a*/
    a1 = v17; /*0x140c21670*/
    goto LABEL_19; /*0x140c21670*/
  }
  if ( !a1[784] ) /*0x140c2154d*/
  {
    v2 = a1 + 624; /*0x140c21569*/
    v3 = a1[696]; /*0x140c21570*/
    if ( v3 != 3 ) /*0x140c21577*/
      goto LABEL_6; /*0x140c21577*/
    goto LABEL_16; /*0x140c21577*/
  }
LABEL_19:
  sub_140C300E0((__int64)a1); /*0x140c21674*/
  result = (__int64)v17; /*0x140c2167a*/
  if ( *((_QWORD *)v17 + 65) == -1 ) /*0x140c21686*/
    return result; /*0x140c21686*/
  v12 = (__int64 *)(v17 + 520); /*0x140c21693*/
  v10 = *((_QWORD *)v17 + 66); /*0x140c21697*/
  v14 = *((_QWORD *)v17 + 67); /*0x140c216a5*/
  v16 = 0; /*0x140c216a9*/
  while ( v14 != v16 ) /*0x140c216c8*/
  {
    ++v16; /*0x140c216cd*/
    v11 = v10 + 96; /*0x140c216d1*/
    sub_1408780B0(v10); /*0x140c216d5*/
    v10 = v11; /*0x140c216db*/
  }
LABEL_23:
  result = *v12; /*0x140c216e0*/
  if ( *v12 ) /*0x140c216e4*/
    return sub_140001360(*((_QWORD *)v17 + 66), 96 * result, 8); /*0x140c2170d*/
  return result; /*0x140c21705*/
}