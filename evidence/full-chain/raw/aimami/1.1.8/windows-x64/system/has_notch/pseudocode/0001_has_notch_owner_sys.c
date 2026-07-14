// aimami 1.1.8 windows-x64 -- has_notch owner wrapper
// addr=0x1403eca10 (renamed has_notch_owner_sys), size=863B, basic_blocks=32, cyclomatic_complexity=9
// caller: sub_1403CF5B0 (shared main IPC dispatcher, string-length switch, also owns graceful_restart_for_update
//         per owner-map-118.jsonl "inline_match_arm,no_dedicated_wrapper" convention)
// callees: sub_1412762D0(memcpy helper), aHasNotch("has_notch" literal @0x14133b5c4),
//          aApp_2("app" literal @0x14133b79d), sub_140421360(tracing::instrument span-enter),
//          has_notch_async_body_sys@0x140848a50, invoke_resolver_respond_sys@0x1407a7610 (fast/no-span path),
//          nullsub_1, sub_140001360/sub_140001370(alloc/dealloc), sub_1412AD46B, sub_140406280(response finalize)
// 分析工具就绪门

__int64 __fastcall has_notch_owner_sys(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BYTE v11[360]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v12[520]; // [rsp+1A0h] [rbp+120h] BYREF   -- invoke/args context copy (a1[0..520))
  _BYTE v13[152]; // [rsp+3A8h] [rbp+328h] BYREF   -- span-context copy passed to has_notch_async_body_sys
  _BYTE v14[384]; // [rsp+440h] [rbp+3C0h] BYREF   -- response-channel/callback copy (a1[520..920))
  __int64 v15; // [rsp+5C0h] [rbp+540h]
  int v16; // [rsp+5C8h] [rbp+548h]
  int v17; // [rsp+5CCh] [rbp+54Ch]
  int v18; // [rsp+5D0h] [rbp+550h] BYREF          -- tracing span discriminant (3 == span disabled)
  __int128 v19; // [rsp+5D8h] [rbp+558h]
  __int128 v20; // [rsp+5E8h] [rbp+568h]
  __int128 v21; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v22; // [rsp+770h] [rbp+6F0h]
  __int64 v23; // [rsp+780h] [rbp+700h] BYREF
  __int64 v24; // [rsp+788h] [rbp+708h]
  __int64 v25; // [rsp+790h] [rbp+710h]
  __int64 v26; // [rsp+798h] [rbp+718h]
  __int64 v27; // [rsp+7A0h] [rbp+720h] BYREF      -- tracing field: name ptr / value discriminant
  __int128 v28; // [rsp+7A8h] [rbp+728h]           -- tracing field: (len=9,"app" ptr) pair
  __int128 v29; // [rsp+7B8h] [rbp+738h]           -- tracing field: (len=3, args ptr) pair
  __int128 *v30; // [rsp+7C8h] [rbp+748h]
  __int64 v31; // [rsp+7D0h] [rbp+750h]
  __int128 v32; // [rsp+7E0h] [rbp+760h] BYREF
  __int64 v33; // [rsp+7F0h] [rbp+770h]
  __int64 v34; // [rsp+7F8h] [rbp+778h]
  __int64 v35; // [rsp+800h] [rbp+780h]
  char v36; // [rsp+80Eh] [rbp+78Eh]
  char v37; // [rsp+80Fh] [rbp+78Fh]
  __int64 v38; // [rsp+810h] [rbp+790h]

  v38 = -2; /*0x1403eca27*/
  sub_1412762D0(v12, a1, 520); /*0x1403eca48*/
  sub_1412762D0(v14, a1 + 520, 400); /*0x1403eca64*/
  v33 = *(_QWORD *)(a1 + 936); /*0x1403eca70*/
  v32 = *(_OWORD *)(a1 + 920); /*0x1403eca7e*/
  v31 = 0; /*0x1403eca85*/
  v27 = (__int64)aHasNotch; /*0x1403eca97*/          // "has_notch" (9 chars)
  *(_QWORD *)&v28 = 9; /*0x1403eca9e*/
  *((_QWORD *)&v28 + 1) = aApp_2; /*0x1403ecab0*/    // "app" (3 chars) -- command namespace
  *(_QWORD *)&v29 = 3; /*0x1403ecab7*/
  *((_QWORD *)&v29 + 1) = v12; /*0x1403ecac2*/       // args value ptr (argKeys=[] -> effectively empty payload)
  v30 = &v32; /*0x1403ecad0*/
  v37 = 1; /*0x1403ecad7*/
  sub_140421360(&v18, &v27); /*0x1403ecaec*/          // tracing::instrument span enter (#[tracing::instrument] macro expansion)
  if ( v18 != 3 ) /*0x1403ecaf9*/                      // span ENABLED path
  {
    sub_1412762D0(v13, &v18, 152); /*0x1403ecbac*/    // copy span-context (152B) for the async body call
    v37 = 1; /*0x1403ecbb1*/
    sub_140848A50(&v23, v13); /*0x1403ecbc2*/         // has_notch_async_body_sys(result_out=&v23, span_ctx=v13)
    sub_1412762D0(&v18, a1 + 520, 400); /*0x1403ecbd8*/
    v2 = v23; /*0x1403ecbdd*/
    if ( __OFSUB__(-v23, 1) ) /*0x1403ecbe7*/
    {
      BYTE1(v27) = v24; /*0x1403ecbf3*/
      LOBYTE(v27) = 6; /*0x1403ecbf9*/
LABEL_13:
      v36 = 0; /*0x1403ecc9b*/
      sub_1407B5F70(&v18, &v27); /*0x1403eccb0*/      // span exit / record-and-close
      goto LABEL_14; /*0x1403eccb0*/
    }
    v3 = v24; /*0x1403ecc05*/
    v4 = v25; /*0x1403ecc0c*/
    if ( v25 < 0 ) /*0x1403ecc16*/
    {
      v5 = 0; /*0x1403ecc18*/
      goto LABEL_7; /*0x1403ecc18*/
    }
    if ( v25 ) /*0x1403ecc36*/
    {
      nullsub_1(); /*0x1403ecc3c*/
      v5 = 1; /*0x1403ecc41*/
      v6 = sub_140001360(v4, 1); /*0x1403ecc4e*/       // alloc for response buffer
      if ( !v6 ) /*0x1403ecc56*/
      {
LABEL_7:
        v34 = v3; /*0x1403ecc1a*/
        v35 = v2; /*0x1403ecc21*/
        sub_1412AD46B(v5, v4); /*0x1403ecc2e*/         // alloc-fail abort path
      }
      v7 = v6; /*0x1403ecc58*/
      sub_1412762D0(v7, v3, v4); /*0x1403ecc64*/
      if ( !v2 ) /*0x1403ecc6c*/
      {
LABEL_12:
        LOBYTE(v27) = 3; /*0x1403ecc7f*/
        *(_QWORD *)&v28 = v4; /*0x1403ecc86*/
        *((_QWORD *)&v28 + 1) = v7; /*0x1403ecc8d*/
        *(_QWORD *)&v29 = v4; /*0x1403ecc94*/
        goto LABEL_13; /*0x1403ecc94*/
      }
    }
    else
    {
      v7 = 1; /*0x1403ecd5c*/
      if ( !v23 ) /*0x1403ecd64*/
        goto LABEL_12; /*0x1403ecd64*/
    }
    sub_140001370(v3, v2, 1); /*0x1403ecc7a*/          // dealloc
    goto LABEL_12; /*0x1403ecc7a*/
  }
  // span DISABLED fast path (v18 == 3): call invoke_resolver_respond_sys directly
  v29 = v20; /*0x1403ecb0d*/
  v28 = v19; /*0x1403ecb14*/
  sub_1412762D0(v11, a1 + 520, 360); /*0x1403ecb2b*/
  v21 = *(_OWORD *)(a1 + 880); /*0x1403ecb3e*/
  v22 = *(_QWORD *)(a1 + 896); /*0x1403ecb4c*/
  v27 = 1; /*0x1403ecb5f*/
  v37 = 0; /*0x1403ecb6a*/
  sub_1407A7610((unsigned int)v11, v15, (unsigned int)&v27, (unsigned int)&v21, v16, v17); /*0x1403ecb8a*/  // invoke_resolver_respond_sys
LABEL_14:
  if ( !__OFSUB__(0, (_QWORD)v32) ) /*0x1403eccbf*/
  {
    v8 = *((_QWORD *)&v32 + 1); /*0x1403eccc1*/
    v34 = v33; /*0x1403ecccf*/
    v35 = 0; /*0x1403eccd6*/
    v26 = *((_QWORD *)&v32 + 1); /*0x1403ecce1*/
    while ( v34 != v35 ) /*0x1403eccfe*/               // drop Vec<T> elements (96B stride)
    {
      ++v35; /*0x1403ecd03*/
      v9 = v8 + 96; /*0x1403ecd0a*/
      sub_1401EEBE0(); /*0x1403ecd0e*/
      v8 = v9; /*0x1403ecd14*/
    }
    if ( (_QWORD)v32 ) /*0x1403ecd23*/
      sub_140001370(*((_QWORD *)&v32 + 1), 96 * v32, 8); /*0x1403ecd3a*/  // dealloc backing Vec storage
  }
  return sub_140406280(v12); /*0x1403ecd4c*/           // finalize/serialize response, drop v12 args copy
}
