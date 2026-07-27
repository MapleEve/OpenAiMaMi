// __ZN13codexmate_lib4core8sessions13open_codex_db @ 0x100532390 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::open_codex_db::h5838dac6be6fd626(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax
  _QWORD *v5; // rcx
  __int64 (__fastcall *v6)(_QWORD, _QWORD); // rdx
  _QWORD *v7; // rax
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rcx
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+0h] [rbp-170h] BYREF
  _QWORD *v11; // [rsp+10h] [rbp-160h] BYREF
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // [rsp+18h] [rbp-158h]
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // [rsp+20h] [rbp-150h]
  __int64 v14; // [rsp+28h] [rbp-148h]
  __int64 v15; // [rsp+30h] [rbp-140h]
  __int64 v16; // [rsp+38h] [rbp-138h]
  __int64 v17; // [rsp+40h] [rbp-130h]
  __int64 v18; // [rsp+48h] [rbp-128h]
  _QWORD v19[14]; // [rsp+50h] [rbp-120h] BYREF
  _QWORD *v20; // [rsp+C0h] [rbp-B0h] BYREF
  _QWORD *v21; // [rsp+C8h] [rbp-A8h]
  __int64 (__fastcall *v22)(_QWORD, _QWORD); // [rsp+D0h] [rbp-A0h]
  __int64 v23; // [rsp+D8h] [rbp-98h]
  __int64 v24; // [rsp+E0h] [rbp-90h]
  __int64 v25; // [rsp+E8h] [rbp-88h]
  __int64 v26; // [rsp+F0h] [rbp-80h]
  __int64 v27; // [rsp+F8h] [rbp-78h]
  __int64 v28; // [rsp+100h] [rbp-70h]
  __int64 v29; // [rsp+108h] [rbp-68h]
  __int64 v30; // [rsp+110h] [rbp-60h]
  __int64 v31; // [rsp+118h] [rbp-58h]
  __int64 v32; // [rsp+120h] [rbp-50h]
  __int64 v33; // [rsp+128h] [rbp-48h]
  _QWORD *v34; // [rsp+130h] [rbp-40h] BYREF
  __int64 (__fastcall *v35)(_QWORD, _QWORD); // [rsp+138h] [rbp-38h]
  __int64 v36; // [rsp+140h] [rbp-30h]
  _QWORD *v37; // [rsp+148h] [rbp-28h] BYREF
  __int64 (__fastcall *v38)(_QWORD, _QWORD); // [rsp+150h] [rbp-20h]
  __int64 v39; // [rsp+158h] [rbp-18h]

  rusqlite::Connection::open_with_flags::h45227a733d927884(&v20, a2, a3, (unsigned int)(32770 - a4)); /*0x1005323b4*/
  if ( (_BYTE)v33 == 3 ) /*0x1005323bf*/
  {
    v19[7] = v27; /*0x1005323c9*/
    v19[6] = v26; /*0x1005323d4*/
    v19[5] = v25; /*0x1005323e2*/
    v19[4] = v24; /*0x1005323f0*/
    v19[3] = v23; /*0x1005323fe*/
    v19[2] = v22; /*0x10053240c*/
    v19[1] = v21; /*0x100532421*/
    v19[0] = v20; /*0x100532428*/
    v10[0] = v19; /*0x100532436*/
    v10[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100532444*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v11, &unk_1017C18E3, v10); /*0x100532460*/
    v37 = v11; /*0x100532473*/
    v38 = v12; /*0x100532477*/
    v39 = (__int64)v13; /*0x100532482*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v19); /*0x10053248d*/
    result = v39; /*0x100532492*/
    v36 = v39; /*0x100532496*/
    v5 = v37; /*0x10053249a*/
    v6 = v38; /*0x10053249e*/
    v35 = v38; /*0x1005324a2*/
    v34 = v37; /*0x1005324a6*/
    *(_QWORD *)(a1 + 24) = v39; /*0x1005324aa*/
    *(_QWORD *)(a1 + 16) = v6; /*0x1005324ae*/
    *(_QWORD *)(a1 + 8) = v5; /*0x1005324b2*/
    *(_QWORD *)a1 = 10; /*0x1005324b6*/
    *(_BYTE *)(a1 + 104) = 3; /*0x1005324bd*/
  }
  else
  {
    v37 = v21; /*0x1005324d4*/
    v38 = v22; /*0x1005324df*/
    v39 = v23; /*0x1005324ea*/
    v19[4] = v24; /*0x1005324f5*/
    v19[5] = v25; /*0x100532503*/
    v19[6] = v26; /*0x10053250e*/
    v19[7] = v27; /*0x100532519*/
    v19[8] = v28; /*0x100532524*/
    v19[9] = v29; /*0x10053252f*/
    v19[10] = v30; /*0x10053253a*/
    v19[11] = v31; /*0x100532545*/
    v19[13] = v33; /*0x100532553*/
    v36 = v23; /*0x100532566*/
    v35 = v22; /*0x100532572*/
    v19[3] = v23; /*0x100532576*/
    v19[2] = v22; /*0x10053257d*/
    v19[1] = v21; /*0x100532584*/
    v19[0] = v20; /*0x10053258b*/
    v19[12] = v32; /*0x100532592*/
    rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&v11, v19, 5, 0); /*0x1005325b4*/
    result = 0x8000000000000016LL; /*0x1005325b9*/
    if ( v11 == (_QWORD *)0x8000000000000016LL ) /*0x1005325ca*/
    {
      qmemcpy((void *)a1, v19, 0x70u); /*0x1005325db*/
    }
    else
    {
      v27 = v18; /*0x1005325ea*/
      v26 = v17; /*0x1005325f5*/
      v25 = v16; /*0x100532600*/
      v24 = v15; /*0x10053260e*/
      v23 = v14; /*0x10053261c*/
      v22 = v13; /*0x10053262a*/
      v21 = v12; /*0x10053263f*/
      v20 = v11; /*0x100532646*/
      v34 = &v20; /*0x10053264d*/
      v35 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100532658*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37, &unk_1017C18F3, &v34); /*0x10053266b*/
      v34 = v37; /*0x100532678*/
      v35 = v38; /*0x10053267c*/
      v36 = v39; /*0x100532684*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v20); /*0x10053268f*/
      *(_QWORD *)(a1 + 24) = v36; /*0x100532698*/
      v7 = v34; /*0x10053269c*/
      v8 = v35; /*0x1005326a0*/
      *(_QWORD *)(a1 + 16) = v35; /*0x1005326a4*/
      *(_QWORD *)(a1 + 8) = v7; /*0x1005326a8*/
      *(_QWORD *)a1 = 10; /*0x1005326ac*/
      *(_BYTE *)(a1 + 104) = 3; /*0x1005326b3*/
      return core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v19, &unk_1017C18F3, v9, v8); /*0x1005326be*/
    }
  }
  return result; /*0x1005326c3*/
}