// module: codexmate_lib/core/codex_config
// addr: 0x1405e4c50
// name: sub_1405E4C50
// win 1.2.1 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_1405E4C50(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  bool v3; // cf
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 *v33; // [rsp+20h] [rbp-20h]
  unsigned __int64 *v34; // [rsp+20h] [rbp-20h]
  unsigned __int64 v35; // [rsp+28h] [rbp-18h]
  unsigned __int64 v36; // [rsp+28h] [rbp-18h]
  unsigned __int64 v37; // [rsp+28h] [rbp-18h]
  unsigned __int64 v38; // [rsp+28h] [rbp-18h]
  __int64 v39; // [rsp+30h] [rbp-10h]
  __int64 v40; // [rsp+30h] [rbp-10h]
  __int64 v41; // [rsp+30h] [rbp-10h]
  __int64 v42; // [rsp+30h] [rbp-10h]
  unsigned __int64 v43; // [rsp+38h] [rbp-8h]

  result = *a1;
  v3 = *a1 < 8;
  v4 = *a1 - 8;
  v5 = 1;
  if ( !v3 )
    v5 = v4;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v3 = result < 2;
      result -= 2LL;
      v11 = 6;
      if ( !v3 )
        v11 = result;
      switch ( v11 )
      {
        case 0LL:
          v19 = a1[1];
          if ( v19 )
            result = sub_140001660(a1[2], v19, 1);
          v20 = a1[4];
          if ( v20 > 0 )
            result = sub_140001660(a1[5], v20, 1);
          v21 = a1[7];
          if ( v21 > 0 )
            result = sub_140001660(a1[8], v21, 1);
          v14 = a1[10];
          if ( v14 <= 0 )
            return result;
          v15 = a1[11];
          break;
        case 1LL:
        case 2LL:
        case 3LL:
        case 4LL:
          v12 = a1[1];
          if ( v12 > 0 )
            result = sub_140001660(a1[2], v12, 1);
          v13 = a1[4];
          if ( v13 > 0 )
            result = sub_140001660(a1[5], v13, 1);
          v14 = a1[7];
          if ( v14 <= 0 )
            return result;
          v15 = a1[8];
          break;
        case 5LL:
          v22 = a1[7];
          if ( v22 > 0 )
            sub_140001660(a1[8], v22, 1);
          v23 = a1[10];
          if ( v23 > 0 )
            sub_140001660(a1[11], v23, 1);
          v24 = a1[13];
          if ( v24 > 0 )
            sub_140001660(a1[14], v24, 1);
          v25 = a1[5];
          v33 = a1;
          v37 = a1[6];
          v41 = 0;
          v43 = v25;
          while ( v37 != v41 )
          {
            ++v41;
            v26 = v25 + 176;
            sub_1402C4D20();
            v25 = v26;
          }
          goto LABEL_49;
        default:
          v27 = a1[12];
          if ( v27 > 0 )
            sub_140001660(a1[13], v27, 1);
          v28 = a1[15];
          if ( v28 > 0 )
            sub_140001660(a1[16], v28, 1);
          v29 = a1[18];
          if ( v29 > 0 )
            sub_140001660(a1[19], v29, 1);
          v30 = a1[7];
          if ( v30 )
            sub_140001660(
              a1[6] - ((8 * v30 + 23) & 0xFFFFFFFFFFFFFFF0uLL),
              v30 + ((8 * v30 + 23) & 0xFFFFFFFFFFFFFFF0uLL) + 17,
              16);
          v34 = a1;
          v38 = a1[5];
          v42 = 0;
          v43 = a1[4];
          v31 = v43;
          while ( v38 != v42 )
          {
            v32 = *(_QWORD *)(v31 + 272);
            if ( v32 )
              sub_140001660(*(_QWORD *)(v31 + 280), v32, 1);
            ++v42;
            sub_1402C4EE0(v31);
            v31 += 304LL;
          }
          result = v34[3];
          if ( result )
            goto LABEL_31;
          return result;
      }
      v16 = 1;
      return sub_140001660(v15, v14, v16);
    }
    v33 = a1;
    if ( v5 == 2 )
    {
      v6 = a1[15];
      if ( v6 > 0 )
        sub_140001660(a1[16], v6, 1);
      v7 = a1[18];
      if ( v7 > 0 )
        sub_140001660(a1[19], v7, 1);
      v8 = a1[10];
      if ( v8 )
        sub_140001660(
          a1[9] - ((8 * v8 + 23) & 0xFFFFFFFFFFFFFFF0uLL),
          v8 + ((8 * v8 + 23) & 0xFFFFFFFFFFFFFFF0uLL) + 17,
          16);
      v35 = a1[8];
      v39 = 0;
      v43 = a1[7];
      v9 = v43;
      while ( v35 != v39 )
      {
        v10 = *(_QWORD *)(v9 + 272);
        if ( v10 )
          sub_140001660(*(_QWORD *)(v9 + 280), v10, 1);
        ++v39;
        sub_1402C4EE0(v9);
        v9 += 304LL;
      }
      result = v33[6];
      if ( result )
      {
LABEL_31:
        v14 = 304 * result;
LABEL_51:
        v16 = 8;
        v15 = v43;
        return sub_140001660(v15, v14, v16);
      }
    }
    else
    {
      v17 = a1[5];
      v36 = a1[6];
      v40 = 0;
      v43 = v17;
      while ( v36 != v40 )
      {
        ++v40;
        v18 = v17 + 176;
        sub_1402C4D20();
        v17 = v18;
      }
LABEL_49:
      result = v33[4];
      if ( result )
      {
        v14 = 176 * result;
        goto LABEL_51;
      }
    }
  }
  return result;
}