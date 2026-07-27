// addr=0x140326450
// refs:
//   0x140324fc0  sub_140324FC0
//   0x14042b0e0  sub_14042B0E0
//   0x1402c2e70  sub_1402C2E70
//   0x1402c2d60  sub_1402C2D60

// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140326450(__int64 *a1, _DWORD *a2)
{
  _BYTE *v2; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rcx
  __int64 *result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+30h] [rbp-50h]
  __int128 v8; // [rsp+40h] [rbp-40h]
  __int128 v9; // [rsp+50h] [rbp-30h]
  __m256i v10; // [rsp+60h] [rbp-20h] BYREF
  __int128 v11; // [rsp+80h] [rbp+0h]
  __int64 v12; // [rsp+90h] [rbp+10h]
  __int64 v13; // [rsp+A0h] [rbp+20h]
  _BYTE v14[56]; // [rsp+A8h] [rbp+28h]
  __int64 v15; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v16[56]; // [rsp+E8h] [rbp+68h]
  __int64 *v17; // [rsp+120h] [rbp+A0h]
  _BYTE *v18; // [rsp+128h] [rbp+A8h]
  __int64 v19; // [rsp+130h] [rbp+B0h]

  v19 = -2; /*0x14032646b*/
  v17 = a1; /*0x140326476*/
  v18 = a2; /*0x14032647d*/
  if ( *a2 != 1 ) /*0x140326487*/
    goto LABEL_17; /*0x140326487*/
  v2 = v18 + 8; /*0x140326494*/
  v3 = v18 + 16; /*0x1403264a0*/
  while ( 1 ) /*0x1403264de*/
  {
    sub_140324FC0(v6, v2); /*0x1403264de*/
    if ( v6[0] != -1 ) /*0x1403264eb*/
    {
      *(_OWORD *)&v16[40] = v9; /*0x140326500*/
      *(_OWORD *)&v16[24] = v8; /*0x140326505*/
      *(_OWORD *)&v16[8] = v7; /*0x14032650a*/
      v15 = v6[0]; /*0x14032650e*/
      *(_QWORD *)v16 = v6[1]; /*0x140326512*/
      goto LABEL_9; /*0x140326516*/
    }
    if ( !*v3 ) /*0x140326520*/
      break; /*0x140326520*/
    sub_14042B0E0(&v15, v3, 0); /*0x14032653a*/
LABEL_9:
    *(_OWORD *)&v14[40] = *(_OWORD *)&v16[40]; /*0x14032653f*/
    *(_OWORD *)&v14[24] = *(_OWORD *)&v16[24]; /*0x14032655d*/
    *(_OWORD *)&v14[8] = *(_OWORD *)&v16[8]; /*0x140326561*/
    v13 = v15; /*0x140326565*/
    *(_QWORD *)v14 = *(_QWORD *)v16; /*0x140326569*/
    if ( v15 == -2 ) /*0x140326575*/
      goto LABEL_14; /*0x140326575*/
    v12 = *(_QWORD *)&v14[48]; /*0x14032657b*/
    v11 = *(_OWORD *)&v14[32]; /*0x14032658a*/
    v10 = *(__m256i *)v14; /*0x14032658e*/
    *(_QWORD *)&v16[48] = *(_QWORD *)&v14[48]; /*0x14032659a*/
    *(_OWORD *)&v16[32] = *(_OWORD *)&v14[32]; /*0x14032659e*/
    *(_OWORD *)&v16[16] = *(_OWORD *)&v14[16]; /*0x1403265a3*/
    *(_OWORD *)v16 = *(_OWORD *)v14; /*0x1403265a8*/
    if ( v15 == -1 ) /*0x1403265b1*/
    {
      if ( *(_QWORD *)v16 != -1 ) /*0x1403265bf*/
      {
        v4 = v17; /*0x1403265c5*/
        *v17 = *(_QWORD *)v16; /*0x1403265cc*/
        *(_OWORD *)(v4 + 1) = *(_OWORD *)&v10.m256i_u64[1]; /*0x1403265d6*/
        return &v10.m256i_i64[1]; /*0x1403265da*/
      }
    }
    else
    {
      sub_1402C2E70(&v15); /*0x1403264c3*/
    }
    if ( !*v18 ) /*0x1403264d2*/
      goto LABEL_17; /*0x1403264d2*/
  }
  v13 = -2; /*0x1403265dc*/
LABEL_14:
  if ( *(_QWORD *)v18 ) /*0x1403265eb*/
    sub_1402C2D60(v2); /*0x1403265f4*/
  *(_QWORD *)v18 = 0; /*0x140326601*/
LABEL_17:
  result = v17; /*0x140326608*/
  *v17 = -1; /*0x14032660f*/
  return result; /*0x140326616*/
}
