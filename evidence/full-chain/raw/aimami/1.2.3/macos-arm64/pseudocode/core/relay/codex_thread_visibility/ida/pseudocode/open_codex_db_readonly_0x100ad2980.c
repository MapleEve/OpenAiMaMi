// __ZN13codexmate_lib4core5relay23codex_thread_visibility22open_codex_db_readonly @ 0x100ad2980 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::h07bf0b0a45198e2f(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r15
  __int64 result; // rax
  char v6; // cl
  __int64 *v7; // rdx
  int v8; // esi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-1C0h] BYREF
  __int64 v14; // [rsp+8h] [rbp-1B8h]
  __int64 v15; // [rsp+10h] [rbp-1B0h]
  __int64 v16; // [rsp+18h] [rbp-1A8h]
  __int64 *v17; // [rsp+20h] [rbp-1A0h]
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // [rsp+28h] [rbp-198h]
  __int64 v19; // [rsp+30h] [rbp-190h]
  __int64 v20; // [rsp+38h] [rbp-188h]
  __int64 v21; // [rsp+40h] [rbp-180h]
  __int64 v22; // [rsp+48h] [rbp-178h]
  __int64 v23; // [rsp+50h] [rbp-170h]
  __int64 v24; // [rsp+58h] [rbp-168h]
  __int64 v25; // [rsp+60h] [rbp-160h]
  char v26; // [rsp+68h] [rbp-158h]
  _BYTE v27[7]; // [rsp+69h] [rbp-157h]
  __int64 v28; // [rsp+70h] [rbp-150h]
  __int64 v29; // [rsp+78h] [rbp-148h]
  __int64 v30; // [rsp+80h] [rbp-140h]
  __int64 v31; // [rsp+88h] [rbp-138h] BYREF
  __int64 v32; // [rsp+90h] [rbp-130h]
  __int64 v33; // [rsp+98h] [rbp-128h]
  __int64 v34; // [rsp+A0h] [rbp-120h]
  __int64 *v35; // [rsp+A8h] [rbp-118h]
  __int64 (__fastcall *v36)(_QWORD, _QWORD); // [rsp+B0h] [rbp-110h]
  __int64 v37; // [rsp+B8h] [rbp-108h]
  __int64 v38; // [rsp+C0h] [rbp-100h]
  __int64 v39; // [rsp+C8h] [rbp-F8h]
  __int64 v40; // [rsp+D0h] [rbp-F0h]
  __int64 v41; // [rsp+D8h] [rbp-E8h]
  __int64 v42; // [rsp+E0h] [rbp-E0h]
  __int64 v43; // [rsp+E8h] [rbp-D8h]
  char v44; // [rsp+F0h] [rbp-D0h]
  _BYTE v45[7]; // [rsp+F1h] [rbp-CFh]
  __int64 v46; // [rsp+F8h] [rbp-C8h]
  __int64 v47; // [rsp+100h] [rbp-C0h]
  __int64 v48; // [rsp+108h] [rbp-B8h]
  __int64 *v49; // [rsp+110h] [rbp-B0h]
  __int64 (__fastcall *v50)(_QWORD, _QWORD); // [rsp+118h] [rbp-A8h]
  __int64 v51; // [rsp+120h] [rbp-A0h]
  __int64 v52; // [rsp+128h] [rbp-98h]
  __int64 v53; // [rsp+130h] [rbp-90h]
  __int64 v54; // [rsp+138h] [rbp-88h]
  __int64 v55; // [rsp+140h] [rbp-80h]
  __int64 v56; // [rsp+148h] [rbp-78h]
  __int64 *v57; // [rsp+150h] [rbp-70h] BYREF
  __int64 (__fastcall *v58)(_QWORD, _QWORD); // [rsp+158h] [rbp-68h]
  __int64 v59; // [rsp+160h] [rbp-60h]
  __int64 v60; // [rsp+168h] [rbp-58h]
  __int64 v61; // [rsp+170h] [rbp-50h]
  __int64 v62; // [rsp+178h] [rbp-48h]
  __int64 v63; // [rsp+180h] [rbp-40h]
  _DWORD v64[2]; // [rsp+188h] [rbp-38h]
  __int64 v65; // [rsp+190h] [rbp-30h]
  __int64 v66; // [rsp+198h] [rbp-28h]
  __int64 v67; // [rsp+1A0h] [rbp-20h]

  rusqlite::Connection::open_with_flags::h45227a733d927884(&v31, a2, a3, 32769); /*0x100ad29a2*/
  v4 = v31; /*0x100ad29ae*/
  v46 = v32; /*0x100ad29bc*/
  v47 = v33; /*0x100ad29ca*/
  v48 = v34; /*0x100ad29d8*/
  v57 = v35; /*0x100ad29e6*/
  v58 = v36; /*0x100ad29f1*/
  v59 = v37; /*0x100ad29fc*/
  v60 = v38; /*0x100ad2a07*/
  if ( v44 == 3 ) /*0x100ad2a0d*/
  {
    v65 = v46; /*0x100ad2a1d*/
    v66 = v47; /*0x100ad2a21*/
    v67 = v48; /*0x100ad2a2c*/
    v49 = v57; /*0x100ad2a38*/
    v50 = v58; /*0x100ad2a3f*/
    v51 = v59; /*0x100ad2a4a*/
    v52 = v60; /*0x100ad2a55*/
  }
  else
  {
    v25 = v43; /*0x100ad2a68*/
    v24 = v42; /*0x100ad2a76*/
    v23 = v41; /*0x100ad2a84*/
    v22 = v40; /*0x100ad2a99*/
    v21 = v39; /*0x100ad2aa0*/
    *(_DWORD *)v27 = *(_DWORD *)v45; /*0x100ad2aad*/
    *(_DWORD *)&v27[3] = *(_DWORD *)&v45[3]; /*0x100ad2ab9*/
    v13 = v31; /*0x100ad2abf*/
    v14 = v46; /*0x100ad2ad4*/
    v15 = v47; /*0x100ad2adb*/
    v16 = v48; /*0x100ad2ae9*/
    v20 = v60; /*0x100ad2af4*/
    v19 = v59; /*0x100ad2aff*/
    v18 = v58; /*0x100ad2b0e*/
    v17 = v57; /*0x100ad2b15*/
    v26 = v44; /*0x100ad2b1c*/
    rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&v31, &v13, 5, 0); /*0x100ad2b37*/
    v4 = v31; /*0x100ad2b3c*/
    if ( v31 == 0x8000000000000016LL ) /*0x100ad2b50*/
    {
      v4 = v13; /*0x100ad2b5d*/
      v67 = v16; /*0x100ad2b68*/
      v66 = v15; /*0x100ad2b74*/
      v65 = v14; /*0x100ad2b78*/
      v56 = v24; /*0x100ad2b80*/
      v55 = v23; /*0x100ad2b88*/
      v54 = v22; /*0x100ad2b90*/
      v53 = v21; /*0x100ad2b9b*/
      v52 = v20; /*0x100ad2ba6*/
      v51 = v19; /*0x100ad2bb1*/
      v50 = v18; /*0x100ad2bc0*/
      v49 = v17; /*0x100ad2bc7*/
      result = v25; /*0x100ad2bce*/
      v6 = v26; /*0x100ad2bd5*/
      v64[0] = *(_DWORD *)v27; /*0x100ad2be1*/
      *(_DWORD *)((char *)v64 + 3) = *(_DWORD *)&v27[3]; /*0x100ad2be4*/
      if ( v26 != 3 ) /*0x100ad2bea*/
      {
        v63 = v67; /*0x100ad2bf4*/
        v62 = v66; /*0x100ad2c00*/
        v61 = v65; /*0x100ad2c04*/
        *(_QWORD *)(a1 + 88) = v56; /*0x100ad2c0c*/
        *(_QWORD *)(a1 + 80) = v55; /*0x100ad2c14*/
        *(_QWORD *)(a1 + 72) = v54; /*0x100ad2c1f*/
        *(_QWORD *)(a1 + 64) = v53; /*0x100ad2c2a*/
        *(_QWORD *)(a1 + 56) = v52; /*0x100ad2c35*/
        *(_QWORD *)(a1 + 48) = v51; /*0x100ad2c40*/
        v7 = v49; /*0x100ad2c44*/
        *(_QWORD *)(a1 + 40) = v50; /*0x100ad2c52*/
        *(_QWORD *)(a1 + 32) = v7; /*0x100ad2c56*/
        v8 = *(_DWORD *)((char *)v64 + 3); /*0x100ad2c5d*/
        *(_DWORD *)(a1 + 105) = v64[0]; /*0x100ad2c60*/
        *(_DWORD *)(a1 + 108) = v8; /*0x100ad2c63*/
        v30 = v63; /*0x100ad2c6a*/
        v9 = v61; /*0x100ad2c71*/
        v10 = v62; /*0x100ad2c75*/
        v29 = v62; /*0x100ad2c79*/
        v28 = v61; /*0x100ad2c80*/
        *(_QWORD *)(a1 + 24) = v63; /*0x100ad2c87*/
        *(_QWORD *)(a1 + 16) = v10; /*0x100ad2c8b*/
        *(_QWORD *)(a1 + 8) = v9; /*0x100ad2c8f*/
        *(_QWORD *)a1 = v4; /*0x100ad2c93*/
        *(_QWORD *)(a1 + 96) = result; /*0x100ad2c96*/
        *(_BYTE *)(a1 + 104) = v6; /*0x100ad2c9a*/
        return result; /*0x100ad2c9d*/
      }
    }
    else
    {
      v67 = v34; /*0x100ad2ca9*/
      v66 = v33; /*0x100ad2cbb*/
      v65 = v32; /*0x100ad2cbf*/
      v49 = v35; /*0x100ad2cca*/
      v50 = v36; /*0x100ad2cd8*/
      v51 = v37; /*0x100ad2ce6*/
      v52 = v38; /*0x100ad2cf4*/
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v13); /*0x100ad2d02*/
    }
  }
  v34 = v67; /*0x100ad2d0b*/
  v33 = v66; /*0x100ad2d1a*/
  v32 = v65; /*0x100ad2d21*/
  v35 = v49; /*0x100ad2d36*/
  v36 = v50; /*0x100ad2d3d*/
  v37 = v51; /*0x100ad2d4b*/
  v38 = v52; /*0x100ad2d59*/
  v31 = v4; /*0x100ad2d60*/
  v57 = &v31; /*0x100ad2d67*/
  v58 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ad2d72*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v13, &unk_1017CA945, &v57); /*0x100ad2d88*/
  v61 = v13; /*0x100ad2d9b*/
  v62 = v14; /*0x100ad2d9f*/
  v63 = v15; /*0x100ad2daa*/
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v31); /*0x100ad2db5*/
  result = v63; /*0x100ad2dba*/
  v11 = v61; /*0x100ad2dc5*/
  v12 = v62; /*0x100ad2dc9*/
  *(_QWORD *)(a1 + 24) = v63; /*0x100ad2ddb*/
  *(_QWORD *)(a1 + 16) = v12; /*0x100ad2ddf*/
  *(_QWORD *)(a1 + 8) = v11; /*0x100ad2de3*/
  *(_QWORD *)a1 = 10; /*0x100ad2de7*/
  *(_BYTE *)(a1 + 104) = 3; /*0x100ad2dee*/
  return result; /*0x100ad2df2*/
}