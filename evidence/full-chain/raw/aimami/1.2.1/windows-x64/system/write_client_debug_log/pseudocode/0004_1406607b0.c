// win 1.2.1 NEW write_client_debug_log 0x1406607b0 d=1
__int64 __fastcall sub_1406607B0(const __m128i *a1, __int128 *a2)
{
  __int64 v4; // rbx
  bool v5; // zf
  __int128 v6; // xmm0
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int32 v9; // eax
  __int32 v10; // ecx
  __m128i v12[22]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+198h] [rbp+118h] BYREF
  __int128 v14; // [rsp+1A0h] [rbp+120h]
  __int128 v15; // [rsp+1B0h] [rbp+130h]
  __int64 v16; // [rsp+1C0h] [rbp+140h]
  const __m128i *v17; // [rsp+1C8h] [rbp+148h]
  __int64 v18; // [rsp+1D0h] [rbp+150h]
  char v19; // [rsp+1DFh] [rbp+15Fh]
  __int64 v20; // [rsp+1E0h] [rbp+160h]

  v20 = -2; /*0x1406607c3*/
  sub_1415B2FE0(v12, a1, 0x168u); /*0x1406607e1*/
  v4 = a1[24].m128i_i64[0]; /*0x1406607e6*/
  v16 = v4; /*0x1406607ed*/
  v5 = *(_BYTE *)a2 == 0xFF; /*0x1406607f4*/
  v17 = a1; /*0x1406607f7*/
  v18 = v4; /*0x1406607fe*/
  if ( v5 ) /*0x140660805*/
  {
    nullsub_1(); /*0x140660823*/
    v8 = (_DWORD *)sub_140001350(128, 1); /*0x140660832*/
    if ( !v8 ) /*0x14066083a*/
    {
      v19 = 1; /*0x1406608b5*/
      sub_1415F08AB(1, 128); /*0x1406608c6*/
    }
    *v8 = 1819047278; /*0x14066083c*/
    *(_QWORD *)&v14 = 0; /*0x140660842*/
    *((_QWORD *)&v14 + 1) = 128; /*0x14066084d*/
    *(_QWORD *)&v15 = v8; /*0x140660858*/
    *((_QWORD *)&v15 + 1) = 4; /*0x14066085f*/
    v7 = 0; /*0x14066086a*/
  }
  else
  {
    v6 = *a2; /*0x140660807*/
    v15 = a2[1]; /*0x14066080e*/
    v14 = v6; /*0x140660815*/
    v7 = 1; /*0x14066081c*/
  }
  v13 = v7; /*0x14066086c*/
  v9 = a1[24].m128i_i32[2]; /*0x14066087a*/
  v10 = a1[24].m128i_i32[3]; /*0x140660880*/
  v19 = 0; /*0x140660886*/
  return sub_140768E20((unsigned int)v12, v4, (unsigned int)&v13, (int)a1 + 360, v9, v10); /*0x1406608a9*/
}