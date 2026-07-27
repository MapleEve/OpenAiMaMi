/*
 * owner-map: module=core::relay::codex_project_state tier=C evidence=panic-location-2hop
 * addr=0x140499f40 size=0x282 name=sub_140499F40
 * source: AiMaMi 1.2.3 windows-x64 stripped binary, IDA Hex-Rays decompile via idacall.py MCP
 * truncated_chunked=False
 */

/* refs (callees/data used):
 *  0x1416847b0  sub_1416847B0
 *  0x140001690  nullsub_1
 *  0x140001650  sub_140001650
 *  0x1416c2d4b  sub_1416C2D4B
 *  0x141684120  sub_141684120
 *  0x140b842d0  sub_140B842D0
 *  0x1416c3060  sub_1416C3060
 *  0x141758468  aCalledResultUn_3  string="called `Result::unwrap()` on an `Err` value"
 *  0x141758538  off_141758538
 *  0x141757a80  off_141757A80
 *  0x140307860  sub_140307860
 *  0x1400104f0  sub_1400104F0
 *  0x141433d50  sub_141433D50
 *  0x140314bd0  sub_140314BD0
 */

// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140499F40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 result; // rax
  _OWORD *v20; // rcx
  _QWORD v21[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  _QWORD *v27; // [rsp+78h] [rbp-8h]
  __m256i v28; // [rsp+80h] [rbp+0h] BYREF
  __m256i v29; // [rsp+A8h] [rbp+28h] BYREF
  char v30; // [rsp+CFh] [rbp+4Fh]
  __int64 v31; // [rsp+D0h] [rbp+50h]

  v31 = -2; /*0x140499f5b*/
  v27 = a1; /*0x140499f63*/
  if ( a2 ) /*0x140499f6a*/
  {
    v26 = a3; /*0x140499f73*/
LABEL_3:
    v6 = a2 + 360; /*0x140499f7e*/
    v7 = *(unsigned __int16 *)(a2 + 626); /*0x140499f85*/
    v24 = a2; /*0x140499f8c*/
    v8 = a2 - 32; /*0x140499f90*/
    v25 = v7; /*0x140499f94*/
    v9 = 3LL * (unsigned int)(8 * v7); /*0x140499f9f*/
    v10 = -1; /*0x140499fa3*/
    do /*0x140499ff7*/
    {
      if ( !v9 ) /*0x140499fb3*/
      {
        v10 = v25; /*0x14049a010*/
LABEL_13:
        if ( !v26 ) /*0x14049a020*/
          goto LABEL_22; /*0x14049a020*/
        --v26; /*0x14049a026*/
        a2 = *(_QWORD *)(v24 + 8 * v10 + 632); /*0x14049a02a*/
        goto LABEL_3; /*0x14049a032*/
      }
      v11 = v6 + 24; /*0x140499fb5*/
      v12 = *(_QWORD *)(v6 + 16); /*0x140499fbd*/
      v13 = a5 - v12; /*0x140499fc4*/
      if ( a5 < v12 ) /*0x140499fc7*/
        v12 = a5; /*0x140499fc7*/
      v14 = sub_1416847B0(a4, *(_QWORD *)(v6 + 8), v12); /*0x140499fce*/
      if ( v14 ) /*0x140499fd7*/
        v13 = v14; /*0x140499fd7*/
      LOBYTE(v15) = (v13 > 0) - (v13 < 0); /*0x140499fe4*/
      v8 += 32; /*0x140499fe6*/
      ++v10; /*0x140499fea*/
      v9 -= 24; /*0x140499fed*/
      v6 = v11; /*0x140499ff1*/
    }
    while ( (_BYTE)v15 == 1 ); /*0x140499ff7*/
    if ( (_BYTE)v15 ) /*0x140499ffe*/
      goto LABEL_13; /*0x140499ffe*/
    *(_QWORD *)&v22 = 0; /*0x14049a037*/
    v23 = 0; /*0x14049a03f*/
    nullsub_1(v15); /*0x14049a047*/
    v16 = sub_140001650(a5, 1); /*0x14049a054*/
    if ( !v16 ) /*0x14049a05c*/
      sub_1416C2D4B(1, a5); /*0x14049a1ba*/
    v17 = v16; /*0x14049a062*/
    sub_141684120(v16, a4, a5); /*0x14049a06e*/
    v21[0] = a5; /*0x14049a073*/
    v21[1] = v17; /*0x14049a077*/
    v21[2] = a5; /*0x14049a07b*/
    v30 = 1; /*0x14049a07f*/
    sub_140B842D0(&v29, v8); /*0x14049a08a*/
    if ( v29.m256i_i8[0] == -1 ) /*0x14049a094*/
    {
      v28.m256i_i64[0] = v29.m256i_i64[1]; /*0x14049a184*/
      sub_1416C3060( /*0x14049a1aa*/
        (unsigned int)aCalledResultUn_3,
        43,
        (unsigned int)&v28,
        (unsigned int)&off_141758538,
        (__int64)&off_141757A80);
    }
    v28 = v29; /*0x14049a0a2*/
    v30 = 0; /*0x14049a0aa*/
    sub_140307860(&v29, &v22, v21, &v28); /*0x14049a0bd*/
    if ( v29.m256i_i8[0] != -1 ) /*0x14049a0c7*/
      sub_1400104F0(&v29); /*0x14049a0cd*/
    *(_OWORD *)&v29.m256i_u64[1] = v22; /*0x14049a0d7*/
    v29.m256i_i64[3] = v23; /*0x14049a0df*/
    v29.m256i_i8[0] = 5; /*0x14049a0e3*/
    v18 = sub_141433D50(a4, a5, &v29); /*0x14049a0f1*/
    if ( v18 && *(_BYTE *)v18 == 4 ) /*0x14049a0ff*/
    {
      sub_140314BD0(&v28, *(_QWORD *)(v18 + 16), *(_QWORD *)(v18 + 16) + 32LL * *(_QWORD *)(v18 + 24)); /*0x14049a113*/
    }
    else
    {
      v28.m256i_i64[0] = 0; /*0x14049a138*/
      *(_OWORD *)&v28.m256i_u64[1] = 8u; /*0x14049a140*/
    }
    sub_1400104F0(&v29); /*0x14049a154*/
    result = v28.m256i_i64[2]; /*0x14049a159*/
    v20 = v27; /*0x14049a15d*/
    v27[2] = v28.m256i_i64[2]; /*0x14049a161*/
    *v20 = *(_OWORD *)v28.m256i_i8; /*0x14049a169*/
  }
  else
  {
LABEL_22:
    result = (__int64)v27; /*0x14049a11b*/
    *v27 = 0; /*0x14049a11f*/
    *(_QWORD *)(result + 8) = 8; /*0x14049a126*/
    *(_QWORD *)(result + 16) = 0; /*0x14049a12e*/
  }
  return result; /*0x14049a16c*/
}
