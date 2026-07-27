// __ZN13codexmate_lib8platform7process32assert_no_external_codex_writers @ 0x1003677d0 | 基线 same-set
__int64 *__fastcall codexmate_lib::platform::process::assert_no_external_codex_writers::hee72a366f7c4ee9d(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-90h] BYREF
  __int64 v9; // [rsp+8h] [rbp-88h]
  __int64 v10; // [rsp+10h] [rbp-80h]
  __int64 v11; // [rsp+18h] [rbp-78h]
  __int64 v12; // [rsp+20h] [rbp-70h]
  __int64 v13; // [rsp+28h] [rbp-68h]
  __int64 v14; // [rsp+30h] [rbp-60h]
  __int64 v15; // [rsp+38h] [rbp-58h]
  __int64 v16; // [rsp+40h] [rbp-50h]
  __int64 v17; // [rsp+48h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-40h]
  __int64 v19; // [rsp+58h] [rbp-38h]
  _QWORD v20[6]; // [rsp+60h] [rbp-30h] BYREF

  codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(&v8); /*0x1003677e8*/
  v2 = v8; /*0x1003677ed*/
  v3 = v9; /*0x1003677f4*/
  v4 = v10; /*0x1003677fb*/
  v5 = v11; /*0x1003677ff*/
  if ( v8 == 11 ) /*0x100367807*/
  {
    v20[0] = v10; /*0x100367810*/
    v20[1] = v10; /*0x100367814*/
    v20[2] = v9; /*0x100367818*/
    v20[3] = v10 + 32 * v11; /*0x10036781c*/
    alloc::vec::in_place_collect::from_iter_in_place::h7c38924dca936911(&v8, v20); /*0x10036782e*/
    codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(a1, &v8); /*0x100367839*/
  }
  else
  {
    a1[11] = v19; /*0x100367844*/
    a1[10] = v18; /*0x10036784c*/
    a1[9] = v17; /*0x100367854*/
    a1[8] = v16; /*0x10036785c*/
    a1[7] = v15; /*0x100367864*/
    a1[6] = v14; /*0x10036786c*/
    v6 = v12; /*0x100367870*/
    a1[5] = v13; /*0x100367878*/
    a1[4] = v6; /*0x10036787c*/
    *a1 = v2; /*0x100367880*/
    a1[1] = v3; /*0x100367883*/
    a1[2] = v4; /*0x100367887*/
    a1[3] = v5; /*0x10036788b*/
  }
  return a1; /*0x100367892*/
}