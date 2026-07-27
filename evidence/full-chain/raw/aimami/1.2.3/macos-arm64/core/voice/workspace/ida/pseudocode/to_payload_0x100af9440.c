// __ZN13codexmate_lib4core5voice9workspace10to_payload @ 0x100af9440 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD v12[3]; // [rsp+8h] [rbp-C8h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-B0h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-A0h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-88h] BYREF
  _QWORD v16[3]; // [rsp+60h] [rbp-70h] BYREF
  _QWORD v17[3]; // [rsp+78h] [rbp-58h] BYREF
  __int64 v18; // [rsp+90h] [rbp-40h] BYREF
  __int64 v19; // [rsp+98h] [rbp-38h]
  __int64 v20; // [rsp+A0h] [rbp-30h]
  _BYTE v21[33]; // [rsp+AFh] [rbp-21h] BYREF

  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha49e7dd20a67fd1e(v17, a4); /*0x100af9465*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h255a209f470d90f7(v16, a4 + 24); /*0x100af9472*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha3795ed4b846e7ea(v15, a4 + 48); /*0x100af9482*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h65705ec2760f1ac1(v14, a4 + 72); /*0x100af9492*/
  v13[0] = a2; /*0x100af9497*/
  v13[1] = a3; /*0x100af949e*/
  v18 = 0; /*0x100af94a5*/
  v19 = 1; /*0x100af94ad*/
  v20 = 0; /*0x100af94b5*/
  v12[2] = 1610612768; /*0x100af94bd*/
  v12[0] = &v18; /*0x100af94cc*/
  v12[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100af94da*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v13, v12) ) /*0x100af94ef*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100af95b8*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v21,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  a1[14] = v20; /*0x100af9500*/
  v6 = v18; /*0x100af9504*/
  a1[13] = v19; /*0x100af950c*/
  a1[12] = v6; /*0x100af9510*/
  result = *(_QWORD *)(a4 + 128); /*0x100af9514*/
  a1[2] = v17[2]; /*0x100af951f*/
  v8 = v17[0]; /*0x100af9523*/
  a1[1] = v17[1]; /*0x100af952b*/
  *a1 = v8; /*0x100af952f*/
  a1[5] = v16[2]; /*0x100af9536*/
  v9 = v16[0]; /*0x100af953a*/
  a1[4] = v16[1]; /*0x100af9542*/
  a1[3] = v9; /*0x100af9546*/
  v10 = v15[1]; /*0x100af9551*/
  a1[6] = v15[0]; /*0x100af9555*/
  a1[7] = v10; /*0x100af9559*/
  a1[8] = v15[2]; /*0x100af9561*/
  v11 = v14[1]; /*0x100af956c*/
  a1[9] = v14[0]; /*0x100af9573*/
  a1[10] = v11; /*0x100af9577*/
  a1[11] = v14[2]; /*0x100af9582*/
  a1[15] = result; /*0x100af9586*/
  return result; /*0x100af958a*/
}