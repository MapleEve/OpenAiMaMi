// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x1004a1040 depth=2
__int64 __fastcall serde_core::ser::Serializer::collect_seq::h043b54613b775f24(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 i; // r15
  __int64 v11; // [rsp+0h] [rbp-70h] BYREF
  __int64 v12; // [rsp+8h] [rbp-68h]
  __m256i v13; // [rsp+10h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h]

  v2 = a1; /*0x1004a1051*/
  v3 = *(_QWORD *)(a2 + 8); /*0x1004a1054*/
  v4 = *(_QWORD *)(a2 + 16); /*0x1004a1058*/
  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_seq::hd54869b8f141de3d( /*0x1004a1068*/
    &v13,
    1,
    v4);
  if ( __OFSUB__(0, v13.i64[0]) ) /*0x1004a106f*/
  {
    *(_QWORD *)(a1 + 8) = v13.i64[1]; /*0x1004a1079*/
    *(_BYTE *)a1 = 6; /*0x1004a107d*/
  }
  else
  {
    v12 = a1; /*0x1004a1085*/
    v15 = *(__int128 *)((char *)v13.i128 + 8); /*0x1004a1099*/
    v14 = v13.i64[0]; /*0x1004a109d*/
    if ( v4 ) /*0x1004a10a4*/
    {
      v5 = 40 * v4; /*0x1004a10ae*/
      while ( 1 ) /*0x1004a10ff*/
      {
        v11 = v3; /*0x1004a10ff*/
        serde_json::value::to_value::hb3d771ed852624b1(&v13, &v11); /*0x1004a1109*/
        if ( v13.i8[0] == 6 ) /*0x1004a1112*/
          break; /*0x1004a1112*/
        v6 = *((_QWORD *)&v15 + 1); /*0x1004a1114*/
        if ( *((_QWORD *)&v15 + 1) == v14 ) /*0x1004a111c*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v14); /*0x1004a1122*/
        v3 += 40; /*0x1004a10c0*/
        *(__m256i *)(v15 + 32 * v6) = v13; /*0x1004a10dc*/
        *((_QWORD *)&v15 + 1) = v6 + 1; /*0x1004a10f5*/
        v5 -= 40; /*0x1004a10f9*/
        if ( !v5 ) /*0x1004a10fd*/
          goto LABEL_9; /*0x1004a10fd*/
      }
      v2 = v12; /*0x1004a116e*/
      *(_QWORD *)(v12 + 8) = v13.i64[1]; /*0x1004a1172*/
      *(_BYTE *)v2 = 6; /*0x1004a1176*/
      v8 = (_QWORD *)v15; /*0x1004a1179*/
      for ( i = *((_QWORD *)&v15 + 1) + 1LL; i != 1; --i ) /*0x1004a1181*/
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v8); /*0x1004a119d*/
        v8 += 4; /*0x1004a11a2*/
      }
      if ( v14 ) /*0x1004a11ae*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004a11bd*/
    }
    else
    {
LABEL_9:
      *(__int128 *)((char *)v13.i128 + 15) = v15; /*0x1004a1129*/
      *(__int64 *)((char *)v13.i64 + 7) = v14; /*0x1004a113d*/
      v2 = v12; /*0x1004a1141*/
      *(_BYTE *)v12 = 4; /*0x1004a1145*/
      v7 = v13.i64[1]; /*0x1004a114c*/
      *(_QWORD *)(v2 + 1) = v13.i64[0]; /*0x1004a1150*/
      *(_OWORD *)(v2 + 9) = __PAIR128__(v13.u64[2], v7); /*0x1004a1154*/
      *(_QWORD *)(v2 + 24) = *(__int64 *)((char *)&v13.i64[2] + 7); /*0x1004a1164*/
    }
  }
  return v2; /*0x1004a11c5*/
}