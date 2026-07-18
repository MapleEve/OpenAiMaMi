// mac 1.2.2 NEW migrate_session_worktree 0x100a317c0 d=1
__int64 __fastcall codexmate_lib::core::sessions::open_codex_db::h9a3f1ae251dcfdc1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax
  size_t v5; // rcx
  __int64 (__fastcall *v6)(); // rdx
  size_t *v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-170h] BYREF
  size_t *v9; // [rsp+10h] [rbp-160h] BYREF
  size_t v10; // [rsp+18h] [rbp-158h]
  __int64 (__fastcall *v11)(); // [rsp+20h] [rbp-150h]
  __int64 v12; // [rsp+28h] [rbp-148h]
  __int64 v13; // [rsp+30h] [rbp-140h]
  __int64 v14; // [rsp+38h] [rbp-138h]
  __int64 v15; // [rsp+40h] [rbp-130h]
  __int64 v16; // [rsp+48h] [rbp-128h]
  _QWORD v17[14]; // [rsp+50h] [rbp-120h] BYREF
  size_t v18; // [rsp+C0h] [rbp-B0h] BYREF
  size_t v19; // [rsp+C8h] [rbp-A8h]
  __int64 (__fastcall *v20)(); // [rsp+D0h] [rbp-A0h]
  __int64 v21; // [rsp+D8h] [rbp-98h]
  __int64 v22; // [rsp+E0h] [rbp-90h]
  __int64 v23; // [rsp+E8h] [rbp-88h]
  __int64 v24; // [rsp+F0h] [rbp-80h]
  __int64 v25; // [rsp+F8h] [rbp-78h]
  __int64 v26; // [rsp+100h] [rbp-70h]
  __int64 v27; // [rsp+108h] [rbp-68h]
  __int64 v28; // [rsp+110h] [rbp-60h]
  __int64 v29; // [rsp+118h] [rbp-58h]
  __int64 v30; // [rsp+120h] [rbp-50h]
  __int64 v31; // [rsp+128h] [rbp-48h]
  size_t *v32; // [rsp+130h] [rbp-40h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+138h] [rbp-38h]
  __int64 v34; // [rsp+140h] [rbp-30h]
  size_t *v35; // [rsp+148h] [rbp-28h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+150h] [rbp-20h]
  __int64 v37; // [rsp+158h] [rbp-18h]

  rusqlite::Connection::open_with_flags::hd92bd744c840730c(&v18, a2, a3, (unsigned int)(32770 - a4)); /*0x100a317e4*/
  if ( (_BYTE)v31 == 3 ) /*0x100a317ef*/
  {
    v17[7] = v25; /*0x100a317f9*/
    v17[6] = v24; /*0x100a31804*/
    v17[5] = v23; /*0x100a31812*/
    v17[4] = v22; /*0x100a31820*/
    v17[3] = v21; /*0x100a3182e*/
    v17[2] = v20; /*0x100a3183c*/
    v17[1] = v19; /*0x100a31851*/
    v17[0] = v18; /*0x100a31858*/
    v8[0] = v17; /*0x100a31866*/
    v8[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100a31874*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v9, byte_1016FD1A8, (unsigned __int64)v8); /*0x100a31890*/
    v35 = v9; /*0x100a318a3*/
    v36 = (__int64 (__fastcall *)())v10; /*0x100a318a7*/
    v37 = (__int64)v11; /*0x100a318b2*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v17); /*0x100a318bd*/
    result = v37; /*0x100a318c2*/
    v34 = v37; /*0x100a318c6*/
    v5 = (size_t)v35; /*0x100a318ca*/
    v6 = v36; /*0x100a318ce*/
    v33 = v36; /*0x100a318d2*/
    v32 = v35; /*0x100a318d6*/
    *(_QWORD *)(a1 + 24) = v37; /*0x100a318da*/
    *(_QWORD *)(a1 + 16) = v6; /*0x100a318de*/
    *(_QWORD *)(a1 + 8) = v5; /*0x100a318e2*/
    *(_QWORD *)a1 = 9; /*0x100a318e6*/
    *(_BYTE *)(a1 + 104) = 3; /*0x100a318ed*/
  }
  else
  {
    v35 = (size_t *)v19; /*0x100a31904*/
    v36 = v20; /*0x100a3190f*/
    v37 = v21; /*0x100a3191a*/
    v17[4] = v22; /*0x100a31925*/
    v17[5] = v23; /*0x100a31933*/
    v17[6] = v24; /*0x100a3193e*/
    v17[7] = v25; /*0x100a31949*/
    v17[8] = v26; /*0x100a31954*/
    v17[9] = v27; /*0x100a3195f*/
    v17[10] = v28; /*0x100a3196a*/
    v17[11] = v29; /*0x100a31975*/
    v17[13] = v31; /*0x100a31983*/
    v34 = v21; /*0x100a31996*/
    v33 = v20; /*0x100a319a2*/
    v17[3] = v21; /*0x100a319a6*/
    v17[2] = v20; /*0x100a319ad*/
    v17[1] = v19; /*0x100a319b4*/
    v17[0] = v18; /*0x100a319bb*/
    v17[12] = v30; /*0x100a319c2*/
    rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&v9, v17, 5, 0); /*0x100a319e4*/
    result = 0x8000000000000016LL; /*0x100a319e9*/
    if ( v9 == (size_t *)0x8000000000000016LL ) /*0x100a319fa*/
    {
      qmemcpy((void *)a1, v17, 0x70u); /*0x100a31a0b*/
    }
    else
    {
      v25 = v16; /*0x100a31a1a*/
      v24 = v15; /*0x100a31a25*/
      v23 = v14; /*0x100a31a30*/
      v22 = v13; /*0x100a31a3e*/
      v21 = v12; /*0x100a31a4c*/
      v20 = v11; /*0x100a31a5a*/
      v19 = v10; /*0x100a31a6f*/
      v18 = (size_t)v9; /*0x100a31a76*/
      v32 = &v18; /*0x100a31a7d*/
      v33 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100a31a88*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v35, byte_1016FE96D, (unsigned __int64)&v32); /*0x100a31a9b*/
      v32 = v35; /*0x100a31aa8*/
      v33 = v36; /*0x100a31aac*/
      v34 = v37; /*0x100a31ab4*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v18); /*0x100a31abf*/
      *(_QWORD *)(a1 + 24) = v34; /*0x100a31ac8*/
      v7 = v32; /*0x100a31acc*/
      *(_QWORD *)(a1 + 16) = v33; /*0x100a31ad4*/
      *(_QWORD *)(a1 + 8) = v7; /*0x100a31ad8*/
      *(_QWORD *)a1 = 9; /*0x100a31adc*/
      *(_BYTE *)(a1 + 104) = 3; /*0x100a31ae3*/
      return core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(v17); /*0x100a31aee*/
    }
  }
  return result; /*0x100a31af3*/
}