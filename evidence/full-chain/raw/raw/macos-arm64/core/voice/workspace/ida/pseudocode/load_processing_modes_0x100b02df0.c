// __ZN13codexmate_lib4core5voice9workspace21load_processing_modes @ 0x100b02df0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::load_processing_modes::h83a5d3c3d40fe8ab(
        _QWORD *a1,
        _QWORD *a2,
        __m128i a3)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r13
  _QWORD *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 v26; // [rsp+8h] [rbp-118h] BYREF
  __int64 v27; // [rsp+10h] [rbp-110h]
  __int64 v28; // [rsp+18h] [rbp-108h]
  __int64 v29; // [rsp+20h] [rbp-100h]
  __int64 v30; // [rsp+28h] [rbp-F8h]
  __int64 v31; // [rsp+30h] [rbp-F0h]
  __int64 v32; // [rsp+38h] [rbp-E8h]
  __int64 v33; // [rsp+40h] [rbp-E0h]
  __int64 v34; // [rsp+48h] [rbp-D8h]
  __int64 v35; // [rsp+50h] [rbp-D0h]
  __int64 v36; // [rsp+58h] [rbp-C8h]
  __int64 v37; // [rsp+60h] [rbp-C0h]
  __int64 v38; // [rsp+68h] [rbp-B8h]
  __int64 v39; // [rsp+70h] [rbp-B0h]
  __int64 v40; // [rsp+78h] [rbp-A8h]
  __int64 v41; // [rsp+80h] [rbp-A0h]
  __int64 v42; // [rsp+88h] [rbp-98h]
  __int64 v43; // [rsp+90h] [rbp-90h]
  __int64 v44; // [rsp+98h] [rbp-88h]
  __int64 v45; // [rsp+A0h] [rbp-80h]
  __int64 v46; // [rsp+A8h] [rbp-78h]
  __int64 v47; // [rsp+B0h] [rbp-70h]
  __int64 v48; // [rsp+B8h] [rbp-68h]
  __int64 v49; // [rsp+C0h] [rbp-60h]
  __int64 v50; // [rsp+C8h] [rbp-58h]
  __int64 v51; // [rsp+D0h] [rbp-50h]
  __int64 v52; // [rsp+D8h] [rbp-48h]
  __int64 v53; // [rsp+E0h] [rbp-40h]
  __int64 v54; // [rsp+E8h] [rbp-38h]
  __int64 v55; // [rsp+F0h] [rbp-30h]

  codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(&v26, a2, a3); /*0x100b02e0e*/
  v4 = v26; /*0x100b02e13*/
  v5 = v27; /*0x100b02e1a*/
  v6 = v28; /*0x100b02e27*/
  v7 = v29; /*0x100b02e2e*/
  v8 = v30; /*0x100b02e35*/
  v9 = v31; /*0x100b02e3c*/
  v10 = v32; /*0x100b02e43*/
  v11 = v33; /*0x100b02e4a*/
  v12 = v34; /*0x100b02e51*/
  v13 = v35; /*0x100b02e58*/
  v14 = v36; /*0x100b02e5f*/
  v15 = v37; /*0x100b02e66*/
  v16 = v38; /*0x100b02e6d*/
  if ( __OFSUB__(-v26, 1) ) /*0x100b02e24*/
  {
    *a1 = v27; /*0x100b02e76*/
    a1[1] = v6; /*0x100b02e79*/
    a1[2] = v7; /*0x100b02e7d*/
    a1[3] = v8; /*0x100b02e81*/
    a1[4] = v9; /*0x100b02e85*/
    a1[5] = v10; /*0x100b02e89*/
    a1[6] = v11; /*0x100b02e8d*/
    a1[7] = v12; /*0x100b02e91*/
    a1[8] = v13; /*0x100b02e95*/
    a1[9] = v14; /*0x100b02e99*/
    a1[10] = v15; /*0x100b02e9d*/
    a1[11] = v16; /*0x100b02ea1*/
  }
  else
  {
    v52 = v29; /*0x100b02eaa*/
    v55 = v30; /*0x100b02eae*/
    v51 = v32; /*0x100b02eb2*/
    v50 = v33; /*0x100b02eb6*/
    v49 = v35; /*0x100b02eba*/
    v54 = v36; /*0x100b02ebe*/
    v48 = v43; /*0x100b02ec9*/
    v47 = v42; /*0x100b02ed4*/
    v46 = v41; /*0x100b02edf*/
    v45 = v40; /*0x100b02ef1*/
    v44 = v39; /*0x100b02ef5*/
    a1[1] = v38; /*0x100b02efc*/
    v17 = v45; /*0x100b02f07*/
    a1[2] = v44; /*0x100b02f0b*/
    a1[3] = v17; /*0x100b02f0f*/
    a1[4] = v46; /*0x100b02f17*/
    *a1 = 11; /*0x100b02f1b*/
    v53 = v5; /*0x100b02f22*/
    core::ptr::drop_in_place$LT$$u5b$codexmate_lib..core..models..VoicePromptTemplate$u5d$$GT$::hd6af1f5b3fc8a147( /*0x100b02f26*/
      v5,
      v6);
    if ( v4 ) /*0x100b02f2e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, 112 * v4, 8); /*0x100b02f3d*/
    if ( v9 ) /*0x100b02f45*/
    {
      v18 = v55; /*0x100b02f47*/
      do /*0x100b02f62*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::h34eaa804dcf1652a(v18); /*0x100b02f53*/
        v18 += 160; /*0x100b02f58*/
        --v9; /*0x100b02f5f*/
      }
      while ( v9 ); /*0x100b02f62*/
    }
    if ( v52 ) /*0x100b02f6b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, 160 * v52, 8); /*0x100b02f7e*/
    v19 = v50; /*0x100b02f86*/
    if ( v12 ) /*0x100b02f8a*/
    {
      v20 = (_QWORD *)(v50 + 56); /*0x100b02f8c*/
      do /*0x100b02fa7*/
      {
        v21 = *(v20 - 7); /*0x100b02fa9*/
        if ( v21 ) /*0x100b02fb1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v20 - 6), v21, 1); /*0x100b02fbd*/
        v22 = *(v20 - 4); /*0x100b02fc2*/
        if ( v22 ) /*0x100b02fca*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v20 - 3), v22, 1); /*0x100b02fd6*/
        v23 = *(v20 - 1); /*0x100b02fdb*/
        if ( v23 ) /*0x100b02fe3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v23, 1); /*0x100b02fee*/
        v20 += 9; /*0x100b02fa0*/
        --v12; /*0x100b02fa4*/
      }
      while ( v12 ); /*0x100b02fa7*/
    }
    if ( v51 ) /*0x100b02ffc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 72 * v51, 8); /*0x100b0300e*/
    if ( v15 ) /*0x100b03016*/
    {
      v24 = v54; /*0x100b03018*/
      do /*0x100b03032*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$::h511d12a3e26047e3(v24); /*0x100b03023*/
        v24 += 440; /*0x100b03028*/
        --v15; /*0x100b0302f*/
      }
      while ( v15 ); /*0x100b03032*/
    }
    if ( v49 ) /*0x100b0303b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, 440 * v49, 8); /*0x100b0304d*/
  }
  return a1; /*0x100b03055*/
}