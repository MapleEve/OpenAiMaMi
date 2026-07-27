// win 1.2.1 | module src/core/relay/storage.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::storage::hydrate_secrets | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall hydrate_secrets(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned int v6; // r12d
  _QWORD *v7; // rbx
  char *v8; // rdx
  __int128 *v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // rbx
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+28h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int128 *v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h] BYREF
  const char *v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+78h] [rbp-8h]
  const char *v23; // [rsp+80h] [rbp+0h]
  __int64 v24; // [rsp+88h] [rbp+8h]
  __int64 v25; // [rsp+90h] [rbp+10h]
  const char *v26; // [rsp+98h] [rbp+18h]
  __int64 v27; // [rsp+A0h] [rbp+20h]
  __int64 v28; // [rsp+A8h] [rbp+28h]
  void *v29; // [rsp+B0h] [rbp+30h]
  __int64 *v30; // [rsp+B8h] [rbp+38h]
  __int64 v31; // [rsp+C0h] [rbp+40h] BYREF
  char *v32; // [rsp+C8h] [rbp+48h]
  __int128 *v33; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v34)(_QWORD, _QWORD); // [rsp+D8h] [rbp+58h]
  char *v35; // [rsp+E0h] [rbp+60h]
  char v36; // [rsp+EFh] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+F0h] [rbp+70h]

  v37 = -2; /*0x1404d43bb*/
  v2 = *(_QWORD *)(a2 + 16); /*0x1404d43c3*/
  if ( v2 ) /*0x1404d43ca*/
  {
    v4 = *(_QWORD *)(a2 + 8); /*0x1404d43d3*/
    v5 = 232 * v2; /*0x1404d43d7*/
    v6 = 0; /*0x1404d43e2*/
    while ( 1 ) /*0x1404d440f*/
    {
      if ( *(_BYTE *)(v4 + 228) ) /*0x1404d440f*/
      {
        get_api_key(&v13, a1, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16)); /*0x1404d4427*/
        v7 = (_QWORD *)(v4 + 72); /*0x1404d442c*/
        if ( !(_BYTE)v13 ) /*0x1404d4434*/
        {
          if ( (_QWORD)v14 == -1 ) /*0x1404d4555*/
          {
            if ( *v7 ) /*0x1404d45ca*/
              sub_140001660(*(_QWORD *)(v4 + 80), *v7, 1); /*0x1404d45dc*/
            *(_QWORD *)(v4 + 72) = 0; /*0x1404d45e1*/
            *(_QWORD *)(v4 + 80) = 1; /*0x1404d45e9*/
            *(_QWORD *)(v4 + 88) = 0; /*0x1404d45f1*/
            if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d4607*/
            {
              v31 = v4; /*0x1404d460d*/
              v32 = (char *)sub_1400015F0; /*0x1404d4618*/
              v19 = 0; /*0x1404d461c*/
              v20 = aCodexmateLibCo_22; /*0x1404d462b*/
              v21 = 35; /*0x1404d462f*/
              v22 = 0; /*0x1404d4637*/
              v23 = aSrcCoreRelaySt; /*0x1404d4646*/
              v24 = 25; /*0x1404d464a*/
              v25 = 2; /*0x1404d4652*/
              v26 = aCodexmateLibCo_22; /*0x1404d465a*/
              v27 = 35; /*0x1404d465e*/
              v28 = 0x1C900000001LL; /*0x1404d4670*/
              v29 = &unk_14175D783; /*0x1404d467b*/
              v30 = &v31; /*0x1404d4683*/
              sub_1412C36A0(&v36, &v19); /*0x1404d468f*/
            }
          }
          else
          {
            if ( *v7 ) /*0x1404d4557*/
              sub_140001660(*(_QWORD *)(v4 + 80), *v7, 1); /*0x1404d4569*/
            *(_QWORD *)(v4 + 88) = v15; /*0x1404d4572*/
            *(_OWORD *)v7 = v14; /*0x1404d457a*/
          }
          goto LABEL_4; /*0x1404d457d*/
        }
        v17 = v15; /*0x1404d443e*/
        v16 = v14; /*0x1404d4446*/
        if ( *v7 ) /*0x1404d444a*/
          sub_140001660(*(_QWORD *)(v4 + 80), *v7, 1); /*0x1404d445c*/
        *(_QWORD *)(v4 + 72) = 0; /*0x1404d4461*/
        *(_QWORD *)(v4 + 80) = 1; /*0x1404d4469*/
        *(_QWORD *)(v4 + 88) = 0; /*0x1404d4471*/
        if ( *(_QWORD *)off_141EC8D80 > 1u ) /*0x1404d4487*/
        {
          v31 = v4; /*0x1404d448d*/
          v32 = (char *)sub_1400015F0; /*0x1404d4498*/
          v33 = &v16; /*0x1404d44a0*/
          v34 = sub_1400015F0; /*0x1404d44a4*/
          v19 = 0; /*0x1404d44a8*/
          v20 = aCodexmateLibCo_22; /*0x1404d44b7*/
          v21 = 35; /*0x1404d44bb*/
          v22 = 0; /*0x1404d44c3*/
          v23 = aSrcCoreRelaySt; /*0x1404d44d2*/
          v24 = 25; /*0x1404d44d6*/
          v25 = 2; /*0x1404d44de*/
          v26 = aCodexmateLibCo_22; /*0x1404d44e6*/
          v27 = 35; /*0x1404d44ea*/
          v28 = 0x1D000000001LL; /*0x1404d44fc*/
          v29 = &unk_14175D7E8; /*0x1404d4507*/
          v30 = &v31; /*0x1404d450f*/
          sub_1412C36A0(&v36, &v19); /*0x1404d451b*/
        }
        v8 = (char *)v16; /*0x1404d4521*/
        if ( (_QWORD)v16 ) /*0x1404d4528*/
        {
          v9 = *((__int128 **)&v16 + 1); /*0x1404d452e*/
LABEL_13:
          sub_140001660(v9, v8, 1); /*0x1404d4532*/
        }
      }
      else if ( !*(_QWORD *)(v4 + 88) ) /*0x1404d43f5*/
      {
        get_api_key(&v31, a1, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16)); /*0x1404d4591*/
        v8 = v32; /*0x1404d459a*/
        if ( ((unsigned __int8)v31 | (v32 + 1 == nullptr)) == 1 ) /*0x1404d45aa*/
        {
          if ( !(_BYTE)v31 || !v32 ) /*0x1404d45bb*/
            goto LABEL_4; /*0x1404d45bb*/
          v9 = v33; /*0x1404d45c1*/
          goto LABEL_13; /*0x1404d45c5*/
        }
        v9 = v33; /*0x1404d4699*/
        v10 = v34; /*0x1404d469d*/
        if ( v34 ) /*0x1404d46a4*/
        {
          v18 = v33; /*0x1404d46aa*/
          v35 = v32; /*0x1404d46ae*/
          if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x1404d46c0*/
          {
            v13 = v4; /*0x1404d46c6*/
            *(_QWORD *)&v14 = sub_1400015F0; /*0x1404d46d1*/
            v19 = 0; /*0x1404d46d5*/
            v20 = aCodexmateLibCo_22; /*0x1404d46e4*/
            v21 = 35; /*0x1404d46e8*/
            v22 = 0; /*0x1404d46f0*/
            v23 = aSrcCoreRelaySt; /*0x1404d46ff*/
            v24 = 25; /*0x1404d4703*/
            v25 = 3; /*0x1404d470b*/
            v26 = aCodexmateLibCo_22; /*0x1404d4713*/
            v27 = 35; /*0x1404d4717*/
            v28 = 0x1D700000001LL; /*0x1404d4729*/
            v29 = &unk_14175D6F4; /*0x1404d4734*/
            v30 = &v13; /*0x1404d4738*/
            sub_1412C36A0(&v36, &v19); /*0x1404d4744*/
          }
          v11 = *(_QWORD *)(v4 + 72); /*0x1404d474a*/
          if ( v11 ) /*0x1404d4751*/
            sub_140001660(*(_QWORD *)(v4 + 80), v11, 1); /*0x1404d475d*/
          *(_QWORD *)(v4 + 72) = v35; /*0x1404d4766*/
          *(_QWORD *)(v4 + 80) = v18; /*0x1404d476e*/
          *(_QWORD *)(v4 + 88) = v10; /*0x1404d4772*/
          *(_BYTE *)(v4 + 228) = 1; /*0x1404d4776*/
          LOBYTE(v6) = 1; /*0x1404d477e*/
          goto LABEL_4; /*0x1404d4781*/
        }
        if ( v32 ) /*0x1404d4789*/
          goto LABEL_13; /*0x1404d4789*/
      }
LABEL_4:
      v4 += 232; /*0x1404d43fb*/
      v5 -= 232; /*0x1404d4402*/
      if ( !v5 ) /*0x1404d4409*/
        return v6; /*0x1404d4409*/
    }
  }
  return 0; /*0x1404d479e*/
}