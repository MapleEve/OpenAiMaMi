// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140e9ebf0 | successor of pre-update 0x140d82100 | session <审计会话>
// match evidence: {"body_sim": 0.825, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_140E9EBF0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  _BYTE v14[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int128 v17; // [rsp+A8h] [rbp+28h]
  char v18; // [rsp+18Ch] [rbp+10Ch]
  char v19; // [rsp+19Eh] [rbp+11Eh]
  _QWORD v20[6]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v21; // [rsp+1D0h] [rbp+150h]
  char v22; // [rsp+1E0h] [rbp+160h]
  char v23; // [rsp+1E1h] [rbp+161h]
  __int64 v24; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v25; // [rsp+1F0h] [rbp+170h]
  __int64 v26; // [rsp+1F8h] [rbp+178h]
  __int64 v27; // [rsp+200h] [rbp+180h] BYREF
  __int64 v28; // [rsp+208h] [rbp+188h]
  __int64 v29; // [rsp+210h] [rbp+190h]
  __int64 v30; // [rsp+218h] [rbp+198h] BYREF
  __int64 v31; // [rsp+220h] [rbp+1A0h]
  __int64 v32; // [rsp+228h] [rbp+1A8h]
  __int64 v33; // [rsp+230h] [rbp+1B0h]
  __int64 v34; // [rsp+238h] [rbp+1B8h]
  __int64 v35; // [rsp+240h] [rbp+1C0h]

  v35 = -2;
  sub_140EB7850(v14, a2);
  sub_140213810(&v30, v15, v15 + (v16 << 8));
  sub_1401F5A00(&v27, v14);
  sub_140E9DDF0(&v24, a2[3]);
  v4 = *a2 + 16LL;
  v5 = v31;
  v6 = v32;
  v7 = v28;
  v8 = v29;
  v9 = v25;
  v34 = v24;
  v33 = v25;
  if ( v24 == -1 )
    v9 = 0;
  v20[2] = v31;
  v20[3] = v32;
  v20[4] = v28;
  v20[5] = v29;
  v20[0] = v9;
  v20[1] = v26;
  v22 = v18;
  v23 = v19;
  v21 = v17;
  sub_14063BFC0(a1, v4, v20, 0);
  if ( v34 > 0 )
    sub_140001660(v33, v34, 1);
  if ( v8 )
  {
    v10 = (_QWORD *)(v7 + 8);
    do
    {
      v11 = *(v10 - 1);
      if ( v11 )
        sub_140001660(*v10, v11, 1);
      v10 += 3;
      --v8;
    }
    while ( v8 );
  }
  if ( v27 )
    sub_140001660(v7, 24 * v27, 8);
  if ( v6 )
  {
    v12 = v5;
    do
    {
      sub_1401B16C0(v12);
      v12 += 256;
      --v6;
    }
    while ( v6 );
  }
  if ( v30 )
    sub_140001660(v5, v30 << 8, 8);
  return sub_140292E20(v14);
}
