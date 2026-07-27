// __ZN13codexmate_lib4core5relay12proxy_server35codex_reasoning_effort_from_request @ 0x1002676c0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::relay::proxy_server::codex_reasoning_effort_from_request::hdc4ece2c17b3fc14(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v12[3]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  unsigned __int64 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]

  codexmate_lib::core::relay::proxy_server::extract_reasoning_effort::hdd2dd3291d079fa0(v12, a2); /*0x1002676d5*/
  if ( __OFSUB__(0, v12[0]) ) /*0x1002676dc*/
  {
    _$LT$$RF$str$u20$as$u20$http..header..map..as_header_name..Sealed$GT$::find::h6639e9683dd8a52e( /*0x1002676f9*/
      &v15,
      "x-codex-turn-metadatasession_id",
      21,
      a3);
    if ( (_BYTE)v15 ) /*0x100267702*/
    {
      v5 = *(_QWORD *)(a3 + 40); /*0x10026770c*/
      if ( v17 >= v5 ) /*0x100267713*/
        core::panicking::panic_bounds_check::h56740b1198b22635(v17, v5, &anon_39a6e93098609d65551b0fc4eadbbbd9_907, v4); /*0x10026780d*/
      v6 = *(_QWORD *)(a3 + 32); /*0x100267719*/
      v7 = *(_QWORD *)(v6 + 104 * v17 + 32); /*0x100267721*/
      v8 = *(_QWORD *)(v6 + 104 * v17 + 40); /*0x100267726*/
      if ( v8 ) /*0x10026772e*/
      {
        v9 = 0; /*0x100267730*/
        while ( (unsigned __int8)(*(_BYTE *)(v7 + v9) - 32) < 0x5Fu || *(_BYTE *)(v7 + v9) == 9 ) /*0x10026775a*/
        {
          if ( v8 == ++v9 ) /*0x100267762*/
            goto LABEL_8; /*0x100267762*/
        }
      }
      else
      {
LABEL_8:
        v15 = v7; /*0x100267764*/
        v16 = v8; /*0x100267768*/
        v17 = 0; /*0x10026776c*/
        v18 = 0; /*0x100267774*/
        v19 = v7; /*0x10026777c*/
        v20 = v8; /*0x100267780*/
        serde_json::de::from_trait::h51e180b4bb6af5e0(&v13, &v15); /*0x10026778c*/
        if ( (_BYTE)v13 != 6 ) /*0x100267795*/
        {
          v18 = v14[2]; /*0x1002677d3*/
          v17 = v14[1]; /*0x1002677db*/
          v16 = v14[0]; /*0x1002677e7*/
          v15 = v13; /*0x1002677eb*/
          codexmate_lib::core::relay::proxy_server::extract_reasoning_effort::hdd2dd3291d079fa0(a1, (__int64)&v15); /*0x1002677f6*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v15); /*0x1002677ff*/
          return a1; /*0x100267804*/
        }
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v14); /*0x10026779b*/
      }
    }
    v10 = 0x8000000000000000LL; /*0x1002677a0*/
  }
  else
  {
    a1[2] = v12[2]; /*0x1002677b0*/
    v10 = v12[0]; /*0x1002677b4*/
    a1[1] = v12[1]; /*0x1002677bc*/
  }
  *a1 = v10; /*0x1002677c0*/
  return a1; /*0x1002677c6*/
}