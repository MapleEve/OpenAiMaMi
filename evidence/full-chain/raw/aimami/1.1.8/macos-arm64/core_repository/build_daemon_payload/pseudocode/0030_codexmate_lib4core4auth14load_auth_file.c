// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x1006c5140 depth=3
// codexmate_lib4core4auth14load_auth_file
_QWORD *__fastcall codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  _BYTE v12[80]; // [rsp+8h] [rbp-1A8h] BYREF
  __int64 v13; // [rsp+58h] [rbp-158h] BYREF
  __int64 v14; // [rsp+60h] [rbp-150h]
  _QWORD v15[10]; // [rsp+68h] [rbp-148h] BYREF
  unsigned __int64 v16; // [rsp+B8h] [rbp-F8h]
  __int64 v17; // [rsp+C0h] [rbp-F0h]
  __int64 v18; // [rsp+C8h] [rbp-E8h]
  __int64 v19; // [rsp+D0h] [rbp-E0h]
  __int64 v20; // [rsp+D8h] [rbp-D8h]
  __int64 v21; // [rsp+E0h] [rbp-D0h]
  __int64 v22; // [rsp+E8h] [rbp-C8h]
  __int64 v23; // [rsp+F0h] [rbp-C0h]
  __int64 v24; // [rsp+F8h] [rbp-B8h]
  __int64 v25; // [rsp+100h] [rbp-B0h]
  _QWORD v26[6]; // [rsp+108h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+138h] [rbp-78h]
  __int64 v28; // [rsp+140h] [rbp-70h]
  __int64 v29; // [rsp+148h] [rbp-68h]
  __int64 v30; // [rsp+150h] [rbp-60h]
  __int64 v31; // [rsp+158h] [rbp-58h]
  __int64 v32; // [rsp+160h] [rbp-50h]
  __int64 v33; // [rsp+168h] [rbp-48h]
  __int64 v34; // [rsp+170h] [rbp-40h]
  __int64 v35; // [rsp+178h] [rbp-38h]
  __int64 v36; // [rsp+180h] [rbp-30h]

  v3 = 0x8000000000000000LL; /*0x1006c5157*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v13, a2, a3); /*0x1006c5168*/
  v4 = v13; /*0x1006c516d*/
  v5 = v14; /*0x1006c5174*/
  if ( __OFSUB__(-v13, 1) ) /*0x1006c517e*/
  {
    a1[1] = 2; /*0x1006c5183*/
    a1[2] = v5; /*0x1006c518b*/
    *a1 = 0x8000000000000001LL; /*0x1006c5192*/
    return a1; /*0x1006c5195*/
  }
  v26[0] = v14; /*0x1006c51a1*/
  v26[1] = v15[0]; /*0x1006c51a8*/
  v26[2] = 0; /*0x1006c51af*/
  v26[3] = 0; /*0x1006c51ba*/
  v26[4] = v14; /*0x1006c51c5*/
  v26[5] = v15[0]; /*0x1006c51cc*/
  serde_json::de::from_trait::hb63d5d64f334fa06(&v13, v26); /*0x1006c51de*/
  v6 = v13; /*0x1006c51e3*/
  v7 = v14; /*0x1006c51ea*/
  if ( v13 == 0x8000000000000001LL ) /*0x1006c51f8*/
  {
    a1[1] = 3; /*0x1006c51fa*/
    a1[2] = v7; /*0x1006c5202*/
    *a1 = 0x8000000000000001LL; /*0x1006c5206*/
    if ( !v4 ) /*0x1006c520c*/
      return a1; /*0x1006c520c*/
    goto LABEL_12; /*0x1006c520c*/
  }
  qmemcpy(v12, v15, sizeof(v12)); /*0x1006c522a*/
  v8 = v17; /*0x1006c5234*/
  v9 = v18; /*0x1006c523b*/
  v27 = v19; /*0x1006c5249*/
  v28 = v20; /*0x1006c5254*/
  v29 = v21; /*0x1006c525f*/
  v30 = v22; /*0x1006c526a*/
  v31 = v23; /*0x1006c5275*/
  v32 = v24; /*0x1006c5280*/
  v33 = v25; /*0x1006c528b*/
  if ( v16 != 0x8000000000000000LL ) /*0x1006c5292*/
  {
    if ( v18 ) /*0x1006c5297*/
    {
      v3 = v16; /*0x1006c5299*/
    }
    else if ( v16 ) /*0x1006c52a1*/
    {
      v34 = v14; /*0x1006c52a3*/
      v35 = v17; /*0x1006c52af*/
      v36 = v18; /*0x1006c52b3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1006c52b7*/
      v9 = v36; /*0x1006c52bc*/
      v8 = v35; /*0x1006c52c0*/
      v7 = v34; /*0x1006c52c4*/
    }
  }
  *a1 = v6; /*0x1006c52c8*/
  a1[1] = v7; /*0x1006c52cb*/
  qmemcpy(a1 + 2, v12, 0x50u); /*0x1006c52df*/
  a1[12] = v3; /*0x1006c52e2*/
  a1[13] = v8; /*0x1006c52e6*/
  a1[14] = v9; /*0x1006c52ea*/
  v10 = v28; /*0x1006c52f2*/
  a1[15] = v27; /*0x1006c52f6*/
  a1[16] = v10; /*0x1006c52fa*/
  a1[17] = v29; /*0x1006c5305*/
  a1[18] = v30; /*0x1006c5310*/
  a1[19] = v31; /*0x1006c531b*/
  a1[20] = v32; /*0x1006c5326*/
  a1[21] = v33; /*0x1006c5331*/
  if ( v4 ) /*0x1006c533b*/
LABEL_12:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1006c533d*/
  return a1; /*0x1006c5350*/
}